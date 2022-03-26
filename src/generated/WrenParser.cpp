
// Generated from C:/projects/goll/grammar/WrenParser.g4 by ANTLR 4.9.2


#include "WrenParserListener.h"

#include "WrenParser.h"


using namespace antlrcpp;
using namespace antlr4;

WrenParser::WrenParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

WrenParser::~WrenParser() {
  delete _interpreter;
}

std::string WrenParser::getGrammarFileName() const {
  return "WrenParser.g4";
}

const std::vector<std::string>& WrenParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& WrenParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FunctionsContext ------------------------------------------------------------------

WrenParser::FunctionsContext::FunctionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WrenParser::FunctionsContext::EOF() {
  return getToken(WrenParser::EOF, 0);
}

std::vector<tree::TerminalNode *> WrenParser::FunctionsContext::ABC() {
  return getTokens(WrenParser::ABC);
}

tree::TerminalNode* WrenParser::FunctionsContext::ABC(size_t i) {
  return getToken(WrenParser::ABC, i);
}


size_t WrenParser::FunctionsContext::getRuleIndex() const {
  return WrenParser::RuleFunctions;
}

void WrenParser::FunctionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctions(this);
}

void WrenParser::FunctionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<WrenParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctions(this);
}

WrenParser::FunctionsContext* WrenParser::functions() {
  FunctionsContext *_localctx = _tracker.createInstance<FunctionsContext>(_ctx, getState());
  enterRule(_localctx, 0, WrenParser::RuleFunctions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(2);
      match(WrenParser::ABC);
      setState(5); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == WrenParser::ABC);
    setState(7);
    match(WrenParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> WrenParser::_decisionToDFA;
atn::PredictionContextCache WrenParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN WrenParser::_atn;
std::vector<uint16_t> WrenParser::_serializedATN;

std::vector<std::string> WrenParser::_ruleNames = {
  "functions"
};

std::vector<std::string> WrenParser::_literalNames = {
  "", "'ABC'"
};

std::vector<std::string> WrenParser::_symbolicNames = {
  "", "ABC"
};

dfa::Vocabulary WrenParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> WrenParser::_tokenNames;

WrenParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x3, 0xc, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x6, 0x2, 0x6, 0xa, 
       0x2, 0xd, 0x2, 0xe, 0x2, 0x7, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
       0x2, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0x4, 0x6, 0x7, 0x3, 0x2, 0x2, 0x5, 0x4, 0x3, 0x2, 0x2, 0x2, 0x6, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x7, 0x5, 0x3, 0x2, 0x2, 0x2, 0x7, 0x8, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0x9, 0x3, 0x2, 0x2, 0x2, 0x9, 0xa, 0x7, 
       0x2, 0x2, 0x3, 0xa, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3, 0x7, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

WrenParser::Initializer WrenParser::_init;
