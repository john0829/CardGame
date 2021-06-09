#include "MonsterCard.h"
#include "Player.h"
void MonsterCard::makeEffect(Player* myself, Player* victim)const{
    Monster* monster = new Monster(name, blood, attack);
    myself->addMonster(monster);
}