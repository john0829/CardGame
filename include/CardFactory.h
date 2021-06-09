#ifndef __CARDFACTORY__
#define __CARDFACTORY__

#include "Card.h"
#include "MonsterCard.h"
#include "MagicCard.h"

class CardFactory{
    fstream file;
    int cardCount;
    public:
        CardFactory(string);
        Card* generateCard();
        ~CardFactory();

        operator bool() const{
            return (bool)file;
        }
};

#endif