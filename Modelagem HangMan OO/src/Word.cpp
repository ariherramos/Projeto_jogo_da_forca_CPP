#include "Word.h"
Word::Word(string word, string hint, string visible)
{
 	_word = word;
	_hint = hint;
    _visible= visible;
}
bool Word::hasLetter (char a)
{
    int lo=0;
    int tam=0;
    int i=0;

    lo= _word.find(a);
    _visible[lo]=a;

    while(lo!=(-1))
    {
        i=1;
        lo= _word.find(a, lo+1);
        _visible[lo]=a;
    }
    if(i==1)
    {
        return true;
    }else
    {
        return false;
    }
}

string Word::str()
{
    return _word;
}
string Word::hint ()
{
    return _hint;
}
string Word::visible ()
{
    return _visible;
}
int Word::sizeWord ()
{
    return _word.size();
}
Word::print()
{
    cout <<_word<< endl;
    cout <<_hint<< endl;
    cout <<_visible<< endl;
}

