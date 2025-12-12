#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_atom = 1,
  anon_sym_POUND = 2,
  aux_sym_bool_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_lambda = 6,
  sym_sexp = 7,
  sym__element = 8,
  sym_bool = 9,
  sym_list = 10,
  sym_datum = 11,
  sym_lambda = 12,
  aux_sym_sexp_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_atom] = "atom",
  [anon_sym_POUND] = "#",
  [aux_sym_bool_token1] = "bool_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_lambda] = "lambda",
  [sym_sexp] = "sexp",
  [sym__element] = "_element",
  [sym_bool] = "bool",
  [sym_list] = "list",
  [sym_datum] = "datum",
  [sym_lambda] = "lambda",
  [aux_sym_sexp_repeat1] = "sexp_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_atom] = sym_atom,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_bool_token1] = aux_sym_bool_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_lambda] = anon_sym_lambda,
  [sym_sexp] = sym_sexp,
  [sym__element] = sym__element,
  [sym_bool] = sym_bool,
  [sym_list] = sym_list,
  [sym_datum] = sym_datum,
  [sym_lambda] = sym_lambda,
  [aux_sym_sexp_repeat1] = aux_sym_sexp_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bool_token1] = {
    .visible = false,
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
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [sym_sexp] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_datum] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sexp_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_bool_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_bool_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
  },
  [1] = {
    [sym_sexp] = STATE(13),
    [sym__element] = STATE(4),
    [sym_bool] = STATE(7),
    [sym_list] = STATE(4),
    [sym_datum] = STATE(4),
    [sym_lambda] = STATE(7),
    [aux_sym_sexp_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_atom] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [2] = {
    [sym__element] = STATE(5),
    [sym_bool] = STATE(7),
    [sym_list] = STATE(5),
    [sym_datum] = STATE(5),
    [sym_lambda] = STATE(7),
    [aux_sym_sexp_repeat1] = STATE(5),
    [sym_atom] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_lambda] = ACTIONS(15),
  },
  [3] = {
    [sym__element] = STATE(3),
    [sym_bool] = STATE(7),
    [sym_list] = STATE(3),
    [sym_datum] = STATE(3),
    [sym_lambda] = STATE(7),
    [aux_sym_sexp_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_atom] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(22),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(17),
  },
  [4] = {
    [sym__element] = STATE(3),
    [sym_bool] = STATE(7),
    [sym_list] = STATE(3),
    [sym_datum] = STATE(3),
    [sym_lambda] = STATE(7),
    [aux_sym_sexp_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_atom] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [5] = {
    [sym__element] = STATE(3),
    [sym_bool] = STATE(7),
    [sym_list] = STATE(3),
    [sym_datum] = STATE(3),
    [sym_lambda] = STATE(7),
    [aux_sym_sexp_repeat1] = STATE(3),
    [sym_atom] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(30),
  },
  [6] = {
    [sym__element] = STATE(17),
    [sym_bool] = STATE(7),
    [sym_list] = STATE(17),
    [sym_datum] = STATE(17),
    [sym_lambda] = STATE(7),
    [sym_atom] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8] = 1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [16] = 1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [24] = 1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [32] = 1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [40] = 1,
    ACTIONS(42), 1,
      aux_sym_bool_token1,
  [44] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
  [48] = 1,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
  [52] = 1,
    ACTIONS(48), 1,
      sym_atom,
  [56] = 1,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
  [60] = 1,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 8,
  [SMALL_STATE(9)] = 16,
  [SMALL_STATE(10)] = 24,
  [SMALL_STATE(11)] = 32,
  [SMALL_STATE(12)] = 40,
  [SMALL_STATE(13)] = 44,
  [SMALL_STATE(14)] = 48,
  [SMALL_STATE(15)] = 52,
  [SMALL_STATE(16)] = 56,
  [SMALL_STATE(17)] = 60,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_repeat1, 2), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datum, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_utlc(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
