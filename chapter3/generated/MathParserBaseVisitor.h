
// Generated from MathParser.g4 by ANTLR 4.7.1

#pragma once

 
  /* base visitor pre include section */ 
#include <string>


#include "antlr4-runtime.h"
#include "MathParserVisitor.h"


  /* base visitor post include section */
#include <string>


/**
 * This class provides an empty implementation of MathParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MathParserBaseVisitor : public MathParserVisitor {
public:

  /* base visitor public declarations/members section */
  std::string parser_dec;


  virtual antlrcpp::Any visitCompileUnit(MathParser::CompileUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpr(MathParser::UnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncExpr(MathParser::FuncExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(MathParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(MathParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(MathParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExpr(MathParser::NumExprContext *ctx) override {
    return visitChildren(ctx);
  }


private:  

  /* base visitor private declarations/members section */
  std::string parser_mem;

};

