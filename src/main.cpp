#include <iostream>
#include "Player.h"
#include "CardFactory.h"
#include "Rounds.h"
#include "Config.h"

int main(){
    Player* p1 = new Player("./input/p1.txt");
    Player* p2 = new Player("./input/p2.txt");

    p1->readPlayCardSequence("./input/seq1.txt");
    p2->readPlayCardSequence("./input/seq2.txt");

    Rounds *rounds = new Rounds(p1, p2, "./input/cards.txt");
    cout << "rounds start!" << endl;
    rounds->start();
    delete rounds;
    delete p1;
    delete p2;
}