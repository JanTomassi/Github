#include <iostream>
#include "Interpreter.h"
//#include "Token.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Interpreter * interpreter = new Interpreter("32+2");
    //TokenP token = new Token(TokenType::INTEGER, "5");
    return 0;
}
