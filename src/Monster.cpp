#include "Monster.h"
#include "Player.h"

void Monster::attack(Player* victim){
    vector<Monster*> &monsterList = victim->getMonsterList(); 
    if(monsterList.size() != 0){
        vector<Monster*>::iterator it = monsterList.begin();
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
    cout << "Player blood: "<< victim->getBlood() << " -> " << (int)(victim->getBlood()-attackValue) <<endl;
    victim->setBlood(victim->getBlood() - attackValue);
}

bool Monster::decreaseMonsterBlood(Monster* monster, unsigned int attackValue) {
    monster->blood -= attackValue;
    cout << "ATTACK MONSTER! Name is:" << monster->name << ", blood:" << (int)(monster->blood+attackValue) << " -> " << monster->blood << endl;
    return monster->blood <= 0;
}