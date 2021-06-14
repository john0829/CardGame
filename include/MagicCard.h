#ifndef __MAGICCARD_H__
#define __MAGICCARD_H__
#include "Card.h"
class Monster;
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
        void makeEffect(Player*, Player*)const;
        void doDecreaseSingleMonsterBlood(Player*, unsigned int)const;
        void doDecreaseAllMonstersBlood(Player*, unsigned int)const;
        void doDecreasePlayerBlood(Player*, unsigned int)const;
        void doStallPlayer(Player*, unsigned int)const;
        bool decreaseMonsterBlood(Monster*, unsigned int)const;
        ~MagicCard() = default;

};
#endif