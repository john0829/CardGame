#include "MonsterCard.h"
#include "Player.h"
#include "MonsterFire.h"
#include "MonsterIce.h"
#include "MonsterFireIce.h"
void MonsterCard::makeEffect(Player* myself, Player* victim)const{
    Monster* monster = nullptr;
    if(type == "Fire"){
        monster = (new MonsterFire(name, blood, attack));
    }else if(type == "Ice"){
        monster = (new MonsterIce(name, blood, attack));
    }else if(type == "FireIce"){
        monster = (new MonsterFireIce(name, blood, attack));
    }else{
        cerr << "Monster type error in the MonsterCard" << endl;
        exit(1);
    }
    if(monster)[[likely]]{
        myself->addMonster(monster);
    }
}