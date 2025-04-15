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
  ],

  rules: {
    source_file: $ => repeat(choice($.definition, $.comment)),

    definition: $ => choice(
      $.interface,
      $.dictionary,
      $.enum,
      $.callback,
      $.typedef,
      $.includes,
    ),

    extended_attribute_list: $ => seq(
      "[",
      commaSep($.extended_attribute),
      "]"
    ),

    extended_attribute: $ => choice(
      $.identifier,
      seq($.identifier, "=", $.identifier),
      seq($.identifier, "=", "(", commaSep($.identifier), ")")
    ),

    identifier: _ => /[_-]?[A-Za-z][0-9A-Za-z_]*/,

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

    inheritance: $ => seq(':', $.identifier),

    interface_member: $ =>seq(
      optional($.extended_attribute_list),
      choice(
        $.attribute,
        $.operation,
        $.const,
        $.constructor
      )
    ),

    attribute: $ => seq(
      optional('readonly'),
      'attribute',
      field('type', $.type),
      field('name', $.identifier),
      ';'
    ),

    operation: $ => seq(
      field('return_type', $.type),
      field('name', $.identifier),
      '(', optional($.argument_list), ')',
      ';'
    ),

    argument_list: $ => seq($.argument, repeat(seq(',', $.argument))),

    argument: $ => seq(
      optional('optional'),
      field('type', $.type),
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
      optional('required'),
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

    string_list: $ => seq($.string, repeat(seq(',', $.string))),
    string: _ => /"[^"]*"/, // simplified

    callback: $ => seq(
      'callback',
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

    type: $ => seq($.type_base, optional('?')),

    type_base: $ => choice(
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

    or_keyword: $ => token("or"),

    unionable_type: $ => choice(
      $.primitive_type,
      $.string_type,
      $.identifier
    ),

    union_type: $ => prec.left(seq(
      "(",
      $.type,
      repeat1(seq($.or_keyword, $.type)),
      ")"
    )),

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
      'bigint',
      'undefined'
    ),

    array_type: _ => choice(
      'Float32Array', 'Uint8Array', 'Int8Array', 'Uint16Array', 'Int16Array', 'Int32Array',
      'BigInt64Array', 'Uint8Array', 'Uint16Array', 'Float64Array', 'Uint32Array', 'BigUint64Array', 'Uint8Array', 'Int8Array'
    ),

    string_type: _ => choice('DOMString', 'ByteString', 'USVString'),

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
  },
  conflicts: $ => [
    [$.type, $.unionable_type],
    [$.primitive_type, $.identifier]
  ]
});

