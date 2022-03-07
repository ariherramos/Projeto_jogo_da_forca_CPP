#include "Player.h"
#include "Hangman.h"

Player::Player(string name)
{
    _name = name;
    _wins = 0;
    _times = 0;
}

Player::newGame()
{
    cout <<"NOME DO JOGADOR: "<<_name << endl;
    Player *p;
    Hangman play (p);
    if(play.run())
    {
        _wins++;
    }
    _times++;
}

Player::printStats()
{
    cout <<"NOME DO JOGADOR:  "<<_name << endl;
    cout <<"NUMERO DE PARTIDAS VENCIDAS:  "<<_wins << endl;
    cout <<"NUMERO DE PARTIDAS: "<<_times << endl;
}
