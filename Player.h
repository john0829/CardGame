#include "Card.h"
#include "Monster.h"
#include "Config.h"
class Player{
    private:
        Card* cardList;
        Monster* monsterList;
        int blood;
    public:
        Player():monsterList(nullptr), cardList(nullptr), blood(BLOOD_PLAYER){
            cout << blood << endl;
        }


};