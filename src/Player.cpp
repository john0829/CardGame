#include "Player.h"
#include "CardFactory.h"

Player::Player(string sourceFilePath):blood(BLOOD_PLAYER),passCardCount(0){
    CardFactory *cardFactory = new CardFactory(sourceFilePath);
    while(*cardFactory){
        const Card* card = cardFactory->generateCard();
        cardList.push_back(card);
    }
    delete cardFactory;
}

void Player::getOneCard(const Card* newCard){
    cardList.push_back(newCard);
    cout << "xxx" << newCard->name << endl;
}

void Player::ListCard(){
    for(auto &p:cardList){
        cout << p->name << endl;
    }
}

Player::~Player(){
    for(auto &p:cardList){
        delete p;
    }
    for(auto &p:monsterList){
        delete p;
    }
}

void Player::readPlayCardSequence(string sourceFilePath){
    fstream file;
    file.open(sourceFilePath, ios::in);
    if(!file){
        cout << "file path is not found." << endl;
        exit(1);
    }
    int num;
    while(file){
        file >> num;
        playCardSequenceList.push_back(num);
    }
    file.close();
}

void Player::playCard(){
    int popCardID = *playCardSequenceList.begin();
    cout<< popCardID << endl;
    const Card* card = cardList[popCardID];

    // card->showCardInfo();

    //clean
    playCardSequenceList.erase(playCardSequenceList.begin());
    cardList.erase(cardList.begin()+popCardID);
    delete card;
}