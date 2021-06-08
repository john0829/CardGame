#include "Card.h"
#include "Config.h"
class MagicCard : public Card{
    string effectName;
    public:
        MagicCard(fstream &file){
            file >> name >> effectName;
            cout << name << endl;
            cout << effectName << endl;
        }
};