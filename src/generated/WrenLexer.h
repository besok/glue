
// Generated from C:/projects/goll/grammar/WrenLexer.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  WrenLexer : public antlr4::Lexer {
public:
  enum {
    AS = 1, BREAK_T = 2, CLASS_T = 3, CONSTRUCT = 4, CONTINUE_T = 5, ELSE_T = 6, 
    FALSE_T = 7, FOR_T = 8, FOREIGN_T = 9, IF_T = 10, IMPORT_T = 11, IN = 12, 
    IS = 13, NULL_T = 14, RETURN_T = 15, STATIC_T = 16, TRUE_T = 17, VAR_T = 18, 
    WHILE_T = 19, LPAREN = 20, RPAREN = 21, LBRACE = 22, RBRACE = 23, LBRACK = 24, 
    RBRACK = 25, SEMI = 26, COMMA = 27, DOT = 28, HASH = 29, GT = 30, LT = 31, 
    BANG = 32, TILDE = 33, QUESTION = 34, COLON = 35, EQUAL = 36, LE = 37, 
    GE = 38, NOTEQUAL = 39, AND = 40, OR = 41, INC = 42, DEC = 43, ADD = 44, 
    SUB = 45, MUL = 46, DIV = 47, BITAND = 48, BITOR = 49, CARET = 50, MOD = 51, 
    ASSIGN = 52, ADD_ASSIGN = 53, SUB_ASSIGN = 54, MUL_ASSIGN = 55, DIV_ASSIGN = 56, 
    AND_ASSIGN = 57, OR_ASSIGN = 58, XOR_ASSIGN = 59, MOD_ASSIGN = 60, LSHIFT_ASSIGN = 61, 
    LSHIFT = 62, RSHIFT = 63, RSHIFT_ASSIGN = 64, URSHIFT_ASSIGN = 65, ELLIPSIS_OUT = 66, 
    ELLIPSIS_IN = 67, IDENTIFIER = 68, DECIMAL_LITERAL = 69, HEX_LITERAL = 70, 
    OCT_LITERAL = 71, BINARY_LITERAL = 72, FLOAT_LITERAL = 73, HEX_FLOAT_LITERAL = 74, 
    CHAR_LITERAL = 75, STRING_LITERAL = 76, TEXT_BLOCK = 77, WS = 78, COMMENT = 79, 
    LINE_COMMENT = 80, ERRCHAR = 81
  };

  explicit WrenLexer(antlr4::CharStream *input);

  ~WrenLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

