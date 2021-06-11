#ifndef __MONSTERFIRE_H__
#define __MONSTERFIRE_H__
#include "Monster.h"

class MonsterFire : public virtual Monster{
    public:
        void attack(Player*);
        MonsterFire(string _name, int _blood, int _attackValue):Monster(_name,_blood,_attackValue){};
        MonsterFire(){};
        virtual ~MonsterFire() = default;
        virtual void showMonsterInfo() const;
};

#endif