#ifndef DICITIONARY_H
#define DICITIONARY_H

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "time.h"


#include "Word.h"

class Dicitionary
{
    private:
        vector<Word*> _listW;

    public:
        Dicitionary();
        Word* selectWord();
};

#endif // DICITIONARY_H
