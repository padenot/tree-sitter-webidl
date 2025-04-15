# tree-sitter-webidl

Tree-sitter parser for Mozilla's webidl (Inter-process Protocol Definition
Language), with `highlight.scm` query file.

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

tree-sitter parse testcases/PBrowser.webidl
```

## License

MPL-2.0
