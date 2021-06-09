#ifndef __PLATER_H__
#define __PLATER_H__

#include "Card.h"
#include "Config.h"
#include "Monster.h"

class Player{
    private:
        vector<const Card*> cardList;
        vector<const Monster*> monsterList;
        vector<int> playCardSequenceList;
        int blood;
        int cardCountOnHand;
        //if == 1, player can pass the card, else, player is stalled 
        int passCardCount; 
        const string playerName;
        friend class Rounds;
        friend class Round;
    public:
        Player(string, string);
        ~Player();
        void ListCard() const;
        void getOneCard(const Card*);
        void readPlayCardSequence(string);
        const Card* playCard();
        void showMonsters() const;
        void addMonster(Monster*);
        void attack(const Card*, Player*);
};

#endif