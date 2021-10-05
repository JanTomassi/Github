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
    TokenType type;
public:
    Token(TokenType t, string s);
    ~Token();
    
    friend ostream& operator<<(ostream& os, const Token& t);
    string to_string(const Token& t);
};
typedef Token* TokenP;

ostream& operator<<(ostream& os, const Token& t)
{
    os << "Type: " << (int)t.type << "\n"
        << "Value: " << t.value;
    return os;
}
string Token::to_string(const Token& t)
{
    ostringstream ss;
    ss << "Type: " << (int)t.type << "\n"
        << "Value: " << t.value;
    return ss.str();
}

Token::Token(TokenType t, string s)
{
    type = t;
    value = s;
}

Token::~Token()
{
}

#endif