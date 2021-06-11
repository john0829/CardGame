#ifndef __MONSTER_H__
#define __MONSTER_H__

#include "Config.h"
#define deleteDeadMonster() \
if(isDead){ \
    cout << "DEAD:" << (*it)->name << endl; \
    delete (*it); \
    victim->monsterList.erase(it); \
} \
else{ \
    ++it; \
}

class Player;

class Monster{
    public:
        string name;
        int blood;
        int attackValue;
        friend class Player;
        friend class MagicCard;
        Monster(string _name, int _blood, int _attackValue):name(_name), blood(_blood), attackValue(_attackValue){};
        Monster(){};
        virtual void showMonsterInfo() const{
            cout << name << " " << blood << " " << attackValue << endl;
        }
        bool decreaseMonsterBlood(Monster*, unsigned int);
        void decreasePlayerBlood(Player*, unsigned int);
        void showAttackInfo(Monster*, unsigned int);
        virtual void attack(Player*);
        virtual ~Monster() = default;
};

#endif