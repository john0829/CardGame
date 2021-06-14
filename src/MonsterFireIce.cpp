#include "Monster.h"
#include "Player.h"
#include "MonsterFireIce.h"

void MonsterFireIce::attack(Player* victim){
    if(victim->monsterList.size() == 0){
        cout << "ATTACK PLAYER!" << endl;
        decreasePlayerBlood(victim, attackValue);
        return;
    }
    vector<Monster*>::iterator it;
    for(it = victim->monsterList.begin(); it != victim->monsterList.end();){
        bool isDead;
        if(dynamic_cast<MonsterIce*>(*it)){
            isDead = decreaseMonsterBlood((*it),fireAttackValue*2);
            isDead = decreaseMonsterBlood((*it),iceAttackValue);
        }
        else if(dynamic_cast<MonsterFire*>(*it)){
            isDead = decreaseMonsterBlood((*it),fireAttackValue);
            isDead = decreaseMonsterBlood((*it),iceAttackValue*2);
        }
        else{
            isDead = decreaseMonsterBlood((*it),attackValue);
        }
        //delete this monster
        deleteDeadMonster()
    }
}

void MonsterFireIce::showMonsterInfo() const{
    cout << "FireIce " << name << " " << blood << " " << attackValue << endl;
}