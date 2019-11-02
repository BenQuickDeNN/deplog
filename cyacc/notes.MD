# Context-free Grammars
Context-free grammars contains terminal symbols, nonterminal symbols, start symbols and productions.
## Definition
1. Terminal symbol (token) is the primary symbol of a string, such as "if", "then" and "else".
2. Nonterminal symbol represents the variable in a string, such as "stmt" and "expr".
3. Start symbol is a special nonterminal symbol, it represents the start point of grammars.
4. A production is constructed by terminal symbols and nonterminal symbols, with an arrow "->" or "::=" pointing to a string. Such as "stmt -> if expr then stmt else stmt".
# Backus-Naur Form (BNF)
A normalize symbol system.
## Rule
In Bison
1. ::= or : represents defining.
2. "" or '' string between quotation marks represents characters.
3. <> string between angle brackets represents necessary content.
4. | represents optional contents.
## Example
See file ../yacc_demo/parser.y