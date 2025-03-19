/* Automatically generated by tree-sitter v0.25.3 (2a835ee029dca1c325e6f1c01dbce40396f6123e) */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 1
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  anon_sym_interface = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_typedef = 5,
  anon_sym_enum = 6,
  anon_sym_COMMA = 7,
  anon_sym_unsignedlong = 8,
  anon_sym_double = 9,
  anon_sym_boolean = 10,
  anon_sym_DOMString = 11,
  sym_identifier = 12,
  sym_enum_value = 13,
  anon_sym_attribute = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_source_file = 17,
  sym_definition = 18,
  sym_interface_definition = 19,
  sym_typedef = 20,
  sym_enum_definition = 21,
  sym_type = 22,
  sym_interface_member = 23,
  sym_attribute = 24,
  sym_method = 25,
  sym_parameter_list = 26,
  sym_parameter = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_interface_definition_repeat1 = 29,
  aux_sym_enum_definition_repeat1 = 30,
  aux_sym_parameter_list_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_typedef] = "typedef",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_unsignedlong] = "unsigned long",
  [anon_sym_double] = "double",
  [anon_sym_boolean] = "boolean",
  [anon_sym_DOMString] = "DOMString",
  [sym_identifier] = "identifier",
  [sym_enum_value] = "enum_value",
  [anon_sym_attribute] = "attribute",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_interface_definition] = "interface_definition",
  [sym_typedef] = "typedef",
  [sym_enum_definition] = "enum_definition",
  [sym_type] = "type",
  [sym_interface_member] = "interface_member",
  [sym_attribute] = "attribute",
  [sym_method] = "method",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_unsignedlong] = anon_sym_unsignedlong,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_DOMString] = anon_sym_DOMString,
  [sym_identifier] = sym_identifier,
  [sym_enum_value] = sym_enum_value,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_typedef] = sym_typedef,
  [sym_enum_definition] = sym_enum_definition,
  [sym_type] = sym_type,
  [sym_interface_member] = sym_interface_member,
  [sym_attribute] = sym_attribute,
  [sym_method] = sym_method,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsignedlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOMString] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_attribute] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_member] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '"', 2,
        '(', 74,
        ')', 75,
        ',', 66,
        ';', 63,
        'D', 4,
        'a', 51,
        'b', 42,
        'd', 40,
        'e', 35,
        'i', 37,
        't', 57,
        'u', 33,
        '{', 61,
        '}', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'M') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'S') ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 58:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOMString);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_enum_value);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 58},
  [50] = {.lex_state = 58},
  [51] = {.lex_state = 58},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_unsignedlong] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_DOMString] = ACTIONS(1),
    [sym_enum_value] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_source_file] = STATE(33),
    [sym_definition] = STATE(6),
    [sym_interface_definition] = STATE(15),
    [sym_typedef] = STATE(15),
    [sym_enum_definition] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_typedef] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_attribute,
    STATE(47), 1,
      sym_type,
    STATE(4), 2,
      sym_interface_member,
      aux_sym_interface_definition_repeat1,
    STATE(8), 2,
      sym_attribute,
      sym_method,
    ACTIONS(13), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [24] = 6,
    ACTIONS(15), 1,
      anon_sym_attribute,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_type,
    STATE(2), 2,
      sym_interface_member,
      aux_sym_interface_definition_repeat1,
    STATE(8), 2,
      sym_attribute,
      sym_method,
    ACTIONS(13), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [48] = 6,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      anon_sym_attribute,
    STATE(47), 1,
      sym_type,
    STATE(4), 2,
      sym_interface_member,
      aux_sym_interface_definition_repeat1,
    STATE(8), 2,
      sym_attribute,
      sym_method,
    ACTIONS(21), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [72] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_interface,
    ACTIONS(32), 1,
      anon_sym_typedef,
    ACTIONS(35), 1,
      anon_sym_enum,
    STATE(5), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(15), 3,
      sym_interface_definition,
      sym_typedef,
      sym_enum_definition,
  [94] = 6,
    ACTIONS(5), 1,
      anon_sym_interface,
    ACTIONS(7), 1,
      anon_sym_typedef,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(15), 3,
      sym_interface_definition,
      sym_typedef,
      sym_enum_definition,
  [116] = 5,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_parameter,
    STATE(42), 1,
      sym_type,
    STATE(43), 1,
      sym_parameter_list,
    ACTIONS(13), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [135] = 1,
    ACTIONS(42), 6,
      anon_sym_RBRACE,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
      anon_sym_attribute,
  [144] = 1,
    ACTIONS(44), 6,
      anon_sym_RBRACE,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
      anon_sym_attribute,
  [153] = 1,
    ACTIONS(46), 6,
      anon_sym_RBRACE,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
      anon_sym_attribute,
  [162] = 3,
    STATE(29), 1,
      sym_parameter,
    STATE(42), 1,
      sym_type,
    ACTIONS(13), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [175] = 1,
    ACTIONS(48), 6,
      anon_sym_RBRACE,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
      anon_sym_attribute,
  [184] = 2,
    STATE(51), 1,
      sym_type,
    ACTIONS(13), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [194] = 2,
    STATE(30), 1,
      sym_type,
    ACTIONS(13), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [204] = 1,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
  [211] = 1,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
  [218] = 1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
  [225] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
  [232] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
  [239] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
  [246] = 3,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_parameter_list_repeat1,
  [256] = 3,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_enum_definition_repeat1,
  [266] = 3,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_enum_definition_repeat1,
  [276] = 3,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_enum_definition_repeat1,
  [286] = 3,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [296] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [306] = 1,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [311] = 1,
    ACTIONS(84), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [316] = 1,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [321] = 1,
    ACTIONS(86), 1,
      sym_identifier,
  [325] = 1,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
  [329] = 1,
    ACTIONS(90), 1,
      anon_sym_SEMI,
  [333] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [337] = 1,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
  [341] = 1,
    ACTIONS(96), 1,
      sym_enum_value,
  [345] = 1,
    ACTIONS(98), 1,
      anon_sym_SEMI,
  [349] = 1,
    ACTIONS(100), 1,
      anon_sym_SEMI,
  [353] = 1,
    ACTIONS(102), 1,
      sym_identifier,
  [357] = 1,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [361] = 1,
    ACTIONS(106), 1,
      sym_enum_value,
  [365] = 1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
  [369] = 1,
    ACTIONS(110), 1,
      sym_identifier,
  [373] = 1,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [377] = 1,
    ACTIONS(114), 1,
      anon_sym_SEMI,
  [381] = 1,
    ACTIONS(116), 1,
      anon_sym_SEMI,
  [385] = 1,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
  [389] = 1,
    ACTIONS(120), 1,
      sym_identifier,
  [393] = 1,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [397] = 1,
    ACTIONS(124), 1,
      sym_identifier,
  [401] = 1,
    ACTIONS(126), 1,
      sym_identifier,
  [405] = 1,
    ACTIONS(128), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 194,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 239,
  [SMALL_STATE(21)] = 246,
  [SMALL_STATE(22)] = 256,
  [SMALL_STATE(23)] = 266,
  [SMALL_STATE(24)] = 276,
  [SMALL_STATE(25)] = 286,
  [SMALL_STATE(26)] = 296,
  [SMALL_STATE(27)] = 306,
  [SMALL_STATE(28)] = 311,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 325,
  [SMALL_STATE(32)] = 329,
  [SMALL_STATE(33)] = 333,
  [SMALL_STATE(34)] = 337,
  [SMALL_STATE(35)] = 341,
  [SMALL_STATE(36)] = 345,
  [SMALL_STATE(37)] = 349,
  [SMALL_STATE(38)] = 353,
  [SMALL_STATE(39)] = 357,
  [SMALL_STATE(40)] = 361,
  [SMALL_STATE(41)] = 365,
  [SMALL_STATE(42)] = 369,
  [SMALL_STATE(43)] = 373,
  [SMALL_STATE(44)] = 377,
  [SMALL_STATE(45)] = 381,
  [SMALL_STATE(46)] = 385,
  [SMALL_STATE(47)] = 389,
  [SMALL_STATE(48)] = 393,
  [SMALL_STATE(49)] = 397,
  [SMALL_STATE(50)] = 401,
  [SMALL_STATE(51)] = 405,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_member, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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

TS_PUBLIC const TSLanguage *tree_sitter_webidl(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .supertype_count = SUPERTYPE_COUNT,
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
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
    .name = "webidl",
    .max_reserved_word_set_size = 0,
    .metadata = {
      .major_version = 0,
      .minor_version = 1,
      .patch_version = 0,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
