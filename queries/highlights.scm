;; Highlights for WebIDL grammar

;; (identifier) @variable
;;
;; (type) @type
;;
;; (enum_value) @string
;;
;; (attribute "attribute") @keyword
;; (method) @function
;;
;; ("interface" "typedef" "enum") @keyword
;;
;; ("{" "}" ";" "," "(") @punctuation.delimiter
;;
(comment) @comment

; highlights.scm

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



; Punctuation
["(" ")" "{" "}" "<" ">" ";" "," "=" "?"] @punctuation.delimiter

