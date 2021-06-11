#ifndef __MONSTERFIREICE_H__
#define __MONSTERFIREICE_H__
#include "MonsterFire.h"
#include "MonsterIce.h"
#include "Monster.h"

class MonsterFireIce : public MonsterFire, public MonsterIce{
    int fireAttackValue;
    int iceAttackValue;
    public:
        virtual void attack(Player*);
        MonsterFireIce(string _name, int _blood, int _attackValue):Monster(_name,_blood,_attackValue){
            fireAttackValue = _attackValue*0.2;        
            iceAttackValue = _attackValue*0.8;        
        };
        virtual ~MonsterFireIce() = default;
};

#endif