#ifndef WORD_H
#define WORD_H

#include <iostream>

#include <string>
using namespace std;

class Word
{
    private:

        string _word;
        string _hint;
        string _visible;

    public:
        Word(string word, string hint, string visible);
        bool hasLetter (char a);
        int missing ();
        string str();
        string hint ();
        string visible ();
        int sizeWord ();
        print();
};

#endif // WORD_H
