#ifndef __MAGICCARD_H__
#define __MAGICCARD_H__
#include "Card.h"

class MagicCard : public Card{
    string effectName;
    public:
        MagicCard(fstream &file){
            file >> name >> effectName;
        }
        void showCardInfo() const {
            Card::showCardInfo();
            cout << name << " " << effectName << endl;
        }

        void makeEffect(Player* myself, Player* victim) const{

        }
};
#endif