#include <string.h>
#include <iostream>

#ifndef _INC_TOKEN_P
#define _INC_TOKEN_P

using namespace std;

enum class TokenType {INTEGER, PLUS};

class Token
{
private:
    int value;
    TokenType type;
public:
    Token(TokenType t, string s);
    ~Token();

    friend ostream& operator<<(ostream& os, const Token& t);
};

ostream& operator<<(ostream& os, const Token& t)
{
    os << "Value: " << t.value;
    return os;
}

Token::Token(TokenType t, string s)
{
    type = TokenType::INTEGER;
    value = 5;
}

Token::~Token()
{
}

#endif