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
        Player(string sourceFilePath):monsterList(nullptr), cardList(nullptr), blood(BLOOD_PLAYER), cardCount(0){
            cout << blood << endl;
            fstream file;
            string line;
            file.open(sourceFilePath, ios::in);
            file >> cardCount;
            file >> line;
            if(!file){
                cout << "file path is not found." << endl;
                exit(1);
            }

            string type;
            while(file >> type){
                if(type== "monster"){
                    string property;
                    file >> property;
                    MonsterCard* monster = new MonsterCard(file);
                }
                else{
                    MagicCard* magic = new MagicCard(file);
                }
            }
        }



};