use std::io::stdin;

use anyhow::{Context, Result};
use tree_sitter::Node;

fn eval_node(node: Node, source: &str) -> Result<f64> {
    match node.kind() {
        "source_file" => eval_node(node.child(0).unwrap(), source),
        "unary_expression" => {
            let op = node.child_by_field_name("op").unwrap();
            let expr = node.child_by_field_name("expr").unwrap();
            let expr = eval_node(expr, source)?;

            match op.kind() {
                "+" => Ok(expr),
                "-" => Ok(-expr),
                _ => unreachable!(),
            }
        }
        "parentheses_expression" => {
            let expr = node.child_by_field_name("expr").unwrap();
            eval_node(expr, source)
        }
        "binary_expression" => {
            let lhs = node.child_by_field_name("lhs").unwrap();
            let lhs = eval_node(lhs, source)?;

            let rhs = node.child_by_field_name("rhs").unwrap();
            let rhs = eval_node(rhs, source)?;

            let op = node.child_by_field_name("op").unwrap();

            match op.kind() {
                "+" => Ok(lhs + rhs),
                "-" => Ok(lhs - rhs),
                "*" => Ok(lhs * rhs),
                "/" => Ok(lhs / rhs),
                "**" => Ok(lhs.powf(rhs)),
                _ => unimplemented!(),
            }
        }
        "number" => {
            let text = node.utf8_text(source.as_bytes()).unwrap();
            text.parse::<f64>()
                .context(format!("Cannot parse as f64: {}", text))
        }
        _ => unreachable!(),
    }
}

fn eval(source: &str) -> Result<f64> {
    let language = tree_sitter_practice::language();
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(language)?;

    let tree = parser.parse(source, None).context("Cannot parse")?;
    let root_node = tree.root_node();

    eval_node(root_node, source)
}

fn main() -> Result<()> {
    let stdin = stdin();
    let mut source = String::new();

    while let Ok(_) = stdin.read_line(&mut source) {
        println!("{}={}", source.trim(), eval(&source)?);
        source.clear();
    }

    Ok(())
}

#[cfg(test)]
mod tests {
    use crate::eval;

    #[test]
    fn test_practice() {
        assert_eq!(eval("1+2").unwrap(), 3.0);
        assert_eq!(eval("2**3+1").unwrap(), 9.0);
        assert_eq!(eval("2**(3+1)").unwrap(), 16.0);
        assert_eq!(eval("2*4/8").unwrap(), 1.0);
        assert_eq!(eval("2/4*8").unwrap(), 4.0);
        assert!(eval("2+").is_err());
    }
}
