#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_PLUS = 1,
  anon_sym_DASH = 2,
  anon_sym_STAR = 3,
  anon_sym_SLASH = 4,
  anon_sym_STAR_STAR = 5,
  sym_number = 6,
  sym_source_file = 7,
  sym__statement = 8,
  sym__expression = 9,
  sym_unary_expression = 10,
  sym_binary_expression = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
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
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__statement] = STATE(12),
    [sym__expression] = STATE(3),
    [sym_unary_expression] = STATE(3),
    [sym_binary_expression] = STATE(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      sym_number,
    ACTIONS(3), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(4), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [13] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [30] = 2,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [41] = 3,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(3), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [54] = 3,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(3), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(9), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [67] = 3,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(3), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(10), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [80] = 4,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
  [95] = 3,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
  [108] = 2,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [119] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [123] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 123,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
