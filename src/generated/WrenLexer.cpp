
// Generated from C:/projects/goll/grammar/WrenLexer.g4 by ANTLR 4.9.2


#include "WrenLexer.h"


using namespace antlr4;


WrenLexer::WrenLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

WrenLexer::~WrenLexer() {
  delete _interpreter;
}

std::string WrenLexer::getGrammarFileName() const {
  return "WrenLexer.g4";
}

const std::vector<std::string>& WrenLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& WrenLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& WrenLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& WrenLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& WrenLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> WrenLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& WrenLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> WrenLexer::_decisionToDFA;
atn::PredictionContextCache WrenLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN WrenLexer::_atn;
std::vector<uint16_t> WrenLexer::_serializedATN;

std::vector<std::string> WrenLexer::_ruleNames = {
  "ABC"
};

std::vector<std::string> WrenLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> WrenLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> WrenLexer::_literalNames = {
  "", "'ABC'"
};

std::vector<std::string> WrenLexer::_symbolicNames = {
  "", "ABC"
};

dfa::Vocabulary WrenLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> WrenLexer::_tokenNames;

WrenLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
       0x2, 0x3, 0x9, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x2, 0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 
       0x8, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0x5, 0x6, 0x7, 0x43, 0x2, 0x2, 0x6, 0x7, 0x7, 0x44, 0x2, 0x2, 0x7, 
       0x8, 0x7, 0x45, 0x2, 0x2, 0x8, 0x4, 0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 
       0x2, 
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

WrenLexer::Initializer WrenLexer::_init;
