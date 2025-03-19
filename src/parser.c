#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
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
  sym_comment = 17,
  sym_source_file = 18,
  sym_definition = 19,
  sym_interface_definition = 20,
  sym_typedef = 21,
  sym_enum_definition = 22,
  sym_type = 23,
  sym_interface_member = 24,
  sym_attribute = 25,
  sym_method = 26,
  sym_parameter_list = 27,
  sym_parameter = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_interface_definition_repeat1 = 30,
  aux_sym_enum_definition_repeat1 = 31,
  aux_sym_parameter_list_repeat1 = 32,
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
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'D') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'M') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_unsignedlong);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOMString);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_enum_value);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 61},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_definition] = STATE(5),
    [sym_interface_definition] = STATE(18),
    [sym_typedef] = STATE(18),
    [sym_enum_definition] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_typedef] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_attribute,
    STATE(38), 1,
      sym_type,
    STATE(4), 2,
      sym_interface_member,
      aux_sym_interface_definition_repeat1,
    STATE(9), 2,
      sym_attribute,
      sym_method,
    ACTIONS(15), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [24] = 6,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      anon_sym_attribute,
    STATE(38), 1,
      sym_type,
    STATE(3), 2,
      sym_interface_member,
      aux_sym_interface_definition_repeat1,
    STATE(9), 2,
      sym_attribute,
      sym_method,
    ACTIONS(21), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [48] = 6,
    ACTIONS(17), 1,
      anon_sym_attribute,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_type,
    STATE(3), 2,
      sym_interface_member,
      aux_sym_interface_definition_repeat1,
    STATE(9), 2,
      sym_attribute,
      sym_method,
    ACTIONS(15), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [72] = 7,
    ACTIONS(5), 1,
      anon_sym_interface,
    ACTIONS(7), 1,
      anon_sym_typedef,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_comment,
    STATE(6), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(18), 3,
      sym_interface_definition,
      sym_typedef,
      sym_enum_definition,
  [97] = 7,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_interface,
    ACTIONS(38), 1,
      anon_sym_typedef,
    ACTIONS(41), 1,
      anon_sym_enum,
    ACTIONS(44), 1,
      sym_comment,
    STATE(6), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(18), 3,
      sym_interface_definition,
      sym_typedef,
      sym_enum_definition,
  [122] = 5,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_parameter,
    STATE(40), 1,
      sym_type,
    STATE(41), 1,
      sym_parameter_list,
    ACTIONS(15), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [141] = 1,
    ACTIONS(49), 6,
      anon_sym_RBRACE,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
      anon_sym_attribute,
  [150] = 1,
    ACTIONS(51), 6,
      anon_sym_RBRACE,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
      anon_sym_attribute,
  [159] = 3,
    STATE(29), 1,
      sym_parameter,
    STATE(40), 1,
      sym_type,
    ACTIONS(15), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [172] = 1,
    ACTIONS(53), 6,
      anon_sym_RBRACE,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
      anon_sym_attribute,
  [181] = 1,
    ACTIONS(55), 6,
      anon_sym_RBRACE,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
      anon_sym_attribute,
  [190] = 1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
      sym_comment,
  [198] = 1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
      sym_comment,
  [206] = 2,
    STATE(37), 1,
      sym_type,
    ACTIONS(15), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [216] = 1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
      sym_comment,
  [224] = 1,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
      sym_comment,
  [232] = 1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
      sym_comment,
  [240] = 1,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_interface,
      anon_sym_typedef,
      anon_sym_enum,
      sym_comment,
  [248] = 2,
    STATE(47), 1,
      sym_type,
    ACTIONS(15), 4,
      anon_sym_unsignedlong,
      anon_sym_double,
      anon_sym_boolean,
      anon_sym_DOMString,
  [258] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [268] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_parameter_list_repeat1,
  [278] = 3,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_enum_definition_repeat1,
  [288] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_parameter_list_repeat1,
  [298] = 3,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_enum_definition_repeat1,
  [308] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_enum_definition_repeat1,
  [318] = 1,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [323] = 1,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [328] = 1,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [333] = 1,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
  [337] = 1,
    ACTIONS(95), 1,
      anon_sym_SEMI,
  [341] = 1,
    ACTIONS(97), 1,
      sym_enum_value,
  [345] = 1,
    ACTIONS(99), 1,
      anon_sym_SEMI,
  [349] = 1,
    ACTIONS(101), 1,
      sym_identifier,
  [353] = 1,
    ACTIONS(103), 1,
      anon_sym_SEMI,
  [357] = 1,
    ACTIONS(105), 1,
      anon_sym_SEMI,
  [361] = 1,
    ACTIONS(107), 1,
      sym_identifier,
  [365] = 1,
    ACTIONS(109), 1,
      sym_identifier,
  [369] = 1,
    ACTIONS(111), 1,
      anon_sym_SEMI,
  [373] = 1,
    ACTIONS(113), 1,
      sym_identifier,
  [377] = 1,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
  [381] = 1,
    ACTIONS(117), 1,
      anon_sym_SEMI,
  [385] = 1,
    ACTIONS(119), 1,
      sym_enum_value,
  [389] = 1,
    ACTIONS(121), 1,
      anon_sym_SEMI,
  [393] = 1,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
  [397] = 1,
    ACTIONS(125), 1,
      anon_sym_SEMI,
  [401] = 1,
    ACTIONS(127), 1,
      sym_identifier,
  [405] = 1,
    ACTIONS(129), 1,
      sym_identifier,
  [409] = 1,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
  [413] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [417] = 1,
    ACTIONS(135), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 181,
  [SMALL_STATE(13)] = 190,
  [SMALL_STATE(14)] = 198,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 216,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 248,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 268,
  [SMALL_STATE(23)] = 278,
  [SMALL_STATE(24)] = 288,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 308,
  [SMALL_STATE(27)] = 318,
  [SMALL_STATE(28)] = 323,
  [SMALL_STATE(29)] = 328,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 337,
  [SMALL_STATE(32)] = 341,
  [SMALL_STATE(33)] = 345,
  [SMALL_STATE(34)] = 349,
  [SMALL_STATE(35)] = 353,
  [SMALL_STATE(36)] = 357,
  [SMALL_STATE(37)] = 361,
  [SMALL_STATE(38)] = 365,
  [SMALL_STATE(39)] = 369,
  [SMALL_STATE(40)] = 373,
  [SMALL_STATE(41)] = 377,
  [SMALL_STATE(42)] = 381,
  [SMALL_STATE(43)] = 385,
  [SMALL_STATE(44)] = 389,
  [SMALL_STATE(45)] = 393,
  [SMALL_STATE(46)] = 397,
  [SMALL_STATE(47)] = 401,
  [SMALL_STATE(48)] = 405,
  [SMALL_STATE(49)] = 409,
  [SMALL_STATE(50)] = 413,
  [SMALL_STATE(51)] = 417,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(48),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_member, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(32),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_webidl(void) {
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
