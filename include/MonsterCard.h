#ifndef __MONSTERCARD_H__
#define __MONSTERCARD_H__
class MonsterCard: public Card{
    int blood;
    int attack;
    public:
        MonsterCard(fstream &file){
            file >> name >> blood >> attack;
        }
};
#endif