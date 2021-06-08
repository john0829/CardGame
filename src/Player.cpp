#include "Player.h"
#include "CardFactory.h"

Player::Player(string sourceFilePath):blood(BLOOD_PLAYER), cardCount(0){
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
    int count = 0;
    while(file >> type){
        Card* card = CardFactory::generateCard(file, type);
        cardList.push_back(card);
    }
}

Player::~Player(){
    for(auto &p:cardList){
        cout << p->name << endl;
        delete p;
    }
    for(auto &p:monsterList){
        delete p;
    }
}