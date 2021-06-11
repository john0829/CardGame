#include "Monster.h"
#include "Player.h"

void Monster::attack(Player* victim){
    vector<Monster*>::iterator it;
    for(it = victim->monsterList.begin(); it != victim->monsterList.end();){
        bool isDead = (*it)->decreaseBlood(attackValue);
        //delete this monster
        deleteDeadMonster()
    }
    if(it == victim->monsterList.end()){
        cout << "ATTACK PLAYER!" << endl;
        victim->decreaseBlood(attackValue);
    }
}
