
  /* This is a test for lexer::header */


// Generated from MathLexer.g4 by ANTLR 4.7.1


#include "MathLexer.h"


#include <string>
#include <vector>


using namespace antlr4;


MathLexer::MathLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MathLexer::~MathLexer() {
  delete _interpreter;
}

std::string MathLexer::getGrammarFileName() const {
  return "MathLexer.g4";
}

const std::vector<std::string>& MathLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& MathLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& MathLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& MathLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& MathLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> MathLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& MathLexer::getATN() const {
  return _atn;
}


  MyString::MyString(std::string str) : value_(str) {}
  MyString::~MyString() {}
  void MyString::ShowString() { std::cout << "String is " << value_ << std::endl; }




// Static vars and initialization.
std::vector<dfa::DFA> MathLexer::_decisionToDFA;
atn::PredictionContextCache MathLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MathLexer::_atn;
std::vector<uint16_t> MathLexer::_serializedATN;

std::vector<std::string> MathLexer::_ruleNames = {
  u8"ADD", u8"SUB", u8"MUL", u8"DIV", u8"LEFT_PAREN", u8"RIGHT_PAREN", u8"COMMA", 
  u8"ID", u8"NUM", u8"WS"
};

std::vector<std::string> MathLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> MathLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> MathLexer::_literalNames = {
  "", u8"'+'", u8"'-'", u8"'*'", u8"'/'", u8"'('", u8"')'", u8"','"
};

std::vector<std::string> MathLexer::_symbolicNames = {
  "", u8"ADD", u8"SUB", u8"MUL", u8"DIV", u8"LEFT_PAREN", u8"RIGHT_PAREN", 
  u8"COMMA", u8"ID", u8"NUM", u8"WS"
};

dfa::Vocabulary MathLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MathLexer::_tokenNames;

MathLexer::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0xc, 0x46, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0x27, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 
    0x28, 0x3, 0xa, 0x6, 0xa, 0x2c, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x2d, 
    0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x32, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x33, 
    0x5, 0xa, 0x36, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x3a, 0xa, 0xa, 
    0x3, 0xa, 0x6, 0xa, 0x3d, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x3e, 0x5, 0xa, 
    0x41, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x2, 0x2, 0xc, 
    0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 
    0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x3, 0x2, 0x7, 0x4, 0x2, 0x43, 0x5c, 
    0x63, 0x7c, 0x3, 0x2, 0x32, 0x3b, 0x4, 0x2, 0x47, 0x47, 0x67, 0x67, 
    0x4, 0x2, 0x2d, 0x2d, 0x2f, 0x2f, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 
    0x22, 0x2, 0x4c, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x3, 0x17, 0x3, 0x2, 0x2, 0x2, 0x5, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xb, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0xf, 0x23, 0x3, 0x2, 0x2, 0x2, 0x11, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x13, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x15, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x17, 0x18, 0x7, 0x2d, 0x2, 0x2, 0x18, 0x4, 0x3, 0x2, 0x2, 0x2, 0x19, 
    0x1a, 0x7, 0x2f, 0x2, 0x2, 0x1a, 0x6, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 
    0x7, 0x2c, 0x2, 0x2, 0x1c, 0x8, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 
    0x31, 0x2, 0x2, 0x1e, 0xa, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x2a, 
    0x2, 0x2, 0x20, 0xc, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x2b, 0x2, 
    0x2, 0x22, 0xe, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x2e, 0x2, 0x2, 
    0x24, 0x10, 0x3, 0x2, 0x2, 0x2, 0x25, 0x27, 0x9, 0x2, 0x2, 0x2, 0x26, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x26, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x2c, 0x9, 0x3, 0x2, 0x2, 0x2b, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x2f, 0x31, 0x7, 0x30, 0x2, 0x2, 0x30, 0x32, 0x9, 0x3, 0x2, 0x2, 0x31, 
    0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x40, 0x3, 0x2, 0x2, 0x2, 0x37, 0x39, 0x9, 0x4, 0x2, 
    0x2, 0x38, 0x3a, 0x9, 0x5, 0x2, 0x2, 0x39, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3b, 
    0x3d, 0x9, 0x3, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x41, 0x3, 0x2, 0x2, 0x2, 0x40, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x14, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x43, 0x9, 0x6, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x45, 0x8, 0xb, 0x2, 0x2, 0x45, 0x16, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x2, 0x28, 0x2d, 0x33, 0x35, 0x39, 0x3e, 0x40, 0x3, 0x2, 0x3, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MathLexer::Initializer MathLexer::_init;
