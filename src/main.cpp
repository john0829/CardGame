#include <iostream>
#include "Player.h"
#include "CardFactory.h"
#include "Rounds.h"
#include "Config.h"

int main(int argc, char **argv){
    Player* p1 = new Player(argv[2], "Player1");
    Player* p2 = new Player(argv[3], "Player2");

    p1->readPlayCardSequence(argv[4]);
    p2->readPlayCardSequence(argv[5]);

    Rounds *rounds = new Rounds(p1, p2, argv[1]);
    cout << "rounds start!" << endl;
    rounds->start();
    delete rounds;
    delete p1;
    delete p2;
}