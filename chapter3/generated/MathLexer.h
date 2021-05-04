
  /* This is a test for lexer::header */


// Generated from MathLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


#include <string>
#include <vector>




  class MyString {
    public:
      MyString(std::string str);
      virtual ~MyString();

      void ShowString();
    private:
      std::string value_;
  };


class  MathLexer : public antlr4::Lexer {
public:
  enum {
    ADD = 1, SUB = 2, MUL = 3, DIV = 4, LEFT_PAREN = 5, RIGHT_PAREN = 6, 
    COMMA = 7, ID = 8, NUM = 9, WS = 10
  };

  MathLexer(antlr4::CharStream *input);
  ~MathLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


    public:
      std::string public_mem;
    private:
      int private_mem;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

