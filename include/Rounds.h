#ifndef __ROUNDS_H__
#define __ROUNDS_H__

#include "Player.h"
#include "CardFactory.h"

class Rounds{
    public:
        Rounds(Player *, Player *, string);
        ~Rounds();
        void start();
        friend class Round;
    private:
        class Round{
            Player* player1; 
            Player* player2; 
            CardFactory *cardFactory;
            void showPlayersMonster() const;
            public:
                Round(Player*, Player*, CardFactory*);
                string start();
        };

        vector<Round*> roundList;
        Player* player1;
        Player* player2;
        CardFactory *cardFactory;
        int roundCount;
        string winnerName;
};

#endif