#ifndef __MONSTER_H__
#define __MONSTER_H__

#include "Config.h"
class Monster{
    string name;
    int blood;
    int attack;
    public:
        Monster(string _name, int _blood, int _attack):name(_name), blood(_blood), attack(_attack){
        };

        void showMonsterInfo() const{
            cout << name << " " << blood << " " << attack << endl;
        }

    
};

#endif