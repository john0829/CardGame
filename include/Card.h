#ifndef __CARD_H__
#define __CARD_H__
#include "Config.h"
class Player;

class Card{
    public:
        string name;
        virtual void showCardInfo() const{ 
            cout << "Card name info:" << " ";
        };

        virtual void makeEffect(Player*, Player*)const{
        };

        virtual ~Card() = default;
    
};

#endif