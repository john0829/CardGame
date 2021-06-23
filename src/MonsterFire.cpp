#include "Player.h"
#include "MonsterIce.h"
#include "MonsterFire.h"

void MonsterFire::attack(Player* victim){
    vector<Monster*> &monsterList = victim->getMonsterList(); 
    if(monsterList.size() != 0){
        vector<Monster*>::iterator it = monsterList.begin();
        bool isDead;
        if(dynamic_cast<MonsterIce*>(*it)){
            isDead = decreaseMonsterBlood((*it),fireAttackValue*2);
            // cout << "@@@@@@@@@@" << "different type!" << endl;
        }
        else{
            isDead = decreaseMonsterBlood((*it),fireAttackValue);
        }
        //delete this monster
        deleteDeadMonster()
    }
    else{
        cout << "ATTACK PLAYER!" << endl;
        decreasePlayerBlood(victim, fireAttackValue);
    }
}

void MonsterFire::showMonsterInfo() const{
    cout << "Fire " << name << " " << blood << " " << fireAttackValue << endl;
}