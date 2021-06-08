#include "Card.h"
#include "Monster.h"
#include "MonsterCard.h"
#include "MagicCard.h"
#include "Config.h"
#include <fstream>
#include <vector>
class Player{
    private:
        vector<Card*> cardList;
        vector<Monster*> monsterList;
        int blood;
        int cardCount;
    public:
        Player(string);
        ~Player();

};