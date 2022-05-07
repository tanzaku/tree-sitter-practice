module.exports = grammar({
    name: 'practice',

    rules: {
        source_file: $ => repeat($._statement),

        _statement: $ => choice(
            $._expression
        ),

        _expression: $ => choice(
            $.number,
            $.unary_expression,
            $.binary_expression
        ),

        unary_expression: $ => choice(
            seq('+', $._expression),
            seq('-', $._expression)
        ),

        binary_expression: $ => choice(
            seq($._expression, '*', $._expression),
            seq($._expression, '/', $._expression),
            seq($._expression, '+', $._expression),
            seq($._expression, '-', $._expression),
            seq($._expression, '**', $._expression),
        ),

        number: $ => /\d+/
    }
});
