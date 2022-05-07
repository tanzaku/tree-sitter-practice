#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_PLUS = 4,
  anon_sym_DASH = 5,
  anon_sym_STAR = 6,
  anon_sym_SLASH = 7,
  anon_sym_STAR_STAR = 8,
  sym_number = 9,
  sym_identifier = 10,
  sym_source_file = 11,
  sym__statement = 12,
  sym_assignment = 13,
  sym__expression = 14,
  sym_parentheses_expression = 15,
  sym_unary_expression = 16,
  sym_binary_expression = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_parentheses_expression] = "parentheses_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_assignment] = sym_assignment,
  [sym__expression] = sym__expression,
  [sym_parentheses_expression] = sym_parentheses_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parentheses_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_expr = 1,
  field_lhs = 2,
  field_op = 3,
  field_rhs = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expr] = "expr",
  [field_lhs] = "lhs",
  [field_op] = "op",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expr, 1},
    {field_op, 0},
  [2] =
    {field_expr, 1},
  [3] =
    {field_lhs, 0},
    {field_rhs, 2},
  [5] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(4);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__statement] = STATE(18),
    [sym_assignment] = STATE(18),
    [sym__expression] = STATE(14),
    [sym_parentheses_expression] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(11), 2,
      sym_number,
      sym_identifier,
    STATE(15), 4,
      sym__expression,
      sym_parentheses_expression,
      sym_unary_expression,
      sym_binary_expression,
  [18] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(13), 2,
      sym_number,
      sym_identifier,
    STATE(9), 4,
      sym__expression,
      sym_parentheses_expression,
      sym_unary_expression,
      sym_binary_expression,
  [36] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(15), 2,
      sym_number,
      sym_identifier,
    STATE(16), 4,
      sym__expression,
      sym_parentheses_expression,
      sym_unary_expression,
      sym_binary_expression,
  [54] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(17), 2,
      sym_number,
      sym_identifier,
    STATE(11), 4,
      sym__expression,
      sym_parentheses_expression,
      sym_unary_expression,
      sym_binary_expression,
  [72] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_number,
      sym_identifier,
    STATE(12), 4,
      sym__expression,
      sym_parentheses_expression,
      sym_unary_expression,
      sym_binary_expression,
  [90] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      sym_number,
      sym_identifier,
    STATE(13), 4,
      sym__expression,
      sym_parentheses_expression,
      sym_unary_expression,
      sym_binary_expression,
  [108] = 3,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [122] = 2,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [134] = 2,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [146] = 4,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [162] = 3,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [176] = 2,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [188] = 5,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [205] = 5,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [222] = 5,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [239] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [243] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 205,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 239,
  [SMALL_STATE(18)] = 243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses_expression, 3, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses_expression, 3, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_practice(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
