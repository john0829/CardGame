#ifndef __MONSTERCARD_H__
#define __MONSTERCARD_H__
#include "Card.h"
#include "Monster.h"

class MonsterCard: public Card{
    int blood;
    int attack;
    public:
        MonsterCard(fstream &file){
            file >> name >> blood >> attack;
        }
        void showCardInfo() const {
            Card::showCardInfo();
            cout << name << " " << blood << " " << attack << endl;
        }

        void makeEffect(Player*, Player*) const;
};
#endif