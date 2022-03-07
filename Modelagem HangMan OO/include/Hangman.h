#ifndef HANGMAN_H
#define HANGMAN_H

#include <iostream>
#include <vector>
#include <string.h>

#include "Player.h"
#include "Dicitionary.h"
#include "Word.h"

class Hangman
{
    private:
        int _error;
        vector<char> _wrong_tries;
        Player *_player;
        Word * word;
        Dicitionary _dicitionary;

    public:
        Hangman(Player *player);
        bool run();
};

#endif // HANGMAN_H
