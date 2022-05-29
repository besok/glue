#ifndef E0118721_1356_4A42_A5DE_1208097C6EB2
#define E0118721_1356_4A42_A5DE_1208097C6EB2

#include "WrenLexer.h"
#include "WrenListener.h"
#include "WrenParser.h"
#include "antlr4-runtime.h"
#include "AstElement.h"
#include <fstream>
#include <functional>
#include <iostream>
#include <string>

static AstElement *parse(const std::string &script,
      const std::function<antlr4::ParserRuleContext *(WrenParser *)> &rule) {
  antlr4::ANTLRInputStream input(script);
  WrenLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  WrenParser parser(&tokens);

  WrenListener listener;
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, rule(&parser));

  return listener.pop();
}

static AstElement *parse(const std::string &script) {
  return parse(script, [](WrenParser *parser) { return parser->script(); });
}

#endif /* E0118721_1356_4A42_A5DE_1208097C6EB2 */
