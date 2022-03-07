#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player
{
    private:
        string _name;
        int _wins;
        int _times;

    public:
        Player(string name);
        newGame();
        printStats();
};

#endif // PLAYER_H
