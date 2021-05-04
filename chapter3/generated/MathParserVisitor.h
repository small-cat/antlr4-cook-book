
// Generated from MathParser.g4 by ANTLR 4.7.1

#pragma once

 
  /* visitor pre include section */ 
#include <string>


#include "antlr4-runtime.h"
#include "MathParser.h"


  /* visitor post include section */
#include <string>



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MathParser.
 */
class  MathParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

    /* visitor public declarations/members section */
    std::string parser_visitor_dec;


  /**
   * Visit parse trees produced by MathParser.
   */
    virtual antlrcpp::Any visitCompileUnit(MathParser::CompileUnitContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpr(MathParser::UnaryExprContext *context) = 0;

    virtual antlrcpp::Any visitFuncExpr(MathParser::FuncExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(MathParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(MathParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(MathParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitNumExpr(MathParser::NumExprContext *context) = 0;


private:  

  /* visitor private declarations/members section */
  std::string parser_visitor_mem;

};

