;; Highlights for WebIDL grammar

(comment) @comment

; Keywords
"interface" @keyword
"dictionary" @keyword  
"enum" @keyword
"callback" @keyword
"typedef" @keyword
"includes" @keyword
"attribute" @keyword
"const" @keyword
"constructor" @keyword
"namespace" @keyword
"partial" @keyword
"mixin" @keyword
"static" @keyword
"readonly" @keyword
"required" @keyword
"optional" @keyword
"inherit" @keyword
"stringifier" @keyword
"getter" @keyword
"setter" @keyword
"deleter" @keyword
"legacycaller" @keyword
"async_iterable" @keyword
"iterable" @keyword
"maplike" @keyword
"setlike" @keyword
"unrestricted" @keyword


; Extended attribute identifiers
(extended_attribute (identifier) @attribute)

; Types
((primitive_type) @type)
((string_type) @type)
((type) @type)

; Identifiers  
(interface name: (identifier) @type)
(dictionary name: (identifier) @type)
(enum name: (identifier) @type)
(namespace name: (identifier) @type)
(callback_interface name: (identifier) @type)
(callback_constructor name: (identifier) @type)
(mixin name: (identifier) @type)
(field name: (identifier) @property)
(operation name: (identifier) @function.method)
(attribute name: (identifier) @property)
(const name: (identifier) @constant)
(identifier) @variable

; Literals
((string) @string)
((boolean_literal) @boolean)
((float_literal) @number)
((number_literal) @number)
((string_literal) @string)

; Special constructs
(stringifier_attribute) @keyword
(stringifier_operation) @keyword
(getter_operation) @keyword
(setter_operation) @keyword
(deleter_operation) @keyword
(legacycaller_operation) @keyword

; Punctuation
["(" ")" "{" "}" "<" ">" ";" "," "=" "?" "[" "]" "*" "..."] @punctuation.delimiter

