#ifndef __MONSTERFIREICE_H__
#define __MONSTERFIREICE_H__
#include "MonsterFire.h"
#include "MonsterIce.h"
#include "Monster.h"

class MonsterFireIce : public MonsterFire, public MonsterIce{
    public:
        virtual void attack(Player*);
        MonsterFireIce(string _name, int _blood, int _attackValue):Monster(_name,_blood), MonsterIce(_attackValue*0.8), MonsterFire(_attackValue*0.2){};
        virtual ~MonsterFireIce() = default;
        virtual void showMonsterInfo() const;
};

#endif