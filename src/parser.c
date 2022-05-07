#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  sym_block_comment = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_PLUS = 5,
  anon_sym_DASH = 6,
  anon_sym_STAR = 7,
  anon_sym_SLASH = 8,
  anon_sym_STAR_STAR = 9,
  sym_number = 10,
  sym_identifier = 11,
  sym_source_file = 12,
  sym__statement = 13,
  sym_assignment = 14,
  sym__expression = 15,
  sym_parentheses_expression = 16,
  sym_unary_expression = 17,
  sym_binary_expression = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_block_comment] = "block_comment",
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
  [sym_block_comment] = sym_block_comment,
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
  [sym_block_comment] = {
    .visible = true,
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
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '}') ADVANCE(5);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
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
    [sym_block_comment] = ACTIONS(3),
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
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [2] = {
    [sym__expression] = STATE(15),
    [sym_parentheses_expression] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
  },
  [3] = {
    [sym__expression] = STATE(9),
    [sym_parentheses_expression] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
  },
  [4] = {
    [sym__expression] = STATE(16),
    [sym_parentheses_expression] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [5] = {
    [sym__expression] = STATE(11),
    [sym_parentheses_expression] = STATE(11),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(19),
    [sym_identifier] = ACTIONS(19),
  },
  [6] = {
    [sym__expression] = STATE(12),
    [sym_parentheses_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
  },
  [7] = {
    [sym__expression] = STATE(13),
    [sym_parentheses_expression] = STATE(13),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(29), 1,
      anon_sym_STAR,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [17] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [32] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [47] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_STAR_STAR,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [66] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      anon_sym_STAR_STAR,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [83] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [98] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_STAR_STAR,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [118] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_STAR_STAR,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [138] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [158] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [165] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 17,
  [SMALL_STATE(10)] = 32,
  [SMALL_STATE(11)] = 47,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 83,
  [SMALL_STATE(14)] = 98,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 138,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses_expression, 3, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses_expression, 3, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
