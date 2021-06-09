#ifndef __MONSTER_H__
#define __MONSTER_H__

#include "Config.h"
class Player;

class Monster{
    string name;
    int blood;
    int attackValue;
    friend class Player;
    public:
        Monster(string _name, int _blood, int _attackValue):name(_name), blood(_blood), attackValue(_attackValue){
        };

        void showMonsterInfo() const{
            cout << name << " " << blood << " " << attackValue << endl;
        }

        bool decreaseBlood(int number) {
            blood -= number;
            return blood <= 0;
        }

        void attack(Player*);
};

#endif