#include "MagicCard.h"
#include "Player.h"

void MagicCard::makeEffect(Player* myself, Player* victim) const{
    if(effectName == "ATTACK_MONSTER_700"){
        victim->decreaseAllMonstersBlood(700);
    }else if(effectName == "ATTACK_PlAYER_500"){
        victim->decreaseBlood(500);
    }else if(effectName == "STALL_PlAYER_1"){
        victim->stall(1);
    }else if(effectName == "ATTACK_PlAYER_300"){
        victim->decreaseBlood(300);
    }else if(effectName == "MONSTER_DECREASE_2000"){
        victim->decreaseAllMonstersBlood(2000);
    }else if(effectName == "MONSTER_DECREASE_1000"){
        victim->decreaseAllMonstersBlood(1000);
    }else if(effectName == "STALL_PlAYER_2"){
        victim->stall(2);
    }else{
        cout << "ERROR: Unknown effect ->"<< effectName << endl;
        exit(1);
    }
}