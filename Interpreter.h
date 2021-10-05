#include "Token.h"

#ifndef _INC_INTERPRETER_P
#define _INC_INTERPRETER_P

#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <queue>

using namespace std;

class Interpreter
{
private:
    string document;
    queue<TokenP> tokens;
    unsigned long pos = 0;
    TokenP current_token = nullptr;

    //crea un Token avendo il documento in ingresso
    TokenP get_next_token();
    TokenP init_queue();
    //Funzione per calolare Token per interi più grandi di una cifra
    void calculateInt(string& cc, int i_pos);
public:
    Interpreter(string doc);
    ~Interpreter();
    exception readFileExeption() {
        throw out_of_range("Invalide operetion in Interpreter");
    }
};

#endif