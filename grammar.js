module.exports = grammar({
    name: 'practice',

    rules: {
        source_file: $ => $._statement,

        _statement: $ => prec(1, choice(
            $._expression
        )),

        _expression: $ => choice(
            $.number,
            $.unary_expression,
            $.binary_expression,
            $.parentheses_expression
        ),

        parentheses_expression: $ => seq('(', field('expr', $._expression), ')'),

        unary_expression: $ => prec(4, choice(
            seq(field('op', '+'), field('expr', $._expression)),
            seq(field('op', '-'), field('expr', $._expression))
        )),

        binary_expression: $ => choice(
            prec.left(2, seq(field('lhs', $._expression), field('op', '*'), field('rhs', $._expression))),
            prec.left(2, seq(field('lhs', $._expression), field('op', '/'), field('rhs', $._expression))),
            prec.left(1, seq(field('lhs', $._expression), field('op', '+'), field('rhs', $._expression))),
            prec.left(1, seq(field('lhs', $._expression), field('op', '-'), field('rhs', $._expression))),
            prec.left(3, seq(field('lhs', $._expression), field('op', '**'), field('rhs', $._expression))),
        ),

        number: $ => /\d+/
    }
});
