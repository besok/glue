
// Generated from C:/projects/goll/grammar/WrenParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "WrenParserListener.h"


/**
 * This class provides an empty implementation of WrenParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  WrenParserBaseListener : public WrenParserListener {
public:

  virtual void enterFunctions(WrenParser::FunctionsContext * /*ctx*/) override { }
  virtual void exitFunctions(WrenParser::FunctionsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

