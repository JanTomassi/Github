#include "Token.h"

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