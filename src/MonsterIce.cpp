#include "Monster.h"
#include "Player.h"
#include "MonsterIce.h"
#include "MonsterFire.h"

void MonsterIce::attack(Player* victim){
    if(victim->monsterList.size() != 0){
        vector<Monster*>::iterator it = victim->monsterList.begin();
        bool isDead;
        if(dynamic_cast<MonsterFire*>(*it)){
            isDead = decreaseMonsterBlood((*it),attackValue*2);
            // cout << "@@@@@@@@@@" << "different type!" << endl;
        }
        else{
            isDead = decreaseMonsterBlood((*it),attackValue);
        }
        //delete this monster
        deleteDeadMonster()
    }
    else{
        cout << "ATTACK PLAYER!" << endl;
        decreasePlayerBlood(victim, attackValue);
    }
}

void MonsterIce::showMonsterInfo() const{
    cout << "Ice " << name << " " << blood << " " << attackValue << endl;
}