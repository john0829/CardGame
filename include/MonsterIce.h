#ifndef __MONSTERICE_H__
#define __MONSTERICE_H__
#include "Monster.h"

class MonsterIce : public virtual Monster{
    public:
        int iceAttackValue;
        void attack(Player*);
        MonsterIce(string _name, int _blood, int _attackValue):Monster(_name,_blood){iceAttackValue = _attackValue;};
        MonsterIce(){};
        MonsterIce(int attackValue){iceAttackValue = attackValue;};
        virtual ~MonsterIce() = default;
        virtual void showMonsterInfo() const;
};

#endif