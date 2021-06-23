#ifndef __MONSTERCARD_H__
#define __MONSTERCARD_H__
#include "Card.h"
#include "Monster.h"

class MonsterCard: public Card{
    int blood;
    int attack;
    string type;
    public:
        MonsterCard(fstream &file){
            file >> type >> name >> blood >> attack;
        }
        void showCardInfo() const {
            Card::showCardInfo();
            cout << type <<" " << name << " " << blood << " " << attack << endl;
        }
        void makeEffect(Player*, Player*) const;
        ~MonsterCard() = default;
};
#endif