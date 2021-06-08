#ifndef __MAGICCARD_H__
#define __MAGICCARD_H__
#include "Card.h"
#include "Config.h"
class MagicCard : public Card{
    string effectName;
    public:
        MagicCard(fstream &file){
            file >> name >> effectName;
        }
};
#endif