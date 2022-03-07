#include "Hangman.h"

Hangman::Hangman(Player *player)
{
    _error= 0;
    _player= player;
}

bool Hangman::run()
{
    int tam,i;
    char a;
    word=_dicitionary.selectWord();
    cout <<"DICA:"<< endl;
    cout <<word->hint()<< endl;
    cout <<"NUMERO DE LETRAS:"<< word->sizeWord()<<endl;

    while((word->str()!= word->visible())&&(_error!=6))
    {
        if(_error)
        {
            cout <<"LETRAS ERRADAS:"<<endl;
            for(i=0;i<_error;i++)
            {
               cout <<_wrong_tries[i];
            }
            cout <<endl;
        }
        cout <<word->visible()<<endl;
        cout <<"DIGITE UMA LETRA:"<<endl;
        cin  >> a;
        if(word->hasLetter(a))
        {
            cout <<"LETRA ENCONTRADA"<<endl;

        }else
        {
            cout <<"LETRA NAO ENCONTRADA"<<endl;
            _wrong_tries.push_back(a);
            _error++;
        }
        cout <<"NUMERO DE TENTATIVAS PARA ERROS:" << _error<<" DE 6"<<endl;
        cout <<"________________________________________________" <<"\n"<<endl;
    }
    if(_error==6)
    {
        return false;
    }else
    {
        return true;
    }
}


