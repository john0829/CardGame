#include "Rounds.h"

Rounds::Rounds(Player *p1, Player *p2, string sourceFilePath):player1(p1), player2(p2), cardFactory(nullptr){
    cardFactory = new CardFactory(sourceFilePath);
}

void Rounds::start(){
    while(1){
        cout << "============" << endl;
        cout << "ROUND" << roundCount << ": ";
        Round* r = new Round(player1, player2, cardFactory);
        roundList.push_back(r);
        roundCount++;
        if(roundCount > 10){
            break;
        }
    }
}

Rounds::~Rounds(){
    for(auto &p:roundList){
        delete p;
    }
    delete cardFactory;
}

Rounds::Round::Round(Player* p1, Player* p2, CardFactory* cf):player1(p1), player2(p2), cardFactory(cf){
    Player *tmp = nullptr;
    Player *victim = nullptr;
    while (player1->passCardCount <= 0 && player2->passCardCount <= 0){
        player1->passCardCount++;
        player2->passCardCount++;
    }
    if(player1->passCardCount){
        cout << "player1 round " << endl;
        tmp = player1;
        victim = player2;
    }
    else if(player2->passCardCount){
        cout << "player2 round " << endl;
        tmp = player2;
        victim = player1;
    }

    tmp->passCardCount--;
    const Card* card = tmp->playCard();
    card->showCardInfo();
    tmp->attack(card, victim);


    //give player a card
    tmp->getOneCard(cardFactory->generateCard());

    showPlayersMonster();
}

void Rounds::Round::showPlayersMonster() const {
    player1->showMonsters();
    player2->showMonsters();
}