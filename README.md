# CardGame
2021 NYCU ECE OOP FINAL 

This is an simple OOP program which is based on Yu-Gi-Oh!.

- input dir: input data files
  - seq{number}.txt: player{number} play card sequence
  - cards.txt: include cards which will be sent to attack player after round
  - p{number}.txt: cards of player{number}
- src: .cpp file
- include : .h file

compile:
```
#generate a "final" ELF file
make
```
compile & execute:  
```
make run  
```
check memory leak:  
```
make test  
```
  
Output records:
```
rounds start!
=============================================
ROUND0: player1 round 
Player1 pop a Card, Id is: 10
Card name info: Fire monster4 4000 1500
monster4
ATTACK PLAYER!
Player blood: 10000 -> 8500
Player1 get a card name is: magic11
++++++++++++++++++++++++
Player1: blood is 10000
Fire monster4 4000 1500
++++++++++++++++++++++++
Player2: blood is 8500
=============================================
ROUND1: player2 round 
Player2 pop a Card, Id is: 6
Card name info: magic6 ATTACK_PlAYER_500
Player blood: 10000 -> 9500
Player2 get a card name is: magic12
++++++++++++++++++++++++
Player1: blood is 9500
Fire monster4 4000 1500
++++++++++++++++++++++++
Player2: blood is 8500
=============================================
ROUND2: player1 round 
Player1 pop a Card, Id is: 7
Card name info: FireIce monster3 2000 1500
monster4
ATTACK PLAYER!
Player blood: 8500 -> 7000
monster3
ATTACK PLAYER!
Player blood: 7000 -> 5500
Player1 get a card name is: monster11
++++++++++++++++++++++++
Player1: blood is 9500
Fire monster4 4000 1500
FireIce monster3 2000 1500
++++++++++++++++++++++++
Player2: blood is 5500
=============================================
ROUND3: player2 round 
Player2 pop a Card, Id is: 10
Card name info: FireIce monster8 3200 1500
monster8
ATTACK MONSTER! Name is:monster4, blood:4000 -> 3700
ATTACK MONSTER! Name is:monster4, blood:3700 -> 1300
ATTACK MONSTER! Name is:monster3, blood:2000 -> 1700
ATTACK MONSTER! Name is:monster3, blood:1700 -> 500
Player2 get a card name is: monster12
++++++++++++++++++++++++
Player1: blood is 9500
Fire monster4 1300 1500
FireIce monster3 500 1500
++++++++++++++++++++++++
Player2: blood is 5500
FireIce monster8 3200 1500
=============================================
ROUND4: player1 round 
Player1 pop a Card, Id is: 1
Card name info: magic2 MONSTER_DECREASE_1000
ATTACK MONSTER! Name is:monster8, blood:3200 -> 2200
monster4
ATTACK MONSTER! Name is:monster8, blood:2200 -> -800
DEAD:monster8
monster3
ATTACK PLAYER!
Player blood: 5500 -> 4000
Player1 get a card name is: monster13
++++++++++++++++++++++++
Player1: blood is 9500
Fire monster4 1300 1500
FireIce monster3 500 1500
++++++++++++++++++++++++
Player2: blood is 4000
=============================================
ROUND5: player2 round 
Player2 pop a Card, Id is: 7
Card name info: magic8 STALL_PlAYER_1
Player2 get a card name is: magic13
++++++++++++++++++++++++
Player1: blood is 9500
Fire monster4 1300 1500
FireIce monster3 500 1500
++++++++++++++++++++++++
Player2: blood is 4000
=============================================
ROUND6: player2 round 
Player2 pop a Card, Id is: 18
Card name info: magic13 ATTACK_MONSTER_2000
ATTACK MONSTER! Name is:monster4, blood:1300 -> -700
DEAD:monster4
Player2 get a card name is: magic14
++++++++++++++++++++++++
Player1: blood is 9500
FireIce monster3 500 1500
++++++++++++++++++++++++
Player2: blood is 4000
=============================================
ROUND7: player1 round 
Player1 pop a Card, Id is: 1
Card name info: Ice monster5 5000 1500
monster3
ATTACK PLAYER!
Player blood: 4000 -> 2500
monster5
ATTACK PLAYER!
Player blood: 2500 -> 1000
Player1 get a card name is: monster14
++++++++++++++++++++++++
Player1: blood is 9500
FireIce monster3 500 1500
Ice monster5 5000 1500
++++++++++++++++++++++++
Player2: blood is 1000
=============================================
ROUND8: player2 round 
Player2 pop a Card, Id is: 9
Card name info: magic1 MONSTER_DECREASE_2000
ATTACK MONSTER! Name is:monster3, blood:500 -> -1500
DEAD:monster3
ATTACK MONSTER! Name is:monster5, blood:5000 -> 3000
Player2 get a card name is: magic15
++++++++++++++++++++++++
Player1: blood is 9500
Ice monster5 3000 1500
++++++++++++++++++++++++
Player2: blood is 1000
=============================================
ROUND9: player1 round 
Player1 pop a Card, Id is: 5
Card name info: magic8 STALL_PlAYER_1
monster5
ATTACK PLAYER!
Player blood: 1000 -> -500
Player1 get a card name is: magic16
++++++++++++++++++++++++
Player1: blood is 9500
Ice monster5 3000 1500
++++++++++++++++++++++++
Player2: blood is -500
Winner is: Player1!
Game over
```
  

