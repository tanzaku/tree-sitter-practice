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
            seq('(', $._expression, ')')
        ),

        unary_expression: $ => prec(4, choice(
            seq('+', $._expression),
            seq('-', $._expression)
        )),

        binary_expression: $ => choice(
            prec.left(2, seq($._expression, '*', $._expression)),
            prec.left(2, seq($._expression, '/', $._expression)),
            prec.left(1, seq($._expression, '+', $._expression)),
            prec.left(1, seq($._expression, '-', $._expression)),
            prec.left(3, seq($._expression, '**', $._expression)),
        ),

        number: $ => /\d+/
    }
});
