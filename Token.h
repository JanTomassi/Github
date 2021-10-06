#ifndef _INC_TOKEN_P
#define _INC_TOKEN_P

#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

enum class TokenType {INTEGER, PLUS, ENDOFFILE};

class Token
{
private:
    string value;
public:
    Token(TokenType t, string s);
    ~Token();
    TokenType type;
    
    friend ostream& operator<<(ostream& os, const Token& t);
    string to_string(const Token& t);
};typedef Token* TokenP;

#endif