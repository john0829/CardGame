#include "Card.h"
#include "Monster.h"
#include "MonsterCard.h"
#include "MagicCard.h"
#include "Config.h"
#include <fstream>
class Player{
    private:
        Card* cardList;
        Monster* monsterList;
        int blood;
        int cardCount;
    public:
        Player(string);

};