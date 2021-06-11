#include "Monster.h"
#include "Player.h"

void Monster::attack(Player* victim){
    if(victim->monsterList.size() != 0){
        vector<Monster*>::iterator it = victim->monsterList.begin();
        bool isDead;
        isDead = decreaseMonsterBlood((*it),attackValue);
        //delete this monster
        deleteDeadMonster()
    }
    else{
        cout << "ATTACK PLAYER!" << endl;
        decreasePlayerBlood(victim, attackValue);
    }
}

void Monster::decreasePlayerBlood(Player* victim, unsigned int attackValue){
    cout << "blood: "<< victim->blood << " -> " << (int)(victim->blood-attackValue) <<endl;
    victim->blood -= attackValue;
}

bool Monster::decreaseMonsterBlood(Monster* monster, unsigned int attackValue) {
    monster->blood -= attackValue;
    cout << "ATTACK MONSTER! Name is:" << monster->name << ", blood:" << (int)(monster->blood+attackValue) << " -> " << monster->blood << endl;
    return monster->blood <= 0;
}