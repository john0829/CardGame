#include "Monster.h"
#include "Player.h"
#include "MonsterIce.h"
#include "MonsterFire.h"

void MonsterIce::attack(Player* victim){
    vector<Monster*> &monsterList = victim->getMonsterList(); 
    if(monsterList.size() != 0){
        vector<Monster*>::iterator it = monsterList.begin();
        bool isDead;
        if(dynamic_cast<MonsterFire*>(*it)){
            isDead = decreaseMonsterBlood((*it),iceAttackValue*2);
            // cout << "@@@@@@@@@@" << "different type!" << endl;
        }
        else{
            isDead = decreaseMonsterBlood((*it),iceAttackValue);
        }
        //delete this monster
        deleteDeadMonster()
    }
    else{
        cout << "ATTACK PLAYER!" << endl;
        decreasePlayerBlood(victim, iceAttackValue);
    }
}

void MonsterIce::showMonsterInfo() const{
    cout << "Ice " << name << " " << blood << " " << iceAttackValue << endl;
}