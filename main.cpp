#include <iostream>
#include "Interpreter.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Interpreter * interpreter = new Interpreter("32+2");

    cout << interpreter->tokens.size() << endl;

    while (!interpreter->tokens.empty())
    {
        cout << *(interpreter->tokens.front()) << endl;
        interpreter->tokens.pop();
    }
    

    return 0;
}
