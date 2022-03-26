
// Generated from C:/projects/goll/grammar/WrenParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "WrenParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by WrenParser.
 */
class  WrenParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFunctions(WrenParser::FunctionsContext *ctx) = 0;
  virtual void exitFunctions(WrenParser::FunctionsContext *ctx) = 0;


};

