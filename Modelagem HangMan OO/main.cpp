#include <iostream>
#include <string>

using namespace std;

#include "Player.h"

int main()
{
    char i= 'n';
    string _jogador;
    cout <<"DIGITE O NOME DO JOGADOR:"<<endl;
    cin>>_jogador;
    // allocates and constructs one object:
    Player *ptr = new Player (_jogador);
    while(i!='s')
    {
        ptr->newGame();
        ptr->printStats();
        cout <<"SAIR[s/n]:"<<endl;
        cin>>i;
        cout <<"________________________________________________" <<"\n"<<endl;
    }

    return 0;
}
