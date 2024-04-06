Tree-sitter grammar for utlc: a subset of Scheme that's [restricted](https://sites.ualberta.ca/~jhoover/325/CourseNotes/section/Scheme_1.htm), but enough to facilitate programming in the untyped lambda-calculus.

## Status

Work in progress. Repository used tree-sitter-rust as scaffold, so maybe look at that instead.

## Developing the grammar

Following steps in tree-sitter docs exactly did confuse me. Instead of using npm as advised there, I suggest using the binary installed at `~/.cargo/bin/tree-sitter`.
My experience using npm:
- Dependencies got displaced from `package.json` after invoking `tree-sitter generate`.
- `tree-sitter generate` can only run once; you have to `npm init` all over again if you decide that you have changes to `grammar.js`. This is a bug because docs says otherwise.

```
# edit rules at grammar.js
tree-sitter generate
tree-sitter parse example-file
```
