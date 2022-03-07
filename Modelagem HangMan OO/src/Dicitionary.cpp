#include "Dicitionary.h"
#include "Word.h"

Dicitionary::Dicitionary()
{
    // push_back to add a new element to the vector
    _listW.push_back (new Word("banana","Fruta amarela","******"));
    _listW.push_back (new Word("laranja","Fruta laranja","*******"));
    _listW.push_back (new Word("melancia","Fruta verde e vermelha por dentro","********"));
    _listW.push_back (new Word("uva","Fruta roxa ou verde","***"));
    _listW.push_back (new Word("maca","Fruta vermelha ou verde","****"));
    _listW.push_back (new Word("morango","Fruta vermelha","*******"));
}

Word* Dicitionary::selectWord()
{
	int sel;
	srand(time(NULL)); //Gera a Semente
    sel = rand() % _listW.size(); // Randomico div pelo tamanho máx da lista
    return _listW[sel]; //retorna o ponteiro do index sorteado;
}

