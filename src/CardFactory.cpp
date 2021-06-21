#include "CardFactory.h"

CardFactory::CardFactory(string sourceFilePath){
    string line;
    file.open(sourceFilePath, ios::in);
    file >> cardCount;
    getline(file, line);
    if(!file){
        cout << "file path is not found." << endl;
        exit(1);
    }
}

CardFactory::~CardFactory(){
    file.close();
}

Card* CardFactory::generateCard(){
    string type;
    file >> type;
    if(type== "monster"){
        MonsterCard* card = new MonsterCard(file);
        return card;
    }
    else if(!type.empty()){
        MagicCard* card = new MagicCard(file);
        return card;
    }
    return nullptr;
}

