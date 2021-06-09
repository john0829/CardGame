#include "Player.h"
#include "CardFactory.h"
#include <vector>

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
            public:
                Round(Player*, Player*, CardFactory*);
        };

        vector<Round*> roundList;
        Player* player1;
        Player* player2;
        CardFactory *cardFactory;
        int roundCount;

};