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

lexer grammar MathLexer;

@lexer::header {
  /* This is a test for lexer::header */
}

@lexer::postinclude {
#include <string>
#include <vector>
}

@lexer::declarations {
  public:
    std::string public_mem;
  private:
    int private_mem;
}

@lexer::context {
  class MyString {
    public:
      MyString(std::string str);
      virtual ~MyString();

      void ShowString();
    private:
      std::string value_;
  };
}

@lexer::definitions {
  MyString::MyString(std::string str) : value_(str) {}
  MyString::~MyString() {}
  void MyString::ShowString() { std::cout << "String is " << value_ << std::endl; }
}

ADD : '+';
SUB : '-';
MUL : '*';
DIV : '/';
LEFT_PAREN : '(' ;
RIGHT_PAREN : ')' ;
COMMA : ',' ;

ID  : [a-zA-Z]+ ;
NUM : [0-9]+ ('.' [0-9]+)? ([eE] [+-]? [0-9]+)? ;
WS  : [ \t\r\n] -> channel(HIDDEN) ;
