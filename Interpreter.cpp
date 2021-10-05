#include "Interpreter.h"

Interpreter::Interpreter(string doc) : document(doc)
{
    get_next_token();
}

Interpreter::~Interpreter()
{

}

TokenP Interpreter::get_next_token()
{
    TokenP newToken = nullptr;
    if (pos > document.length())
    {
        return new Token(TokenType::ENDOFFILE, nullptr);
    }
    //calculetion the entire int
    if (isdigit(document[pos]))
    {
        string current_str;
        current_str.push_back(document[pos]);
        calculateInt(current_str, pos);
        cout << current_str << endl;
        newToken = new Token(TokenType::INTEGER, current_str);
    }
    
}

void Interpreter::calculateInt(string& cc, int i_pos)
{
    char nc = document[++i_pos];
    if (isdigit(nc))
    {
        cc.push_back(nc);
        calculateInt(cc, i_pos);
    }
    
}
