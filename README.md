# tree-sitter-webidl

Tree-sitter parser for the WHATWG Web IDL (Interface Definition Language),
with `highlight.scm` query file.

Spec: https://webidl.spec.whatwg.org/

## Installation

```bash
npm install
```

## Build

```bash
tree-sitter generate
```

## Test

Run parser on a single file:
```bash

tree-sitter parse testcases/DedicatedWorkerGlobalScope.webidl
```

Run the parser on all files of `testcases/`, that are all `webidl` files of
Firefox as of
https://github.com/mozilla-firefox/firefox/commit/031fb86f50ca9a075af819c514114539ec8a9f60.

## License

MPL-2.0
