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
((interface) @keyword)
((dictionary) @keyword)
((enum) @keyword)
((callback) @keyword)
((typedef) @keyword)
((includes) @keyword)
((attribute) @keyword)
((const) @keyword)
((constructor) @keyword)


((async_keyword)	@keyword)
((deleter_keyword)	@keyword)
((getter_keyword)	@keyword)
((inherit_keyword)	@keyword)
((iterable_keyword)	@keyword)
((maplike_keyword)	@keyword)
((mixin_keyword)	@keyword)
((namespace_keyword)	@keyword)
((partial_keyword)	@keyword)
((setlike_keyword)	@keyword)
((setter_keyword)	@keyword)
((static_keyword)	@keyword)

((extended_attribute_list) @attribute)
((extended_attribute (identifier) @attribute))

; Types
((primitive_type) @type)
((string_type) @type)
((type) @type)

; Identifiers
((identifier) @variable)
((field name: (identifier) @property))

; Literals
((string) @string)
((boolean_literal) @boolean)
((float_literal) @number)
((number_literal) @number)
((string_literal) @string)



; Punctuation
["(" ")" "{" "}" "<" ">" ";" "," "=" "?"] @punctuation.delimiter

