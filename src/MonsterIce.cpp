#include "Monster.h"
#include "Player.h"
#include "MonsterIce.h"
#include "MonsterFire.h"

void MonsterIce::attack(Player* victim){
    vector<Monster*>::iterator it;
    for(it = victim->monsterList.begin(); it != victim->monsterList.end();){
        bool isDead;
        if(dynamic_cast<MonsterFire*>(*it)){
            isDead = (*it)->decreaseBlood(attackValue*2);
            // cout << "@@@@@@@@@@" << "different type!" << endl;
        }
        else{
            isDead = (*it)->decreaseBlood(attackValue);
        }
        //delete this monster
        deleteDeadMonster()
    }
    if(it == victim->monsterList.end()){
        cout << "ATTACK PLAYER!" << endl;
        victim->decreaseBlood(attackValue);
    }
}