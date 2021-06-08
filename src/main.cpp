#include <iostream>
#include "Player.h"
using namespace std;

int main(){
    Player* p1 = new Player("p1.txt");
    Player* p2 = new Player("p2.txt");
    delete p1;
    delete p2;
    
}