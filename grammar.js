/**
 * @file Treesitter grammar for the Web Interface Definition Language
 * @author Paul Adenot <padenot@mozilla.com>
 * @license MIT
 */

module.exports = grammar({
  name: 'webidl',

  rules: {
    source_file: $ => repeat(choice($.definition, $.comment)),

    definition: $ => choice(
      $.interface_definition,
      $.typedef,
      $.enum_definition
    ),

    interface_definition: $ => seq(
      'interface',
      $.identifier,
      '{',
      repeat($.interface_member),
      '}',
      ';'
    ),

    typedef: $ => seq(
      'typedef',
      $.type,
      $.identifier,
      ';'
    ),

    enum_definition: $ => seq(
      'enum',
      $.identifier,
      '{',
      commaSep($.enum_value),
      '}',
      ';'
    ),

    type: $ => choice('unsigned long', 'double', 'boolean', 'DOMString'),

    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,
    enum_value: $ => /"[^"]*"/,

    interface_member: $ => choice(
      $.attribute,
      $.method
    ),

    attribute: $ => seq('attribute', $.type, $.identifier, ';'),
    method: $ => seq($.type, $.identifier, '(', optional($.parameter_list), ')', ';'),

    parameter_list: $ => seq($.parameter, repeat(seq(',', $.parameter))),
    parameter: $ => seq($.type, $.identifier),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
    )),
  }
});

function commaSep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
