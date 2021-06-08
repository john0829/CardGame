#include "Card.h"
#include "MonsterCard.h"
#include "MagicCard.h"

class CardFactory{
    public:
        CardFactory(){
        }
        static Card* generateCard(fstream &file, string type){
            if(type== "monster"){
                string property;
                file >> property;
                MonsterCard* card = new MonsterCard(file);
                return card;
            }
            else{
                MagicCard* card = new MagicCard(file);
                return card;
            }
        }
};