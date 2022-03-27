lexer grammar WrenLexer;

AS: 'as';
BREAK: 'break';
CLASS: 'class';
CONSTRUCT: 'construct';
CONTINUE: 'continue';
ELSE: 'else';
FALSE: 'false';
FOR: 'for';
FOREIGN: 'foreign';
IF: 'if';
IMPORT: 'import';
IN: 'in';
IS: 'is';
NULL: 'null';
RETURN: 'return';
STATIC: 'static';
SUPER: 'super';
THIS: 'this';
TRUE: 'true';
VAR: 'var';
WHILE: 'while';

LPAREN: '(';
RPAREN: ')';
LBRACE: '{';
RBRACE: '}';
LBRACK: '[';
RBRACK: ']';
SEMI: ';';
COMMA: ',';
DOT: '.';

HASH: '#';
ASSIGN: '=';
GT: '>';
LT: '<';
BANG: '!';
TILDE: '~';
QUESTION: '?';
COLON: ':';
EQUAL: '==';
LE: '<=';
GE: '>=';
NOTEQUAL: '!=';
AND: '&&';
OR: '||';
INC: '++';
DEC: '--';
ADD: '+';
SUB: '-';
MUL: '*';
DIV: '/';
BITAND: '&';
BITOR: '|';
CARET: '^';
MOD: '%';
ADD_ASSIGN: '+=';
SUB_ASSIGN: '-=';
MUL_ASSIGN: '*=';
DIV_ASSIGN: '/=';
AND_ASSIGN: '&=';
OR_ASSIGN: '|=';
XOR_ASSIGN: '^=';
MOD_ASSIGN: '%=';
LSHIFT_ASSIGN: '<<=';
RSHIFT_ASSIGN: '>>=';
URSHIFT_ASSIGN: '>>>=';
RANGE_OUT:           '...';
ELLIPSIS_IN:           '..';

IDENTIFIER: Letter LetterOrDigit*;

DECIMAL_LITERAL:    ('0' | [1-9] (Digits? | '_'+ Digits));
HEX_LITERAL:        '0' [xX] [0-9a-fA-F] ([0-9a-fA-F_]* [0-9a-fA-F])?;
OCT_LITERAL:        '0' '_'* [0-7] ([0-7_]* [0-7])? [lL]?;
BINARY_LITERAL:     '0' [bB] [01] ([01_]* [01])? [lL]?;

FLOAT_LITERAL:      (Digits '.' Digits? | '.' Digits) ExponentPart? [fFdD]?
             |       Digits (ExponentPart [fFdD]? | [fFdD])
             ;

HEX_FLOAT_LITERAL:  '0' [xX] (HexDigits '.'? | HexDigits? '.' HexDigits) [pP] [+-]? Digits [fFdD]?;

CHAR_LITERAL:       '\'' (~['\\\r\n] | EscapeSequence) '\'';

STRING_LITERAL:     '"' (~["\\\r\n] | EscapeSequence)* '"';
TEXT_BLOCK:         '"""' [ \t]* [\r\n] (. | EscapeSequence)*? '"""';

fragment EscapeSequence
    : '\\' [btnfr"'\\]
    | '\\' ([0-3]? [0-7])? [0-7]
    | '\\' 'u'+ HexDigit HexDigit HexDigit HexDigit
    ;


WS: [ \t\r\n\u000C]+ -> channel(HIDDEN);
COMMENT: '/*' .*? '*/' -> channel(2);
LINE_COMMENT: '//' ~[\r\n]* -> channel(2);
ERRCHAR: . -> channel(HIDDEN);


fragment ExponentPart
    : [eE] [+-]? Digits
    ;

fragment HexDigits
    : HexDigit ((HexDigit | '_')* HexDigit)?
    ;
fragment HexDigit
    : [0-9a-fA-F]
    ;
fragment Digits
    : [0-9] ([0-9_]* [0-9])?
    ;

fragment LetterOrDigit: Letter | [0-9];

fragment Letter:
	[a-zA-Z_]
	| ~[\u0000-\u007F\uD800-\uDBFF] // covers all characters above 0x7F which are not a surrogate
	| [\uD800-\uDBFF] [\uDC00-\uDFFF];
// covers UTF-16 surrogate pairs encodings for U+10000 to U+10FFFF