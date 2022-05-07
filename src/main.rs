use std::{collections::HashMap, io::stdin};

use anyhow::{Context, Result};
use tree_sitter::Node;

#[derive(Default)]
struct PracticeContext {
    variables: HashMap<String, f64>,
}

fn eval_node(node: Node, source: &str, ctx: &mut PracticeContext) -> Result<f64> {
    match node.kind() {
        "source_file" => eval_node(node.child(0).unwrap(), source, ctx),
        "unary_expression" => {
            let op = node.child_by_field_name("op").unwrap();
            let expr = node.child_by_field_name("expr").unwrap();
            let expr = eval_node(expr, source, ctx)?;

            match op.kind() {
                "+" => Ok(expr),
                "-" => Ok(-expr),
                _ => unreachable!(),
            }
        }
        "parentheses_expression" => {
            let expr = node.child_by_field_name("expr").unwrap();
            eval_node(expr, source, ctx)
        }
        "binary_expression" => {
            let lhs = node.child_by_field_name("lhs").unwrap();
            let lhs = eval_node(lhs, source, ctx)?;

            let rhs = node.child_by_field_name("rhs").unwrap();
            let rhs = eval_node(rhs, source, ctx)?;

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
        "assignment" => {
            let lhs = node.child_by_field_name("lhs").unwrap();
            let lhs = lhs.utf8_text(source.as_bytes()).unwrap().to_owned();

            let rhs = node.child_by_field_name("rhs").unwrap();
            let rhs = eval_node(rhs, source, ctx)?;

            ctx.variables.insert(lhs, rhs);

            Ok(rhs)
        }
        "number" => {
            let text = node.utf8_text(source.as_bytes()).unwrap();
            text.parse::<f64>()
                .with_context(|| format!("Cannot parse as f64: {}", text))
        }
        "identifier" => {
            let text = node.utf8_text(source.as_bytes()).unwrap();

            ctx.variables
                .get(text)
                .cloned()
                .with_context(|| format!("undefined variable: {}", text))
        }
        _ => {
            dbg!(node);
            unreachable!()
        }
    }
}

fn eval(source: &str, ctx: &mut PracticeContext) -> Result<f64> {
    let language = tree_sitter_practice::language();
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(language)?;

    let tree = parser.parse(source, None).context("Cannot parse")?;
    let root_node = tree.root_node();

    eval_node(root_node, source, ctx)
}

fn main() -> Result<()> {
    let stdin = stdin();

    let mut source = String::new();
    let mut ctx = PracticeContext::default();

    while let Ok(_) = stdin.read_line(&mut source) {
        println!("{}={}", source.trim(), eval(&source, &mut ctx)?);
        source.clear();
    }

    Ok(())
}

#[cfg(test)]
mod tests {
    use crate::{eval, PracticeContext};

    #[test]
    fn test_practice() {
        let mut ctx = PracticeContext::default();
        assert_eq!(eval("1+2", &mut ctx).unwrap(), 3.0);
        assert_eq!(eval("2**3+1", &mut ctx).unwrap(), 9.0);
        assert_eq!(eval("2**(3+1)", &mut ctx).unwrap(), 16.0);
        assert_eq!(eval("2*4/8", &mut ctx).unwrap(), 1.0);
        assert_eq!(eval("2/4*8", &mut ctx).unwrap(), 4.0);
        assert!(eval("2+", &mut ctx).is_err());

        assert_eq!(eval("x=2**3+1", &mut ctx).unwrap(), 9.0);
        assert_eq!(eval("x*x", &mut ctx).unwrap(), 81.0);
    }
}
