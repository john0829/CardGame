#ifndef __MONSTERICE_H__
#define __MONSTERICE_H__
#include "Monster.h"

class MonsterIce : public virtual Monster{
    public:
        void attack(Player*);
        MonsterIce(string _name, int _blood, int _attackValue):Monster(_name,_blood,_attackValue){};
        MonsterIce(){};
        virtual ~MonsterIce() = default;
};

#endif