#include <iostream>
#include "Interpreter.h"
#include "Token.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Interpreter * interpreter = new Interpreter();
    Token token = new Token(TokenType::INTEGER, "5");

    cout << *token << endl;

    delete token;
    delete interpreter;
    return 0;
}
