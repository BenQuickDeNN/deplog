# Introduction
DePLoG: an automatic parallelizer, to detect and expose potentially SIMDizable loops, and generate vectorizable codes.

# Workflow
1. Extract the codes in the scope that surrounded by "#pragma deplog" and "#pragma enddep" pair.
2. Lexing and parsing, generate AST.
3. Scan AST, generate dependence table.
4. Data buffering, adjust AST.
5. Statement rearragement, adjust AST.
6. Rescan AST, generate optimized codes.
