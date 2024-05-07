#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_atom = 1,
  anon_sym_POUND = 2,
  aux_sym_bool_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_lambda = 6,
  sym_utlc = 7,
  sym_bool = 8,
  sym_list = 9,
  sym_datum = 10,
  sym_lambda = 11,
  aux_sym_list_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_atom] = "atom",
  [anon_sym_POUND] = "#",
  [aux_sym_bool_token1] = "bool_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_lambda] = "lambda",
  [sym_utlc] = "utlc",
  [sym_bool] = "bool",
  [sym_list] = "list",
  [sym_datum] = "datum",
  [sym_lambda] = "lambda",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_atom] = sym_atom,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_bool_token1] = aux_sym_bool_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_lambda] = anon_sym_lambda,
  [sym_utlc] = sym_utlc,
  [sym_bool] = sym_bool,
  [sym_list] = sym_list,
  [sym_datum] = sym_datum,
  [sym_lambda] = sym_lambda,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [sym_utlc] = {
    .visible = true,
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
  [aux_sym_list_repeat1] = {
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
  [18] = 18,
  [19] = 19,
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
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
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(10);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
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
    [sym_utlc] = STATE(13),
    [sym_bool] = STATE(9),
    [sym_list] = STATE(14),
    [sym_datum] = STATE(14),
    [sym_lambda] = STATE(9),
    [sym_atom] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      sym_atom,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_lambda,
    STATE(5), 2,
      sym_list,
      aux_sym_list_repeat1,
  [17] = 5,
    ACTIONS(3), 1,
      sym_atom,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_datum,
    STATE(9), 2,
      sym_bool,
      sym_lambda,
  [34] = 4,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      sym_atom,
    STATE(5), 2,
      sym_list,
      aux_sym_list_repeat1,
  [48] = 4,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_atom,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_list,
      aux_sym_list_repeat1,
  [62] = 4,
    ACTIONS(25), 1,
      sym_atom,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_list,
      aux_sym_list_repeat1,
  [76] = 1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [83] = 1,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      sym_atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [90] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [95] = 1,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [100] = 1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [105] = 1,
    ACTIONS(43), 1,
      aux_sym_bool_token1,
  [109] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [113] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [117] = 1,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
  [121] = 1,
    ACTIONS(51), 1,
      sym_atom,
  [125] = 1,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
  [129] = 1,
    ACTIONS(55), 1,
      anon_sym_lambda,
  [133] = 1,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 109,
  [SMALL_STATE(14)] = 113,
  [SMALL_STATE(15)] = 117,
  [SMALL_STATE(16)] = 121,
  [SMALL_STATE(17)] = 125,
  [SMALL_STATE(18)] = 129,
  [SMALL_STATE(19)] = 133,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datum, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utlc, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_utlc() {
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
