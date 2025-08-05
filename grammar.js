/**
 * @file Treesitter grammar for the Web Interface Definition Language
 * @author Paul Adenot <padenot@mozilla.com>
 * @license MIT
 */

function commaSep(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

module.exports = grammar({
  name: 'webidl',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
    $.preprocessor,
  ],

  rules: {
    source_file: $ => repeat(choice($.definition, $.comment, $.standalone_extended_attributes)),

    definition: $ => choice(
      $.interface,
      $.interface_forward_declaration,
      $.callback_interface,
      $.dictionary,
      $.enum,
      $.callback,
      $.callback_constructor,
      $.typedef,
      $.includes,
      $.namespace,
      $.partial_interface,
      $.partial_dictionary,
      $.partial_namespace,
      $.partial_mixin,
      $.mixin,
    ),

    extended_attribute_list: $ => seq(
      "[",
      commaSep($.extended_attribute),
      "]"
    ),

    standalone_extended_attributes: $ => seq(
      "[",
      commaSep($.extended_attribute),
      "]"
    ),


    extended_attribute: $ => choice(
      $.identifier,
      seq($.identifier, "=", $.extended_attribute_value),
      seq($.identifier, "=", "(", commaSep($.extended_attribute_value), ")")
    ),

    extended_attribute_value: $ => choice(
      $.identifier,
      $.string_literal,
      "*",
      $.number_literal,
      seq($.identifier, "(", optional($.argument_list), ")")
    ),

    identifier: _ => /[_-]?[A-Za-z][0-9A-Za-z_-]*/,

    interface: $ => seq(
      optional($.extended_attribute_list),
      'interface',
      field('name', $.identifier),
      optional($.inheritance),
      '{',
      repeat($.interface_member),
      '}',
      ';'
    ),

    interface_forward_declaration: $ => seq(
      optional($.extended_attribute_list),
      'interface',
      field('name', $.identifier),
      ';'
    ),

    callback_interface: $ => seq(
      optional($.extended_attribute_list),
      'callback',
      'interface',
      field('name', $.identifier),
      optional($.inheritance),
      '{',
      repeat($.interface_member),
      '}',
      ';'
    ),

    inheritance: $ => seq(':', $.identifier),

    interface_member: $ =>seq(
      optional($.extended_attribute_list),
      choice(
        $.attribute,
        $.operation,
        $.const,
        $.constructor,
        $.stringifier,
        $.iterable,
        $.async_iterable,
        $.maplike,
        $.setlike,
        $.legacycaller
      )
    ),

    attribute: $ => seq(
      optional('static'),
      optional('readonly'),
      optional('inherit'),
      'attribute',
      field('type', $.type),
      field('name', $.identifier),
      ';'
    ),

    operation: $ => seq(
      optional('static'),
      optional(choice('getter', 'setter', 'deleter')),
      field('return_type', $.type),
      optional(field('name', $.identifier)),
      '(', optional($.argument_list), ')',
      ';'
    ),

    argument_list: $ => seq($.argument, repeat(seq(',', $.argument))),

    argument: $ => seq(
      optional($.extended_attribute_list),
      optional('optional'),
      field('type', $.type),
      optional('...'),
      field('name', $.identifier),
      optional(seq('=', $.const_value)),
    ),

    const: $ => seq(
      'const',
      field('type', $.const_type),
      field('name', $.identifier),
      '=',
      field('value', $.const_value),
      ';'
    ),

    const_type: $ => choice($.primitive_type, $.identifier),
    const_value: $ => choice(
      $.boolean_literal,
      $.float_literal,
      $.number_literal,
      $.string_literal,
      seq('{', '}'),
      seq('[', ']'),
      seq('[', commaSep($.const_value), ']'),
      'null'
    ),
    boolean_literal: _ => choice('true', 'false'),
    float_literal: _ => choice('NaN', 'Infinity', '-Infinity'),
    string_literal: _ => token(seq(
      '"',
      repeat(choice(
        /[^"\\\n\r]/,       // normal characters
        /\\["\\bfnrtv]/,     // escaped chars: \" \\ \b \f \n \r \t \v
        /\\u[0-9a-fA-F]{4}/, // unicode escapes
        /\\U[0-9a-fA-F]{8}/  // optional full unicode escapes
      )),
      '"'
    )),
    number_literal: _ => token(choice(
      /-?(0|[1-9][0-9]*)/,                                  // integer
      /-?(0[xX][0-9a-fA-F]+)/,                              // hex
      /-?(0[0-7]+)/,                                        // octal
      /-?(([0-9]+\.[0-9]*|[0-9]*\.[0-9]+)([eE][+-]?[0-9]+)?)/, // float
      /-?[0-9]+[eE][+-]?[0-9]+/,                            // exponent-only float
      'NaN',
      'Infinity',
      '-Infinity'
    )),

    constructor: $ => seq(
      'constructor',
      '(', optional($.argument_list), ')',
      ';'
    ),

    stringifier: $ => choice(
      seq('stringifier', ';'),
      seq('stringifier', $.attribute),
      seq('stringifier', $.operation)
    ),

    iterable: $ => seq(
      'iterable',
      '<',
      $.type,
      optional(seq(',', $.type)),
      '>',
      ';'
    ),

    async_iterable: $ => seq(
      'async_iterable',
      '<',
      $.type,
      optional(seq(',', $.type)),
      '>',
      optional(seq('(', optional($.argument_list), ')')),
      ';'
    ),

    maplike: $ => seq(
      optional('readonly'),
      'maplike',
      '<',
      $.type,
      ',',
      $.type,
      '>',
      ';'
    ),

    setlike: $ => seq(
      optional('readonly'),
      'setlike',
      '<',
      $.type,
      '>',
      ';'
    ),

    legacycaller: $ => seq(
      'legacycaller',
      field('return_type', $.type),
      optional(field('name', $.identifier)),
      '(', optional($.argument_list), ')',
      ';'
    ),

    dictionary: $ => seq(
      'dictionary',
      field('name', $.identifier),
      optional($.inheritance),
      '{',
      repeat($.field),
      '}',
      ';'
    ),

    field: $ => seq(
      optional($.extended_attribute_list),
      optional('required'),
      optional($.extended_attribute_list),
      field('type', $.type),
      field('name', $.identifier),
      optional(seq('=', $.const_value)),
      ';'
    ),

    enum: $ => seq(
      'enum',
      field('name', $.identifier),
      '{',
      $.string_list,
      '}',
      ';'
    ),

    string_list: $ => seq($.string, repeat(seq(',', $.string)), optional(',')),
    string: _ => /"[^"]*"/, // simplified

    callback: $ => seq(
      'callback',
      field('name', $.identifier),
      '=',
      field('return_type', $.type),
      '(', optional($.argument_list), ')',
      ';'
    ),

    callback_constructor: $ => seq(
      'callback',
      'constructor',
      field('name', $.identifier),
      '=',
      field('return_type', $.type),
      '(', optional($.argument_list), ')',
      ';'
    ),

    typedef: $ => seq(
      'typedef',
      field('type', $.type),
      field('name', $.identifier),
      ';'
    ),

    includes: $ => seq(
      field('lhs', $.identifier),
      'includes',
      field('rhs', $.identifier),
      ';'
    ),

    namespace: $ => seq(
      optional($.extended_attribute_list),
      'namespace',
      field('name', $.identifier),
      '{',
      repeat($.namespace_member),
      '}',
      ';'
    ),

    namespace_member: $ => seq(
      optional($.extended_attribute_list),
      choice(
        $.operation,
        $.attribute,
        $.const
      )
    ),

    partial_interface: $ => seq(
      optional($.extended_attribute_list),
      'partial',
      'interface',
      field('name', $.identifier),
      '{',
      repeat($.interface_member),
      '}',
      ';'
    ),

    partial_dictionary: $ => seq(
      optional($.extended_attribute_list),
      'partial',
      'dictionary',
      field('name', $.identifier),
      '{',
      repeat($.field),
      '}',
      ';'
    ),

    partial_namespace: $ => seq(
      optional($.extended_attribute_list),
      'partial',
      'namespace',
      field('name', $.identifier),
      '{',
      repeat($.namespace_member),
      '}',
      ';'
    ),

    mixin: $ => seq(
      optional($.extended_attribute_list),
      'interface',
      'mixin',
      field('name', $.identifier),
      '{',
      repeat($.interface_member),
      '}',
      ';'
    ),

    partial_mixin: $ => seq(
      optional($.extended_attribute_list),
      'partial',
      'interface',
      'mixin',
      field('name', $.identifier),
      '{',
      repeat($.interface_member),
      '}',
      ';'
    ),

    type: $ => seq($.type_base, optional('?')),

    type_base: $ => choice(
      $.annotated_type,
      $.primitive_type,
      $.array_type,
      $.string_type,
      $.identifier,
      seq('sequence', '<', $.type, '>'),
      seq('Promise', '<', $.type, '>'),
      seq('record', '<', $.string_type, ',', $.type, '>'),
      seq('FrozenArray', '<', $.type, '>'),
      seq('ObservableArray', '<', $.type, '>'),
      $.union_type
    ),

    annotated_type: $ => prec(1, seq(
      $.extended_attribute_list,
      choice(
        $.primitive_type,
        $.array_type,
        $.string_type,
        $.identifier
      )
    )),

    or_keyword: $ => token("or"),

    unionable_type: $ => choice(
      $.primitive_type,
      $.string_type,
      $.identifier
    ),

    union_type: $ => prec.left(seq(
      "(",
      $.union_member,
      repeat1(seq($.or_keyword, $.union_member)),
      ")"
    )),

    union_member: $ => seq(
      optional($.extended_attribute_list),
      $.type
    ),

    primitive_type: $ => choice(
      'boolean',
      'byte',
      'octet',
      'short',
      'long',
      seq('unsigned', 'short'),
      seq('unsigned', 'long'),
      seq('unsigned', 'long', 'long'),
      seq('long', 'long'),
      'float',
      'double',
      seq('unrestricted', 'float'),
      seq('unrestricted', 'double'),
      'bigint',
      'undefined',
      'any',
      'object'
    ),

    array_type: _ => choice(
      'Float32Array', 'Uint8Array', 'Int8Array', 'Uint16Array', 'Int16Array', 'Int32Array',
      'BigInt64Array', 'Uint8Array', 'Uint16Array', 'Float64Array', 'Uint32Array', 'BigUint64Array', 'Uint8Array', 'Int8Array'
    ),

    string_type: _ => choice('DOMString', 'ByteString', 'USVString', 'UTF8String'),

    async_keyword:        $ => "async",
    const_keyword:        $ => "const",
    deleter_keyword:      $ => "deleter",
    getter_keyword:       $ => "getter",
    inherit_keyword:      $ => "inherit",
    iterable_keyword:     $ => "iterable",
    maplike_keyword:      $ => "maplike",
    mixin_keyword:        $ => "mixin",
    namespace_keyword:    $ => "namespace",
    partial_keyword:      $ => "partial",
    setlike_keyword:      $ => "setlike",
    setter_keyword:       $ => "setter",
    static_keyword:       $ => "static",
    stringifier_keyword:  $ => "stringifier",
    unrestricted_keyword: $ => "unrestricted",

    // stolen from the C grammar
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),

    preprocessor: _ => token(choice(
      seq('#ifdef', /[^\n]*/),
      seq('#ifndef', /[^\n]*/),
      seq('#if', /[^\n]*/),
      seq('#elif', /[^\n]*/),
      seq('#else', /[^\n]*/),
      seq('#endif', /[^\n]*/),
      seq('#define', /[^\n]*/),
      seq('#undef', /[^\n]*/),
      seq('#include', /[^\n]*/)
    )),
  },
  conflicts: $ => [
    [$.type, $.unionable_type],
    [$.primitive_type, $.identifier],
    [$.extended_attribute_list, $.standalone_extended_attributes]
  ]
});

