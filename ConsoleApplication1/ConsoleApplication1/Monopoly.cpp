#include <iostream>
#include "Board.h"
#include "Player.h"
#include "dice.h"
#include "SetOfRules.h"
using namespace std;
int main() {
	
	board smth;    //board is created 
	board*ptrtobrd = &smth;//pointer to board created
	Rules RULES;   //Rules created
	player first('X'); //player1 are created 
	player second('Y');//player2 is created 
	player*ptrtofirst = &first;
	player*ptrtosecond = &second;
	smth.WelcomeThePlayers(ptrtofirst, ptrtosecond);
	RULES.OrderOfSteps(ptrtobrd,ptrtofirst,ptrtosecond);

	//Problem connected with bought items when i step on the item that i bought i get a message saying that it's already bought and I have to pay the fee for that

	

	


	delete ptrtofirst;
	delete ptrtosecond;
}