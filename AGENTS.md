# AGENTS.md

## Project Overview
This repository contains a Tree-sitter grammar for `utlc` (Untyped Lambda Calculus), a subset of Scheme.

## Structure
- `grammar.js`: The grammar definition.
- `queries/`: Tree-sitter queries for syntax highlighting, etc.
- `test/corpus/`: Test cases.
- `src/`: Generated parser code.
- `bindings/`: Bindings for different languages (Node.js, Rust, etc.).

## Development Workflow

### Prerequisites
- Node.js and npm
- `tree-sitter-cli` (installed via `npm install`)

### Running Tests
To regenerate the parser and run tests:
```bash
npx tree-sitter generate && npx tree-sitter test
```

### Building
To build the project:
```bash
npm run build
```

### Guidelines for Future Agents
1.  **Grammar Changes**: Always run `npx tree-sitter generate` after modifying `grammar.js`.
2.  **Testing**: Ensure all tests in `test/corpus/` pass. Add new tests when adding features.
3.  **Scope**: The current grammar is a strict subset. Any extensions should align with Scheme syntax.
4.  **Formatting**: Follow standard JavaScript coding style for `grammar.js`.
5.  **Files to Watch**:
    - `grammar.js`: Source of truth for the grammar.
    - `package.json`: Metadata and dependencies.
    - `queries/highlights.scm`: Syntax highlighting rules.
