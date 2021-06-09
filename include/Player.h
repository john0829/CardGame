#ifndef __PLATER_H__
#define __PLATER_H__

#include "Card.h"
#include "Monster.h"
#include "MonsterCard.h"
#include "MagicCard.h"
#include "Config.h"
#include <fstream>
#include <vector>
class Player{
    private:
        vector<const Card*> cardList;
        vector<const Monster*> monsterList;
        vector<int> playCardSequenceList;
        int blood;
        int cardCountOnHand;
        //if == 1, player can pass the card, else, player is stalled 
        int passCardCount; 
        friend class Rounds;
        friend class Round;
    public:
        Player(string);
        ~Player();
        void ListCard();
        void getOneCard(const Card*);
        void readPlayCardSequence(string);
        void playCard();
};

#endif