#include "Interpreter.h"
#include "Token.h"

Interpreter::Interpreter(string doc) : script(doc)
{
    initQueue();

}

Interpreter::~Interpreter()
{
}

void Interpreter::initQueue()
{
    TokenP tkp = nullptr;
    do
    {
        tkp = get_next_token();
        tokens.push(tkp);
        cout << tkp << endl;
    }while (tkp->type != TokenType::ENDOFFILE);
    tokens.push(tkp);
}

TokenP Interpreter::get_next_token()
{
    TokenP newToken = new Token(TokenType::ENDOFFILE, "\0");
    if (pos > script.length())
    {
        return new Token(TokenType::ENDOFFILE, "\0");
    }
    //Calculetion the entire int and Token for Int
    if (isdigit(script[pos]))
    {
        string current_str;
        current_str.push_back(script[pos]);
        calculateInt(current_str, pos);
        newToken = new Token(TokenType::INTEGER, current_str);
    }
    //Calculate the Token for +
    else if (script[pos] == '+')
    {
        newToken = new Token(TokenType::PLUS, "+");
    }


    //Incremnt the possion of the index for the script
    pos++;
    return newToken;
}

void Interpreter::calculateInt(string& cc, int i_pos)
{
    char nc = script[++i_pos];
    if (isdigit(nc))
    {
        cc.push_back(nc);
        calculateInt(cc, i_pos);
    }
    
}
