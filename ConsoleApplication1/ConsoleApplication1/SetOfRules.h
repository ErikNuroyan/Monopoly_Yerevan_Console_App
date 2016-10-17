#ifndef __RULES__
#define __RULES__
#include <iostream>
#include "Board.h"
#include "Player.h"
class Rules {
public:
	Rules();
	player* FirstThrow(player*player1,player*player2);
	void CheckState(board*TheBoard,player*ThisPlayer,player*OtherPlayer);
	void AskAndBuy(player*ThisPlayer,int &STATE, string Numstate, int price);
	void OrderOfSteps(board*TheBoard,player*player1, player*player2);

private:
	int state2,price2;
	int state3,price3;
	int state4,price4;
	int state5,price5;
	int state6,price6;
	int state7,price7;
	int state8,price8;
	int state9,price9;
	int state10,price10;
	int state11,price11;
	int state12,price12;
	int state13,price13;
	int state14,price14;
	int state15,price15;
	int state16,price16;


	enum State {NotBought,Bought};
	int a = 0;  
	int b = 0; 
};


#endif 
