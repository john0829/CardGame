#include "Monster.h"
#include "Player.h"
#include "MonsterFireIce.h"

void MonsterFireIce::attack(Player* victim){
    vector<Monster*>::iterator it;
    for(it = victim->monsterList.begin(); it != victim->monsterList.end();){
        bool isDead;
        if(dynamic_cast<MonsterIce*>(*it)){
            isDead = (*it)->decreaseBlood(fireAttackValue*2);
            isDead = (*it)->decreaseBlood(iceAttackValue);
            // cout << "####monsterFireIce attack" << "different type!" << endl;
        }
        else if(dynamic_cast<MonsterFire*>(*it)){
            isDead = (*it)->decreaseBlood(fireAttackValue);
            isDead = (*it)->decreaseBlood(iceAttackValue*2);
            // cout << "####monsterFireIce attack" << "different type!" << endl;
        }
        else{
            // cout << "####monsterFireIce attack" << "the same type!" << endl;
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