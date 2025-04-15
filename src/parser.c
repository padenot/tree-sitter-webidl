#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 226
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_LBRACK = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACK = 3,
  anon_sym_EQ = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  sym_identifier = 7,
  anon_sym_interface = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_SEMI = 11,
  anon_sym_COLON = 12,
  anon_sym_readonly = 13,
  anon_sym_attribute = 14,
  anon_sym_optional = 15,
  anon_sym_const = 16,
  anon_sym_null = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  anon_sym_NaN = 20,
  anon_sym_Infinity = 21,
  anon_sym_DASHInfinity = 22,
  sym_string_literal = 23,
  sym_number_literal = 24,
  anon_sym_constructor = 25,
  anon_sym_dictionary = 26,
  anon_sym_required = 27,
  anon_sym_enum = 28,
  sym_string = 29,
  anon_sym_callback = 30,
  anon_sym_typedef = 31,
  anon_sym_includes = 32,
  anon_sym_QMARK = 33,
  anon_sym_sequence = 34,
  anon_sym_LT = 35,
  anon_sym_GT = 36,
  anon_sym_Promise = 37,
  anon_sym_record = 38,
  anon_sym_FrozenArray = 39,
  anon_sym_ObservableArray = 40,
  sym_or_keyword = 41,
  anon_sym_boolean = 42,
  anon_sym_byte = 43,
  anon_sym_octet = 44,
  anon_sym_short = 45,
  anon_sym_long = 46,
  anon_sym_unsigned = 47,
  anon_sym_float = 48,
  anon_sym_double = 49,
  anon_sym_bigint = 50,
  anon_sym_undefined = 51,
  anon_sym_Float32Array = 52,
  anon_sym_Uint8Array = 53,
  anon_sym_Int8Array = 54,
  anon_sym_Uint16Array = 55,
  anon_sym_Int16Array = 56,
  anon_sym_Int32Array = 57,
  anon_sym_BigInt64Array = 58,
  anon_sym_Float64Array = 59,
  anon_sym_Uint32Array = 60,
  anon_sym_BigUint64Array = 61,
  anon_sym_DOMString = 62,
  anon_sym_ByteString = 63,
  anon_sym_USVString = 64,
  sym_async_keyword = 65,
  sym_deleter_keyword = 66,
  sym_getter_keyword = 67,
  sym_inherit_keyword = 68,
  sym_iterable_keyword = 69,
  sym_maplike_keyword = 70,
  sym_mixin_keyword = 71,
  sym_namespace_keyword = 72,
  sym_partial_keyword = 73,
  sym_setlike_keyword = 74,
  sym_setter_keyword = 75,
  sym_static_keyword = 76,
  sym_stringifier_keyword = 77,
  sym_unrestricted_keyword = 78,
  sym_comment = 79,
  sym_source_file = 80,
  sym_definition = 81,
  sym_extended_attribute_list = 82,
  sym_extended_attribute = 83,
  sym_interface = 84,
  sym_inheritance = 85,
  sym_interface_member = 86,
  sym_attribute = 87,
  sym_operation = 88,
  sym_argument_list = 89,
  sym_argument = 90,
  sym_const = 91,
  sym_const_type = 92,
  sym_const_value = 93,
  sym_boolean_literal = 94,
  sym_float_literal = 95,
  sym_constructor = 96,
  sym_dictionary = 97,
  sym_field = 98,
  sym_enum = 99,
  sym_string_list = 100,
  sym_callback = 101,
  sym_typedef = 102,
  sym_includes = 103,
  sym_type = 104,
  sym_type_base = 105,
  sym_union_type = 106,
  sym_primitive_type = 107,
  sym_array_type = 108,
  sym_string_type = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_extended_attribute_list_repeat1 = 111,
  aux_sym_extended_attribute_repeat1 = 112,
  aux_sym_interface_repeat1 = 113,
  aux_sym_argument_list_repeat1 = 114,
  aux_sym_dictionary_repeat1 = 115,
  aux_sym_string_list_repeat1 = 116,
  aux_sym_union_type_repeat1 = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_readonly] = "readonly",
  [anon_sym_attribute] = "attribute",
  [anon_sym_optional] = "optional",
  [anon_sym_const] = "const",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_NaN] = "NaN",
  [anon_sym_Infinity] = "Infinity",
  [anon_sym_DASHInfinity] = "-Infinity",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [anon_sym_constructor] = "constructor",
  [anon_sym_dictionary] = "dictionary",
  [anon_sym_required] = "required",
  [anon_sym_enum] = "enum",
  [sym_string] = "string",
  [anon_sym_callback] = "callback",
  [anon_sym_typedef] = "typedef",
  [anon_sym_includes] = "includes",
  [anon_sym_QMARK] = "\?",
  [anon_sym_sequence] = "sequence",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_Promise] = "Promise",
  [anon_sym_record] = "record",
  [anon_sym_FrozenArray] = "FrozenArray",
  [anon_sym_ObservableArray] = "ObservableArray",
  [sym_or_keyword] = "or_keyword",
  [anon_sym_boolean] = "boolean",
  [anon_sym_byte] = "byte",
  [anon_sym_octet] = "octet",
  [anon_sym_short] = "short",
  [anon_sym_long] = "long",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_bigint] = "bigint",
  [anon_sym_undefined] = "undefined",
  [anon_sym_Float32Array] = "Float32Array",
  [anon_sym_Uint8Array] = "Uint8Array",
  [anon_sym_Int8Array] = "Int8Array",
  [anon_sym_Uint16Array] = "Uint16Array",
  [anon_sym_Int16Array] = "Int16Array",
  [anon_sym_Int32Array] = "Int32Array",
  [anon_sym_BigInt64Array] = "BigInt64Array",
  [anon_sym_Float64Array] = "Float64Array",
  [anon_sym_Uint32Array] = "Uint32Array",
  [anon_sym_BigUint64Array] = "BigUint64Array",
  [anon_sym_DOMString] = "DOMString",
  [anon_sym_ByteString] = "ByteString",
  [anon_sym_USVString] = "USVString",
  [sym_async_keyword] = "async_keyword",
  [sym_deleter_keyword] = "deleter_keyword",
  [sym_getter_keyword] = "getter_keyword",
  [sym_inherit_keyword] = "inherit_keyword",
  [sym_iterable_keyword] = "iterable_keyword",
  [sym_maplike_keyword] = "maplike_keyword",
  [sym_mixin_keyword] = "mixin_keyword",
  [sym_namespace_keyword] = "namespace_keyword",
  [sym_partial_keyword] = "partial_keyword",
  [sym_setlike_keyword] = "setlike_keyword",
  [sym_setter_keyword] = "setter_keyword",
  [sym_static_keyword] = "static_keyword",
  [sym_stringifier_keyword] = "stringifier_keyword",
  [sym_unrestricted_keyword] = "unrestricted_keyword",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_extended_attribute_list] = "extended_attribute_list",
  [sym_extended_attribute] = "extended_attribute",
  [sym_interface] = "interface",
  [sym_inheritance] = "inheritance",
  [sym_interface_member] = "interface_member",
  [sym_attribute] = "attribute",
  [sym_operation] = "operation",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_const] = "const",
  [sym_const_type] = "const_type",
  [sym_const_value] = "const_value",
  [sym_boolean_literal] = "boolean_literal",
  [sym_float_literal] = "float_literal",
  [sym_constructor] = "constructor",
  [sym_dictionary] = "dictionary",
  [sym_field] = "field",
  [sym_enum] = "enum",
  [sym_string_list] = "string_list",
  [sym_callback] = "callback",
  [sym_typedef] = "typedef",
  [sym_includes] = "includes",
  [sym_type] = "type",
  [sym_type_base] = "type_base",
  [sym_union_type] = "union_type",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_string_type] = "string_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_extended_attribute_list_repeat1] = "extended_attribute_list_repeat1",
  [aux_sym_extended_attribute_repeat1] = "extended_attribute_repeat1",
  [aux_sym_interface_repeat1] = "interface_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_string_list_repeat1] = "string_list_repeat1",
  [aux_sym_union_type_repeat1] = "union_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_NaN] = anon_sym_NaN,
  [anon_sym_Infinity] = anon_sym_Infinity,
  [anon_sym_DASHInfinity] = anon_sym_DASHInfinity,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_dictionary] = anon_sym_dictionary,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_enum] = anon_sym_enum,
  [sym_string] = sym_string,
  [anon_sym_callback] = anon_sym_callback,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_Promise] = anon_sym_Promise,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_FrozenArray] = anon_sym_FrozenArray,
  [anon_sym_ObservableArray] = anon_sym_ObservableArray,
  [sym_or_keyword] = sym_or_keyword,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_octet] = anon_sym_octet,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bigint] = anon_sym_bigint,
  [anon_sym_undefined] = anon_sym_undefined,
  [anon_sym_Float32Array] = anon_sym_Float32Array,
  [anon_sym_Uint8Array] = anon_sym_Uint8Array,
  [anon_sym_Int8Array] = anon_sym_Int8Array,
  [anon_sym_Uint16Array] = anon_sym_Uint16Array,
  [anon_sym_Int16Array] = anon_sym_Int16Array,
  [anon_sym_Int32Array] = anon_sym_Int32Array,
  [anon_sym_BigInt64Array] = anon_sym_BigInt64Array,
  [anon_sym_Float64Array] = anon_sym_Float64Array,
  [anon_sym_Uint32Array] = anon_sym_Uint32Array,
  [anon_sym_BigUint64Array] = anon_sym_BigUint64Array,
  [anon_sym_DOMString] = anon_sym_DOMString,
  [anon_sym_ByteString] = anon_sym_ByteString,
  [anon_sym_USVString] = anon_sym_USVString,
  [sym_async_keyword] = sym_async_keyword,
  [sym_deleter_keyword] = sym_deleter_keyword,
  [sym_getter_keyword] = sym_getter_keyword,
  [sym_inherit_keyword] = sym_inherit_keyword,
  [sym_iterable_keyword] = sym_iterable_keyword,
  [sym_maplike_keyword] = sym_maplike_keyword,
  [sym_mixin_keyword] = sym_mixin_keyword,
  [sym_namespace_keyword] = sym_namespace_keyword,
  [sym_partial_keyword] = sym_partial_keyword,
  [sym_setlike_keyword] = sym_setlike_keyword,
  [sym_setter_keyword] = sym_setter_keyword,
  [sym_static_keyword] = sym_static_keyword,
  [sym_stringifier_keyword] = sym_stringifier_keyword,
  [sym_unrestricted_keyword] = sym_unrestricted_keyword,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_extended_attribute_list] = sym_extended_attribute_list,
  [sym_extended_attribute] = sym_extended_attribute,
  [sym_interface] = sym_interface,
  [sym_inheritance] = sym_inheritance,
  [sym_interface_member] = sym_interface_member,
  [sym_attribute] = sym_attribute,
  [sym_operation] = sym_operation,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_const] = sym_const,
  [sym_const_type] = sym_const_type,
  [sym_const_value] = sym_const_value,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_constructor] = sym_constructor,
  [sym_dictionary] = sym_dictionary,
  [sym_field] = sym_field,
  [sym_enum] = sym_enum,
  [sym_string_list] = sym_string_list,
  [sym_callback] = sym_callback,
  [sym_typedef] = sym_typedef,
  [sym_includes] = sym_includes,
  [sym_type] = sym_type,
  [sym_type_base] = sym_type_base,
  [sym_union_type] = sym_union_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_string_type] = sym_string_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_extended_attribute_list_repeat1] = aux_sym_extended_attribute_list_repeat1,
  [aux_sym_extended_attribute_repeat1] = aux_sym_extended_attribute_repeat1,
  [aux_sym_interface_repeat1] = aux_sym_interface_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_string_list_repeat1] = aux_sym_string_list_repeat1,
  [aux_sym_union_type_repeat1] = aux_sym_union_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_identifier] = {
    .visible = true,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NaN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Infinity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHInfinity] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dictionary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_callback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Promise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FrozenArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ObservableArray] = {
    .visible = true,
    .named = false,
  },
  [sym_or_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_octet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bigint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undefined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float32Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Uint8Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int8Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Uint16Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int16Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int32Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BigInt64Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float64Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Uint32Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BigUint64Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOMString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USVString] = {
    .visible = true,
    .named = false,
  },
  [sym_async_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_deleter_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_getter_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_inherit_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_iterable_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_maplike_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_mixin_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_setlike_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_setter_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_static_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_stringifier_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_unrestricted_keyword] = {
    .visible = true,
    .named = true,
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
  [sym_extended_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_extended_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_inheritance] = {
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
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_const_type] = {
    .visible = true,
    .named = true,
  },
  [sym_const_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_string_list] = {
    .visible = true,
    .named = true,
  },
  [sym_callback] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef] = {
    .visible = true,
    .named = true,
  },
  [sym_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_base] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extended_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extended_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_lhs = 1,
  field_name = 2,
  field_return_type = 3,
  field_rhs = 4,
  field_type = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_lhs, 0},
    {field_rhs, 2},
  [2] =
    {field_name, 2},
    {field_type, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_name, 1},
    {field_type, 0},
  [7] =
    {field_name, 2},
  [8] =
    {field_name, 1},
    {field_return_type, 3},
  [10] =
    {field_name, 3},
    {field_type, 2},
  [12] =
    {field_name, 1},
    {field_return_type, 0},
  [14] =
    {field_name, 2},
    {field_type, 1},
    {field_value, 4},
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
  [27] = 26,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 33,
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 74,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 83,
  [88] = 88,
  [89] = 89,
  [90] = 86,
  [91] = 91,
  [92] = 79,
  [93] = 75,
  [94] = 94,
  [95] = 72,
  [96] = 78,
  [97] = 97,
  [98] = 80,
  [99] = 85,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 81,
  [108] = 108,
  [109] = 73,
  [110] = 84,
  [111] = 111,
  [112] = 112,
  [113] = 83,
  [114] = 74,
  [115] = 101,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 100,
  [121] = 121,
  [122] = 122,
  [123] = 94,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 130,
  [135] = 128,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 136,
  [140] = 106,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 136,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 43,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 44,
  [213] = 213,
  [214] = 198,
  [215] = 192,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 175,
  [223] = 197,
  [224] = 224,
  [225] = 173,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(408);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == ',') ADVANCE(410);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(697);
      if (lookahead == ':') ADVANCE(681);
      if (lookahead == ';') ADVANCE(680);
      if (lookahead == '<') ADVANCE(719);
      if (lookahead == '=') ADVANCE(412);
      if (lookahead == '>') ADVANCE(720);
      if (lookahead == '?') ADVANCE(716);
      if (lookahead == 'B') ADVANCE(181);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'F') ADVANCE(215);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(287);
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') SKIP(404)
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == '{') ADVANCE(678);
      if (lookahead == '}') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(698);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(710);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(697);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '{') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(698);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(696);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(414);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == 'O') ADVANCE(470);
      if (lookahead == 'P') ADVANCE(595);
      if (lookahead == 'U') ADVANCE(443);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'b') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ',') ADVANCE(410);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '>') ADVANCE(720);
      if (lookahead == '?') ADVANCE(716);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == 'O') ADVANCE(470);
      if (lookahead == 'P') ADVANCE(595);
      if (lookahead == 'U') ADVANCE(443);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'b') ADVANCE(529);
      if (lookahead == 'c') ADVANCE(581);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == '}') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == 'O') ADVANCE(470);
      if (lookahead == 'P') ADVANCE(595);
      if (lookahead == 'U') ADVANCE(443);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'b') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == '}') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == 'O') ADVANCE(470);
      if (lookahead == 'P') ADVANCE(595);
      if (lookahead == 'U') ADVANCE(443);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(791);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(790);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == '0') ADVANCE(697);
      if (lookahead == 'I') ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(698);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(699);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '?') ADVANCE(716);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == '8') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(42);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '8') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == '4') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == '6') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == '6') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == '6') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(298);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(301);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(303);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(305);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(307);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(309);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(311);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(313);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(314);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(315);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(316);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(317);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(250);
      if (lookahead == 'U') ADVANCE(208);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(693);
      END_STATE();
    case 60:
      if (lookahead == 'O') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(345);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(356);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(357);
      END_STATE();
    case 65:
      if (lookahead == 'U') ADVANCE(400);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'V') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(265);
      if (lookahead == 'q') ADVANCE(363);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(368);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(776);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(706);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(740);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(748);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(789);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'h') ADVANCE(270);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 166:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 168:
      if (lookahead == 'f') ADVANCE(713);
      END_STATE();
    case 169:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 170:
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 171:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(207);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(738);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(770);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(774);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(772);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 209:
      if (lookahead == 'k') ADVANCE(711);
      END_STATE();
    case 210:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 211:
      if (lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(784);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(367);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(708);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 272:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 273:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 275:
      if (lookahead == 'q') ADVANCE(364);
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(777);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(715);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(734);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(736);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(779);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 360:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 361:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 362:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 363:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 364:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 365:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 366:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 367:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 368:
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 369:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 370:
      if (lookahead == 'x') ADVANCE(190);
      END_STATE();
    case 371:
      if (lookahead == 'y') ADVANCE(694);
      END_STATE();
    case 372:
      if (lookahead == 'y') ADVANCE(682);
      END_STATE();
    case 373:
      if (lookahead == 'y') ADVANCE(695);
      END_STATE();
    case 374:
      if (lookahead == 'y') ADVANCE(754);
      END_STATE();
    case 375:
      if (lookahead == 'y') ADVANCE(758);
      END_STATE();
    case 376:
      if (lookahead == 'y') ADVANCE(760);
      END_STATE();
    case 377:
      if (lookahead == 'y') ADVANCE(752);
      END_STATE();
    case 378:
      if (lookahead == 'y') ADVANCE(704);
      END_STATE();
    case 379:
      if (lookahead == 'y') ADVANCE(725);
      END_STATE();
    case 380:
      if (lookahead == 'y') ADVANCE(756);
      END_STATE();
    case 381:
      if (lookahead == 'y') ADVANCE(766);
      END_STATE();
    case 382:
      if (lookahead == 'y') ADVANCE(750);
      END_STATE();
    case 383:
      if (lookahead == 'y') ADVANCE(764);
      END_STATE();
    case 384:
      if (lookahead == 'y') ADVANCE(762);
      END_STATE();
    case 385:
      if (lookahead == 'y') ADVANCE(768);
      END_STATE();
    case 386:
      if (lookahead == 'y') ADVANCE(727);
      END_STATE();
    case 387:
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 388:
      if (lookahead == 'z') ADVANCE(156);
      END_STATE();
    case 389:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 390:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      END_STATE();
    case 391:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 392:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      END_STATE();
    case 393:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 394:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 395:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      END_STATE();
    case 396:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 397:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 398:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 399:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 400:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      END_STATE();
    case 401:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 402:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(791);
      if (lookahead == '\r') ADVANCE(793);
      if (lookahead == '\\') ADVANCE(792);
      END_STATE();
    case 403:
      if (eof) ADVANCE(408);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 404:
      if (eof) ADVANCE(408);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(403)
      END_STATE();
    case 405:
      if (eof) ADVANCE(408);
      if (lookahead == '\n') SKIP(407)
      END_STATE();
    case 406:
      if (eof) ADVANCE(408);
      if (lookahead == '\n') SKIP(407)
      if (lookahead == '\r') SKIP(405)
      END_STATE();
    case 407:
      if (eof) ADVANCE(408);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == '\\') SKIP(406)
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(407)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(424);
      if (lookahead == '3') ADVANCE(417);
      if (lookahead == '8') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(425);
      if (lookahead == '3') ADVANCE(418);
      if (lookahead == '8') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(419);
      if (lookahead == '6') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(565);
      if (lookahead == 'U') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'c') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(583);
      if (lookahead == 'q') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'p') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead == 's') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'h') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'y') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 'o') ADVANCE(579);
      if (lookahead == 'y') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(578);
      if (lookahead == 'r') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_Infinity);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_DASHInfinity);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(699);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(699);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_dictionary);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_required);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_callback);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_Promise);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_Promise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_record);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_FrozenArray);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_FrozenArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ObservableArray);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_ObservableArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_or_keyword);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_octet);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_octet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_undefined);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_undefined);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_Float32Array);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_Float32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_Uint8Array);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_Uint8Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_Uint16Array);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_Uint16Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_BigInt64Array);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_BigInt64Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_Float64Array);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_Float64Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_Uint32Array);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_Uint32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_BigUint64Array);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_BigUint64Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_DOMString);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_DOMString);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_ByteString);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_ByteString);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_USVString);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_USVString);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_async_keyword);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_deleter_keyword);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_getter_keyword);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_inherit_keyword);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_iterable_keyword);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_maplike_keyword);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_mixin_keyword);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_namespace_keyword);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_partial_keyword);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_setlike_keyword);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_setter_keyword);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_static_keyword);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_stringifier_keyword);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_unrestricted_keyword);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(791);
      if (lookahead == '\r') ADVANCE(793);
      if (lookahead == '\\') ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(791);
      if (lookahead == '\\') ADVANCE(402);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 407},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 407},
  [50] = {.lex_state = 407},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 407},
  [58] = {.lex_state = 407},
  [59] = {.lex_state = 407},
  [60] = {.lex_state = 407},
  [61] = {.lex_state = 407},
  [62] = {.lex_state = 407},
  [63] = {.lex_state = 407},
  [64] = {.lex_state = 407},
  [65] = {.lex_state = 407},
  [66] = {.lex_state = 407},
  [67] = {.lex_state = 407},
  [68] = {.lex_state = 407},
  [69] = {.lex_state = 407},
  [70] = {.lex_state = 407},
  [71] = {.lex_state = 407},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 30},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 21},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 21},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 21},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 21},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 21},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 21},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 21},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [anon_sym_Infinity] = ACTIONS(1),
    [anon_sym_DASHInfinity] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_dictionary] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_callback] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_Promise] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_FrozenArray] = ACTIONS(1),
    [anon_sym_ObservableArray] = ACTIONS(1),
    [sym_or_keyword] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_octet] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_bigint] = ACTIONS(1),
    [anon_sym_undefined] = ACTIONS(1),
    [anon_sym_Float32Array] = ACTIONS(1),
    [anon_sym_Uint8Array] = ACTIONS(1),
    [anon_sym_Int8Array] = ACTIONS(1),
    [anon_sym_Uint16Array] = ACTIONS(1),
    [anon_sym_Int16Array] = ACTIONS(1),
    [anon_sym_Int32Array] = ACTIONS(1),
    [anon_sym_BigInt64Array] = ACTIONS(1),
    [anon_sym_Float64Array] = ACTIONS(1),
    [anon_sym_Uint32Array] = ACTIONS(1),
    [anon_sym_BigUint64Array] = ACTIONS(1),
    [anon_sym_DOMString] = ACTIONS(1),
    [anon_sym_ByteString] = ACTIONS(1),
    [anon_sym_USVString] = ACTIONS(1),
    [sym_async_keyword] = ACTIONS(1),
    [sym_deleter_keyword] = ACTIONS(1),
    [sym_getter_keyword] = ACTIONS(1),
    [sym_inherit_keyword] = ACTIONS(1),
    [sym_iterable_keyword] = ACTIONS(1),
    [sym_maplike_keyword] = ACTIONS(1),
    [sym_mixin_keyword] = ACTIONS(1),
    [sym_namespace_keyword] = ACTIONS(1),
    [sym_partial_keyword] = ACTIONS(1),
    [sym_setlike_keyword] = ACTIONS(1),
    [sym_setter_keyword] = ACTIONS(1),
    [sym_static_keyword] = ACTIONS(1),
    [sym_stringifier_keyword] = ACTIONS(1),
    [sym_unrestricted_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(191),
    [sym_definition] = STATE(50),
    [sym_extended_attribute_list] = STATE(190),
    [sym_interface] = STATE(62),
    [sym_dictionary] = STATE(62),
    [sym_enum] = STATE(62),
    [sym_callback] = STATE(62),
    [sym_typedef] = STATE(62),
    [sym_includes] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_dictionary] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_callback] = ACTIONS(17),
    [anon_sym_typedef] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(10), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [95] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(5), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [190] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(5), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [285] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_readonly,
    ACTIONS(71), 1,
      anon_sym_attribute,
    ACTIONS(74), 1,
      anon_sym_const,
    ACTIONS(77), 1,
      anon_sym_constructor,
    ACTIONS(83), 1,
      anon_sym_record,
    ACTIONS(89), 1,
      anon_sym_long,
    ACTIONS(92), 1,
      anon_sym_unsigned,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(5), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(98), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(80), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(86), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(95), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [380] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(8), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [475] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(3), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [570] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(5), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [665] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(4), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [760] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_extended_attribute_list,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    STATE(5), 2,
      sym_interface_member,
      aux_sym_interface_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(32), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [855] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_readonly,
    ACTIONS(33), 1,
      anon_sym_attribute,
    ACTIONS(35), 1,
      anon_sym_const,
    ACTIONS(37), 1,
      anon_sym_constructor,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(207), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(41), 4,
      sym_attribute,
      sym_operation,
      sym_const,
      sym_constructor,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [937] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_required,
    ACTIONS(121), 1,
      anon_sym_record,
    ACTIONS(127), 1,
      anon_sym_long,
    ACTIONS(130), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(204), 1,
      sym_type,
    STATE(12), 2,
      sym_field,
      aux_sym_dictionary_repeat1,
    ACTIONS(136), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(118), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(124), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(133), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1011] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      anon_sym_optional,
    STATE(75), 1,
      sym_type_base,
    STATE(125), 1,
      sym_argument,
    STATE(177), 1,
      sym_type,
    STATE(202), 1,
      sym_argument_list,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1087] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(141), 1,
      anon_sym_optional,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_type_base,
    STATE(125), 1,
      sym_argument,
    STATE(158), 1,
      sym_argument_list,
    STATE(177), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1163] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      anon_sym_required,
    STATE(75), 1,
      sym_type_base,
    STATE(204), 1,
      sym_type,
    STATE(12), 2,
      sym_field,
      aux_sym_dictionary_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1237] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(147), 1,
      anon_sym_required,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_type_base,
    STATE(204), 1,
      sym_type,
    STATE(15), 2,
      sym_field,
      aux_sym_dictionary_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1311] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(141), 1,
      anon_sym_optional,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_type_base,
    STATE(125), 1,
      sym_argument,
    STATE(161), 1,
      sym_argument_list,
    STATE(177), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1387] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(147), 1,
      anon_sym_required,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_type_base,
    STATE(204), 1,
      sym_type,
    STATE(19), 2,
      sym_field,
      aux_sym_dictionary_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1461] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(147), 1,
      anon_sym_required,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_type_base,
    STATE(204), 1,
      sym_type,
    STATE(12), 2,
      sym_field,
      aux_sym_dictionary_repeat1,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1535] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(141), 1,
      anon_sym_optional,
    STATE(75), 1,
      sym_type_base,
    STATE(129), 1,
      sym_argument,
    STATE(177), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(157), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [1649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(161), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [1693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(165), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [1737] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(167), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1801] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(185), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1865] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(167), 1,
      anon_sym_long,
    ACTIONS(169), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(215), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1929] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(167), 1,
      anon_sym_long,
    ACTIONS(169), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(192), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [1993] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(167), 1,
      anon_sym_long,
    ACTIONS(169), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(214), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2057] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(167), 1,
      anon_sym_long,
    ACTIONS(169), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(198), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2121] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(155), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(173), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(177), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2273] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_record,
    ACTIONS(189), 1,
      anon_sym_long,
    ACTIONS(191), 1,
      anon_sym_unsigned,
    STATE(93), 1,
      sym_type_base,
    STATE(130), 1,
      sym_type,
    ACTIONS(195), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(183), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(99), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(187), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(193), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(199), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2381] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(167), 1,
      anon_sym_long,
    ACTIONS(169), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(200), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2445] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(162), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2509] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_record,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    STATE(75), 1,
      sym_type_base,
    STATE(195), 1,
      sym_type,
    ACTIONS(51), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(39), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(85), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(49), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_record,
    ACTIONS(189), 1,
      anon_sym_long,
    ACTIONS(191), 1,
      anon_sym_unsigned,
    STATE(93), 1,
      sym_type_base,
    STATE(134), 1,
      sym_type,
    ACTIONS(195), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(183), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(99), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(187), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(193), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(203), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(207), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(211), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2769] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_record,
    ACTIONS(189), 1,
      anon_sym_long,
    ACTIONS(191), 1,
      anon_sym_unsigned,
    STATE(93), 1,
      sym_type_base,
    STATE(147), 1,
      sym_type,
    ACTIONS(195), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
    ACTIONS(183), 4,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
    STATE(99), 4,
      sym_union_type,
      sym_primitive_type,
      sym_array_type,
      sym_string_type,
    ACTIONS(187), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
    ACTIONS(193), 10,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 33,
      sym_identifier,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_const,
      anon_sym_constructor,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(223), 30,
      sym_identifier,
      anon_sym_required,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(227), 30,
      sym_identifier,
      anon_sym_required,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [2997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(231), 30,
      sym_identifier,
      anon_sym_required,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
    ACTIONS(235), 30,
      sym_identifier,
      anon_sym_required,
      anon_sym_sequence,
      anon_sym_Promise,
      anon_sym_record,
      anon_sym_FrozenArray,
      anon_sym_ObservableArray,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
      anon_sym_Float32Array,
      anon_sym_Uint8Array,
      anon_sym_Int8Array,
      anon_sym_Uint16Array,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_BigInt64Array,
      anon_sym_Float64Array,
      anon_sym_Uint32Array,
      anon_sym_BigUint64Array,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [3077] = 12,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_interface,
    ACTIONS(248), 1,
      anon_sym_dictionary,
    ACTIONS(251), 1,
      anon_sym_enum,
    ACTIONS(254), 1,
      anon_sym_callback,
    ACTIONS(257), 1,
      anon_sym_typedef,
    ACTIONS(260), 1,
      sym_comment,
    STATE(190), 1,
      sym_extended_attribute_list,
    STATE(49), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(62), 6,
      sym_interface,
      sym_dictionary,
      sym_enum,
      sym_callback,
      sym_typedef,
      sym_includes,
  [3120] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      anon_sym_dictionary,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_callback,
    ACTIONS(19), 1,
      anon_sym_typedef,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 1,
      sym_comment,
    STATE(190), 1,
      sym_extended_attribute_list,
    STATE(49), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(62), 6,
      sym_interface,
      sym_dictionary,
      sym_enum,
      sym_callback,
      sym_typedef,
      sym_includes,
  [3163] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_number_literal,
    STATE(141), 1,
      sym_const_value,
    ACTIONS(271), 2,
      anon_sym_null,
      sym_string_literal,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_boolean_literal,
      sym_float_literal,
    ACTIONS(275), 3,
      anon_sym_NaN,
      anon_sym_Infinity,
      anon_sym_DASHInfinity,
  [3196] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_number_literal,
    STATE(182), 1,
      sym_const_value,
    ACTIONS(271), 2,
      anon_sym_null,
      sym_string_literal,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_boolean_literal,
      sym_float_literal,
    ACTIONS(275), 3,
      anon_sym_NaN,
      anon_sym_Infinity,
      anon_sym_DASHInfinity,
  [3229] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_number_literal,
    STATE(176), 1,
      sym_const_value,
    ACTIONS(271), 2,
      anon_sym_null,
      sym_string_literal,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_boolean_literal,
      sym_float_literal,
    ACTIONS(275), 3,
      anon_sym_NaN,
      anon_sym_Infinity,
      anon_sym_DASHInfinity,
  [3262] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_long,
    ACTIONS(47), 1,
      anon_sym_unsigned,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(193), 1,
      sym_const_type,
    STATE(194), 1,
      sym_primitive_type,
    ACTIONS(43), 8,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bigint,
      anon_sym_undefined,
  [3291] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_number_literal,
    STATE(168), 1,
      sym_const_value,
    ACTIONS(271), 2,
      anon_sym_null,
      sym_string_literal,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_boolean_literal,
      sym_float_literal,
    ACTIONS(275), 3,
      anon_sym_NaN,
      anon_sym_Infinity,
      anon_sym_DASHInfinity,
  [3324] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_number_literal,
    STATE(142), 1,
      sym_const_value,
    ACTIONS(271), 2,
      anon_sym_null,
      sym_string_literal,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 2,
      sym_boolean_literal,
      sym_float_literal,
    ACTIONS(275), 3,
      anon_sym_NaN,
      anon_sym_Infinity,
      anon_sym_DASHInfinity,
  [3357] = 2,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(283), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3371] = 2,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(287), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3385] = 2,
    ACTIONS(289), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(291), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3399] = 2,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(295), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3413] = 2,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(299), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3427] = 2,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(303), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3441] = 2,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(307), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3455] = 2,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(311), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3469] = 2,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(315), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3483] = 2,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(319), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3497] = 2,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(323), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3511] = 2,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(327), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3525] = 2,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(331), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3539] = 2,
    ACTIONS(333), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(335), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3553] = 2,
    ACTIONS(337), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(339), 6,
      sym_identifier,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_callback,
      anon_sym_typedef,
  [3567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_long,
    ACTIONS(345), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_QMARK,
    ACTIONS(349), 3,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_GT,
  [3612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(197), 1,
      sym_string_type,
    ACTIONS(353), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [3624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(223), 1,
      sym_string_type,
    ACTIONS(353), 3,
      anon_sym_DOMString,
      anon_sym_ByteString,
      anon_sym_USVString,
  [3636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 4,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 4,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_long,
    ACTIONS(345), 3,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_GT,
  [3688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_long,
    ACTIONS(357), 3,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_GT,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 4,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 4,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_GT,
  [3730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_long,
    ACTIONS(357), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_EQ,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_string_list_repeat1,
  [3766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_string_list_repeat1,
  [3788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_QMARK,
    ACTIONS(349), 2,
      anon_sym_RPAREN,
      sym_or_keyword,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(387), 1,
      sym_or_keyword,
    STATE(111), 1,
      aux_sym_union_type_repeat1,
  [3821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_extended_attribute_repeat1,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_extended_attribute_list_repeat1,
  [3883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_extended_attribute_list_repeat1,
  [3896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_inheritance,
  [3909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_inheritance,
  [3922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [3931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_argument_list_repeat1,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_LPAREN,
      sym_identifier,
      anon_sym_GT,
  [3953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      sym_or_keyword,
  [3991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      sym_or_keyword,
    STATE(111), 1,
      aux_sym_union_type_repeat1,
  [4004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_extended_attribute_list_repeat1,
  [4017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_QMARK,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(430), 1,
      anon_sym_long,
  [4030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_QMARK,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 1,
      anon_sym_long,
  [4043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_extended_attribute_list_repeat1,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_extended_attribute_repeat1,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [4096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_extended_attribute_list_repeat1,
  [4109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_argument_list_repeat1,
  [4133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_or_keyword,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_union_type_repeat1,
  [4146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_inheritance,
  [4159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_argument_list_repeat1,
  [4172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_extended_attribute_repeat1,
  [4185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_string_list_repeat1,
  [4198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
    STATE(101), 1,
      sym_extended_attribute,
  [4208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_or_keyword,
    STATE(94), 1,
      aux_sym_union_type_repeat1,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_string,
    STATE(201), 1,
      sym_string_list,
  [4236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_EQ,
    ACTIONS(480), 1,
      anon_sym_SEMI,
  [4254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_or_keyword,
    STATE(123), 1,
      aux_sym_union_type_repeat1,
  [4264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
    STATE(115), 1,
      sym_extended_attribute,
  [4274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_short,
    ACTIONS(482), 1,
      anon_sym_long,
  [4284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_short,
    ACTIONS(484), 1,
      anon_sym_long,
  [4310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_RPAREN,
      sym_or_keyword,
  [4318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_EQ,
    ACTIONS(492), 1,
      anon_sym_SEMI,
  [4344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_short,
    ACTIONS(494), 1,
      anon_sym_long,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_RPAREN,
      sym_or_keyword,
  [4378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
    STATE(137), 1,
      sym_extended_attribute,
  [4388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      sym_identifier,
  [4398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SEMI,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
  [4420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_SEMI,
  [4427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
  [4434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_identifier,
  [4441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_SEMI,
  [4448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
  [4455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [4462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SEMI,
  [4469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SEMI,
  [4476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
  [4490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_EQ,
  [4497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
  [4504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
  [4511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_SEMI,
  [4518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_identifier,
  [4525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_SEMI,
  [4532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_identifier,
  [4539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [4553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LT,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LT,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_identifier,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_string,
  [4602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_EQ,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
  [4616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_SEMI,
  [4623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_SEMI,
  [4630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_SEMI,
  [4637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_SEMI,
  [4644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_identifier,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_identifier,
  [4658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_SEMI,
  [4665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_interface,
  [4672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_SEMI,
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_interface,
  [4686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
  [4693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_GT,
  [4700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_identifier,
  [4707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
  [4714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_identifier,
  [4721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
  [4735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_GT,
  [4742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_identifier,
  [4749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
  [4756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
  [4763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [4770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_identifier,
  [4777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym_identifier,
  [4784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_SEMI,
  [4791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
  [4798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym_identifier,
  [4805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
  [4812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_attribute,
  [4819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_SEMI,
  [4826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SEMI,
  [4833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_interface,
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_SEMI,
  [4847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_GT,
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_GT,
  [4861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_SEMI,
  [4868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_identifier,
  [4875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
  [4882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
  [4889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_identifier,
  [4896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_includes,
  [4903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_LT,
  [4910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_COMMA,
  [4917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
  [4924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 285,
  [SMALL_STATE(6)] = 380,
  [SMALL_STATE(7)] = 475,
  [SMALL_STATE(8)] = 570,
  [SMALL_STATE(9)] = 665,
  [SMALL_STATE(10)] = 760,
  [SMALL_STATE(11)] = 855,
  [SMALL_STATE(12)] = 937,
  [SMALL_STATE(13)] = 1011,
  [SMALL_STATE(14)] = 1087,
  [SMALL_STATE(15)] = 1163,
  [SMALL_STATE(16)] = 1237,
  [SMALL_STATE(17)] = 1311,
  [SMALL_STATE(18)] = 1387,
  [SMALL_STATE(19)] = 1461,
  [SMALL_STATE(20)] = 1535,
  [SMALL_STATE(21)] = 1605,
  [SMALL_STATE(22)] = 1649,
  [SMALL_STATE(23)] = 1693,
  [SMALL_STATE(24)] = 1737,
  [SMALL_STATE(25)] = 1801,
  [SMALL_STATE(26)] = 1865,
  [SMALL_STATE(27)] = 1929,
  [SMALL_STATE(28)] = 1993,
  [SMALL_STATE(29)] = 2057,
  [SMALL_STATE(30)] = 2121,
  [SMALL_STATE(31)] = 2185,
  [SMALL_STATE(32)] = 2229,
  [SMALL_STATE(33)] = 2273,
  [SMALL_STATE(34)] = 2337,
  [SMALL_STATE(35)] = 2381,
  [SMALL_STATE(36)] = 2445,
  [SMALL_STATE(37)] = 2509,
  [SMALL_STATE(38)] = 2573,
  [SMALL_STATE(39)] = 2637,
  [SMALL_STATE(40)] = 2681,
  [SMALL_STATE(41)] = 2725,
  [SMALL_STATE(42)] = 2769,
  [SMALL_STATE(43)] = 2833,
  [SMALL_STATE(44)] = 2875,
  [SMALL_STATE(45)] = 2917,
  [SMALL_STATE(46)] = 2957,
  [SMALL_STATE(47)] = 2997,
  [SMALL_STATE(48)] = 3037,
  [SMALL_STATE(49)] = 3077,
  [SMALL_STATE(50)] = 3120,
  [SMALL_STATE(51)] = 3163,
  [SMALL_STATE(52)] = 3196,
  [SMALL_STATE(53)] = 3229,
  [SMALL_STATE(54)] = 3262,
  [SMALL_STATE(55)] = 3291,
  [SMALL_STATE(56)] = 3324,
  [SMALL_STATE(57)] = 3357,
  [SMALL_STATE(58)] = 3371,
  [SMALL_STATE(59)] = 3385,
  [SMALL_STATE(60)] = 3399,
  [SMALL_STATE(61)] = 3413,
  [SMALL_STATE(62)] = 3427,
  [SMALL_STATE(63)] = 3441,
  [SMALL_STATE(64)] = 3455,
  [SMALL_STATE(65)] = 3469,
  [SMALL_STATE(66)] = 3483,
  [SMALL_STATE(67)] = 3497,
  [SMALL_STATE(68)] = 3511,
  [SMALL_STATE(69)] = 3525,
  [SMALL_STATE(70)] = 3539,
  [SMALL_STATE(71)] = 3553,
  [SMALL_STATE(72)] = 3567,
  [SMALL_STATE(73)] = 3578,
  [SMALL_STATE(74)] = 3588,
  [SMALL_STATE(75)] = 3600,
  [SMALL_STATE(76)] = 3612,
  [SMALL_STATE(77)] = 3624,
  [SMALL_STATE(78)] = 3636,
  [SMALL_STATE(79)] = 3646,
  [SMALL_STATE(80)] = 3656,
  [SMALL_STATE(81)] = 3666,
  [SMALL_STATE(82)] = 3676,
  [SMALL_STATE(83)] = 3688,
  [SMALL_STATE(84)] = 3700,
  [SMALL_STATE(85)] = 3710,
  [SMALL_STATE(86)] = 3720,
  [SMALL_STATE(87)] = 3730,
  [SMALL_STATE(88)] = 3742,
  [SMALL_STATE(89)] = 3753,
  [SMALL_STATE(90)] = 3766,
  [SMALL_STATE(91)] = 3775,
  [SMALL_STATE(92)] = 3788,
  [SMALL_STATE(93)] = 3797,
  [SMALL_STATE(94)] = 3808,
  [SMALL_STATE(95)] = 3821,
  [SMALL_STATE(96)] = 3830,
  [SMALL_STATE(97)] = 3839,
  [SMALL_STATE(98)] = 3852,
  [SMALL_STATE(99)] = 3861,
  [SMALL_STATE(100)] = 3870,
  [SMALL_STATE(101)] = 3883,
  [SMALL_STATE(102)] = 3896,
  [SMALL_STATE(103)] = 3909,
  [SMALL_STATE(104)] = 3922,
  [SMALL_STATE(105)] = 3931,
  [SMALL_STATE(106)] = 3944,
  [SMALL_STATE(107)] = 3953,
  [SMALL_STATE(108)] = 3962,
  [SMALL_STATE(109)] = 3973,
  [SMALL_STATE(110)] = 3982,
  [SMALL_STATE(111)] = 3991,
  [SMALL_STATE(112)] = 4004,
  [SMALL_STATE(113)] = 4017,
  [SMALL_STATE(114)] = 4030,
  [SMALL_STATE(115)] = 4043,
  [SMALL_STATE(116)] = 4056,
  [SMALL_STATE(117)] = 4065,
  [SMALL_STATE(118)] = 4074,
  [SMALL_STATE(119)] = 4087,
  [SMALL_STATE(120)] = 4096,
  [SMALL_STATE(121)] = 4109,
  [SMALL_STATE(122)] = 4120,
  [SMALL_STATE(123)] = 4133,
  [SMALL_STATE(124)] = 4146,
  [SMALL_STATE(125)] = 4159,
  [SMALL_STATE(126)] = 4172,
  [SMALL_STATE(127)] = 4185,
  [SMALL_STATE(128)] = 4198,
  [SMALL_STATE(129)] = 4208,
  [SMALL_STATE(130)] = 4216,
  [SMALL_STATE(131)] = 4226,
  [SMALL_STATE(132)] = 4236,
  [SMALL_STATE(133)] = 4244,
  [SMALL_STATE(134)] = 4254,
  [SMALL_STATE(135)] = 4264,
  [SMALL_STATE(136)] = 4274,
  [SMALL_STATE(137)] = 4284,
  [SMALL_STATE(138)] = 4292,
  [SMALL_STATE(139)] = 4300,
  [SMALL_STATE(140)] = 4310,
  [SMALL_STATE(141)] = 4318,
  [SMALL_STATE(142)] = 4326,
  [SMALL_STATE(143)] = 4334,
  [SMALL_STATE(144)] = 4344,
  [SMALL_STATE(145)] = 4354,
  [SMALL_STATE(146)] = 4362,
  [SMALL_STATE(147)] = 4370,
  [SMALL_STATE(148)] = 4378,
  [SMALL_STATE(149)] = 4388,
  [SMALL_STATE(150)] = 4398,
  [SMALL_STATE(151)] = 4406,
  [SMALL_STATE(152)] = 4413,
  [SMALL_STATE(153)] = 4420,
  [SMALL_STATE(154)] = 4427,
  [SMALL_STATE(155)] = 4434,
  [SMALL_STATE(156)] = 4441,
  [SMALL_STATE(157)] = 4448,
  [SMALL_STATE(158)] = 4455,
  [SMALL_STATE(159)] = 4462,
  [SMALL_STATE(160)] = 4469,
  [SMALL_STATE(161)] = 4476,
  [SMALL_STATE(162)] = 4483,
  [SMALL_STATE(163)] = 4490,
  [SMALL_STATE(164)] = 4497,
  [SMALL_STATE(165)] = 4504,
  [SMALL_STATE(166)] = 4511,
  [SMALL_STATE(167)] = 4518,
  [SMALL_STATE(168)] = 4525,
  [SMALL_STATE(169)] = 4532,
  [SMALL_STATE(170)] = 4539,
  [SMALL_STATE(171)] = 4546,
  [SMALL_STATE(172)] = 4553,
  [SMALL_STATE(173)] = 4560,
  [SMALL_STATE(174)] = 4567,
  [SMALL_STATE(175)] = 4574,
  [SMALL_STATE(176)] = 4581,
  [SMALL_STATE(177)] = 4588,
  [SMALL_STATE(178)] = 4595,
  [SMALL_STATE(179)] = 4602,
  [SMALL_STATE(180)] = 4609,
  [SMALL_STATE(181)] = 4616,
  [SMALL_STATE(182)] = 4623,
  [SMALL_STATE(183)] = 4630,
  [SMALL_STATE(184)] = 4637,
  [SMALL_STATE(185)] = 4644,
  [SMALL_STATE(186)] = 4651,
  [SMALL_STATE(187)] = 4658,
  [SMALL_STATE(188)] = 4665,
  [SMALL_STATE(189)] = 4672,
  [SMALL_STATE(190)] = 4679,
  [SMALL_STATE(191)] = 4686,
  [SMALL_STATE(192)] = 4693,
  [SMALL_STATE(193)] = 4700,
  [SMALL_STATE(194)] = 4707,
  [SMALL_STATE(195)] = 4714,
  [SMALL_STATE(196)] = 4721,
  [SMALL_STATE(197)] = 4728,
  [SMALL_STATE(198)] = 4735,
  [SMALL_STATE(199)] = 4742,
  [SMALL_STATE(200)] = 4749,
  [SMALL_STATE(201)] = 4756,
  [SMALL_STATE(202)] = 4763,
  [SMALL_STATE(203)] = 4770,
  [SMALL_STATE(204)] = 4777,
  [SMALL_STATE(205)] = 4784,
  [SMALL_STATE(206)] = 4791,
  [SMALL_STATE(207)] = 4798,
  [SMALL_STATE(208)] = 4805,
  [SMALL_STATE(209)] = 4812,
  [SMALL_STATE(210)] = 4819,
  [SMALL_STATE(211)] = 4826,
  [SMALL_STATE(212)] = 4833,
  [SMALL_STATE(213)] = 4840,
  [SMALL_STATE(214)] = 4847,
  [SMALL_STATE(215)] = 4854,
  [SMALL_STATE(216)] = 4861,
  [SMALL_STATE(217)] = 4868,
  [SMALL_STATE(218)] = 4875,
  [SMALL_STATE(219)] = 4882,
  [SMALL_STATE(220)] = 4889,
  [SMALL_STATE(221)] = 4896,
  [SMALL_STATE(222)] = 4903,
  [SMALL_STATE(223)] = 4910,
  [SMALL_STATE(224)] = 4917,
  [SMALL_STATE(225)] = 4924,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(135),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(33),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(85),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(209),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(54),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(208),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(175),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(173),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(80),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(113),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(144),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(78),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2), SHIFT_REPEAT(72),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(33),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(85),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(25),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(175),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(173),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(80),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(113),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(144),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(78),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(72),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, .production_id = 7),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5, .production_id = 7),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_member, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_member, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 6, .production_id = 9),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 6, .production_id = 9),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 5, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 5, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 6, .production_id = 8),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 6, .production_id = 8),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_member, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_member, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extended_attribute_list, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extended_attribute_list, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extended_attribute_list, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extended_attribute_list, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 4, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 4, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 6, .production_id = 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface, 6, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_includes, 4, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_includes, 4, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 8, .production_id = 5),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface, 8, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 5, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 5, .production_id = 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 6, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 6, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, .production_id = 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 6, .production_id = 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 6, .production_id = 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface, 6, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 7, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface, 7, .production_id = 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 7, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface, 7, .production_id = 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback, 8, .production_id = 6),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback, 8, .production_id = 6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 5, .production_id = 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface, 5, .production_id = 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 7, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 7, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback, 7, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback, 7, .production_id = 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_base, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_base, 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_base, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extended_attribute, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_value, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(20),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(42),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extended_attribute_list_repeat1, 2), SHIFT_REPEAT(148),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extended_attribute_list_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_value, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extended_attribute_repeat1, 2), SHIFT_REPEAT(169),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extended_attribute_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(178),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extended_attribute, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 5, .production_id = 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extended_attribute, 6),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extended_attribute, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [580] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_type, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
