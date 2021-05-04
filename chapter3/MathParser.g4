/*
MIT License

Copyright (c) 2021 Zhenyu Wu

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

parser grammar MathParser;

options {
  tokenVocab=MathLexer;
}

@parser::members {
  std::string filename;
}

// for listener
@parser::listenerpreinclude { 
  /* listener pre include section */ 
#include <string>
}
@parser::listenerpostinclude {
  /* listener post include section */
#include <string>
}
@parser::listenerdeclarations {
  /* listener public declarations/members section */
  std::string parser_listener_dec;
}
@parser::listenermembers {
  /* listener private declarations/members section */
  std::string parser_listener_mem;
}
@parser::listenerdefinitions {
  /* listener definitions section */
  void ShowListener() { std::cout << "Listener" << std::endl; }
}

// for visitor
@parser::visitorpreinclude { 
  /* visitor pre include section */ 
#include <string>
}
@parser::visitorpostinclude {
  /* visitor post include section */
#include <string>
}
@parser::visitordeclarations {
  /* visitor public declarations/members section */
  std::string parser_visitor_dec;
}
@parser::visitormembers {
  /* visitor private declarations/members section */
  std::string parser_visitor_mem;
}
@parser::visitordefinitions {
  /* visitor definitions section */
  void ShowVisitor() { std::cout << "visitor" << std::endl; }
}

@parser::baselistenerpreinclude { 
  /* base listener pre include section */ 
#include <string>
}
@parser::baselistenerpostinclude {
  /* baselistener post include section */
#include <string>
}
@parser::baselistenerdeclarations {
  /* base listener public declarations/members section */
  std::string parser_base_listener_dec;
}
@parser::baselistenermembers {
  /* base listener private declarations/members section */
  std::string parser_base_listener_mem;
}
@parser::baselistenerdefinitions {
  /* baselistener definitions section */
  void ShowBaseListener() { std::cout << "BaseListner" << std::endl; }
}

@parser::basevisitorpreinclude { 
  /* base visitor pre include section */ 
#include <string>
}
@parser::basevisitorpostinclude {
  /* base visitor post include section */
#include <string>
}
@parser::basevisitordeclarations {
  /* base visitor public declarations/members section */
  std::string parser_dec;
}
@parser::basevisitormembers {
  /* base visitor private declarations/members section */
  std::string parser_mem;
}
@parser::basevisitordefinitions {
  /* base visitor definitions section */
  void ShowBaseVisitor() { std::cout << "BaseVisitor" << std::endl; }
}

compileUnit
    : expr EOF
    ;

expr
    : LEFT_PAREN expr RIGHT_PAREN                          # parenExpr
    | op=(ADD | SUB) expr                   # unaryExpr
    | left=expr op=(MUL | DIV) right=expr   # mulDivExpr
    | left=expr op=(ADD | SUB) right=expr   # addSubExpr
    | func=ID LEFT_PAREN expr (COMMA expr)? RIGHT_PAREN      # funcExpr
    | NUM                                   # numExpr
    ;
