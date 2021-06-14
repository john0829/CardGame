#include "MagicCard.h"
#include "Player.h"
#include "Monster.h"

void MagicCard::makeEffect(Player* myself, Player* victim)const{
    if(effectName == "ATTACK_MONSTER_2000"){
        doDecreaseSingleMonsterBlood(victim, 2000);
    }else if(effectName == "ATTACK_PlAYER_500"){
        doDecreasePlayerBlood(victim, 500);
    }else if(effectName == "STALL_PlAYER_1"){
        doStallPlayer(victim, 1);
    }else if(effectName == "ATTACK_PlAYER_1000"){
        doDecreasePlayerBlood(victim, 1000);
    }else if(effectName == "MONSTER_DECREASE_2000"){
        doDecreaseAllMonstersBlood(victim, 2000);
    }else if(effectName == "MONSTER_DECREASE_1000"){
        doDecreaseAllMonstersBlood(victim, 1000);
    }else if(effectName == "STALL_PlAYER_2"){
        doStallPlayer(victim, 2);
    }else{
        cerr << "ERROR: Unknown effect ->"<< effectName << endl;
        exit(1);
    }
}

void MagicCard::doDecreaseSingleMonsterBlood(Player* victim, unsigned int attackValue)const{
    if(victim->monsterList.size() != 0){
        vector<Monster*>::iterator it = victim->monsterList.begin();
        bool isDead = decreaseMonsterBlood((*it), attackValue);
        //delete this monster
        deleteDeadMonster()
    }
}

void MagicCard::doDecreaseAllMonstersBlood(Player* victim, unsigned int attackValue)const{
    vector<Monster*>::iterator it;
    for(it=victim->monsterList.begin(); it != victim->monsterList.end();){
        bool isDead = decreaseMonsterBlood((*it), attackValue);
        //delete this monster
        deleteDeadMonster()
    }
}

bool MagicCard::decreaseMonsterBlood(Monster* monster, unsigned int attackValue)const{
    monster->blood -= attackValue;
    cout << "ATTACK MONSTER! Name is:" << monster->name << ", blood:" << (int)(monster->blood+attackValue) << " -> " << monster->blood << endl;
    return monster->blood <= 0;
}

void MagicCard::doDecreasePlayerBlood(Player* victim, unsigned int attackValue)const{
    cout << "Player blood: "<< victim->blood << " -> " << victim->blood-attackValue <<endl;
    victim->blood -= attackValue;
}

void MagicCard::doStallPlayer(Player* victim, unsigned int stallValue)const{
    victim->passCardCount -= stallValue;
}