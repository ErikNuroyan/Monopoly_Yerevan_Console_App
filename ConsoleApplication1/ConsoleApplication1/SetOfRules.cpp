#include <iostream>
#include "SetOfRules.h"
#include "Board.h"
#include "Player.h"
#include "dice.h"
using namespace std;
Rules::Rules() {

	state2 = NotBought, price2 = 150;
	state3 = NotBought, price3 = 200;
	state4 = NotBought, price4 = 220;
	state5 = NotBought, price5 = 250;
	state6 = NotBought, price6 = 270;
	state7 = NotBought, price7 = 280;
	state8 = NotBought, price8 = 300;
	state9 = NotBought, price9 = 350;
	state10 = NotBought, price10 = 370;
	state11 = NotBought, price11 = 400;
	state12 = NotBought, price12 = 470;
	state13 = NotBought, price13 = 500;
	state14 = NotBought, price14 = 570;
	state15 = NotBought, price15 = 600;
	state16 = NotBought, price16 = 650;
}
player* Rules::FirstThrow(player*player1, player*player2) {
	dice firstThrow;
	char t = 'k';
	

again:
	cout << player1->NameReturn() << " throws the dice!" << endl;
	cout << "Enter t to throw the dice:";
	cin >> t;
	loop1:
	if (t == 't' || t == 'T') {

		a = firstThrow.ThrowDice();
		cout << "It's " << a << endl;
		firstThrow.DisplayDice();
		cout << "_________________________________________________________________________________________" << endl;
		t = 'k';
	}
	else {
		    cout << "Invalid input...Try again!" << endl;
			goto loop1;
	}
	loop2:
	cout << player2->NameReturn() << " throws the dice!" << endl;
	cout << "Enter t to throw the dice:";
	cin >> t;
	if (t == 't' || t == 'T') {
		b = firstThrow.ThrowDice();
		cout << "It's " << b << endl;
		firstThrow.DisplayDice();
		cout << "_________________________________________________________________________________________" << endl;
		t = 'k';
	}
	else {
		cout << "Invalid input...Try again!" << endl;
		goto loop2;
	}
	if (a > b) {
		cout << player1->NameReturn() << " will start the game!" << endl;
		cout << "_________________________________________________________________________________________" << endl;
		return player1;;
	}
	else if (a < b) {
		cout << player2->NameReturn() << " will start the game!" << endl;
		cout << "_________________________________________________________________________________________" << endl;
		return player2;
	}
	else {
		cout << "That's a draw...Rethrowing!" << endl;
		cout << "_________________________________________________________________________________________" << endl;
		goto again;
		
	}


	


}
void Rules::CheckState(board* TheBoard, player*ThisPlayer,player*OtherPlayer) {
	if (ThisPlayer->ReturnChar() == 'Y') {//If the character is Y
		if (TheBoard->CurLoc2 >= 7 && TheBoard->CurLoc2 <= 91) {
			if (TheBoard->CurLoc2 == 7) {

				cout << "+150!!!!" << endl;
			}
			else if (TheBoard->CurLoc2 == 22) {
				if (state2 == Bought) {
					if (ThisPlayer->CheckProperties("state2", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price2 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price2 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price2 * 25) / 100);
					}
				}
				else if (state2 == NotBought) {
					AskAndBuy(ThisPlayer,state2, "state2", price2);
					
				}//end of state 2
			}
			else if (TheBoard->CurLoc2 == 37) {
				if (state3 == Bought) {
					if (ThisPlayer->CheckProperties("state3", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price3 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price3 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price3 * 25) / 100);
					}
				}
				else if (state3 == NotBought) {
					AskAndBuy(ThisPlayer,state3, "state3", price3);
					
				}//end of state 3
			}
			else if (TheBoard->CurLoc2 == 52) {
				if (state4 == Bought) {
					if (ThisPlayer->CheckProperties("state4", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price4 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price4 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price4 * 25) / 100);
					}
				}
				else if (state4 == NotBought) {
					AskAndBuy(ThisPlayer, state4, "state4", price4);

				}//end of state 4
				
			}

			else if (TheBoard->CurLoc2 == 67) {

				if (state5 == Bought) {
					if (ThisPlayer->CheckProperties("state5", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price5 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price5 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price5 * 25) / 100);
					}
				}
				else if (state5 == NotBought) {
					AskAndBuy(ThisPlayer,state5, "state5", price5);
					
				}//end of state 5
			}
			else if (TheBoard->CurLoc2 == 82) {

				if (state6 == Bought) {
					if (ThisPlayer->CheckProperties("state6", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price6 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price6 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price6 * 25) / 100);
					}
				}
				else if (state6 == NotBought) {
					AskAndBuy(ThisPlayer,state6, "state6", price6);
					
				}//end of state 6
			}




		}


		else if (TheBoard->CurLoc2 == 97) {
			if (state7 == Bought) {
				if (ThisPlayer->CheckProperties("state7", ThisPlayer)) {
					cout << "This is your own property!!" << endl;
				}
				else {
					cout << "It's already bought by the other player!...Pay the fee of " << (price7 * 25) / 100 << "!" << endl;
					ThisPlayer->Pay((price7 * 25) / 100);
					int CurBalOfTheOther = OtherPlayer->ReturnBalance();
					OtherPlayer->SetBalance(CurBalOfTheOther + (price7 * 25) / 100);
				}
			}
			else if (state7 == NotBought) {
				AskAndBuy(ThisPlayer,state7, "state7", price7);
				
			}//end of state 7

		}
		else if (TheBoard->CurLoc2 == 112) {

			if (state8 == Bought) {
				if (ThisPlayer->CheckProperties("state8", ThisPlayer)) {
					cout << "This is your own property!!" << endl;
				}
				else {
					cout << "It's already bought by the other player!...Pay the fee of " << (price8 * 25) / 100 << "!" << endl;
					ThisPlayer->Pay((price8 * 25) / 100);
					int CurBalOfTheOther = OtherPlayer->ReturnBalance();
					OtherPlayer->SetBalance(CurBalOfTheOther + (price8 * 25) / 100);
				}
			}
			else if (state8 == NotBought) {
				AskAndBuy(ThisPlayer,state8, "state8", price8);
			}//end of state 8
		}
		else if (TheBoard->CurLoc2 >= 123 && TheBoard->CurLoc2 <= 214) {
			if (TheBoard->CurLoc2 == 127) {
				if (state9 == Bought) {
					if (ThisPlayer->CheckProperties("state9", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price9 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price9 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price9 * 25) / 100);
					}
				}
				else if (state9 == NotBought) {
					AskAndBuy(ThisPlayer,state9, "state9", price9);
				}//end of state 9
			}
			else if (TheBoard->CurLoc2 == 142) {
				if (state10 == Bought) {
					if (ThisPlayer->CheckProperties("state10", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price10 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price10 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price10 * 25) / 100);
					}
				}
				else if (state10 == NotBought) {
					AskAndBuy(ThisPlayer,state10, "state10", price10);
				}//end of state 10
			}
			else if (TheBoard->CurLoc2 == 157) {
				if (state11 == Bought) {
					if (ThisPlayer->CheckProperties("state11", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price11 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price11 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price11 * 25) / 100);
					}
				}
				else if (state11 == NotBought) {
					AskAndBuy(ThisPlayer,state11, "state11", price11);
				}//end of state 11
			}
			else if (TheBoard->CurLoc2 == 172) {
				if (state12 == Bought) {
					if (ThisPlayer->CheckProperties("state12", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price12 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price12 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price12 * 25) / 100);
					}
				}
				else if (state12 == NotBought) {
					AskAndBuy(ThisPlayer,state12, "state12", price12);
				}//end of state 12
			}
			else if (TheBoard->CurLoc2 == 187) {
				if (state13 == Bought) {
					if (ThisPlayer->CheckProperties("state13", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price13 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price13 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price13 * 25) / 100);
					}
				}
				else if (state13 == NotBought) {
					AskAndBuy(ThisPlayer,state13, "state13", price13);
				}//end of state 13
			}
			else if (TheBoard->CurLoc2 == 202) {
				if (state14 == Bought) {
					if (ThisPlayer->CheckProperties("state14", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price14 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price14 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price14 * 25) / 100);
					}
				}
				else if (state14 == NotBought) {
					AskAndBuy(ThisPlayer,state14, "state14", price14);
				}//end of state 14
			}
		}
		else if (TheBoard->CurLoc2 == 217) {
			if (state15 == Bought) {
				if (ThisPlayer->CheckProperties("state15", ThisPlayer)) {
					cout << "This is your own property!!" << endl;
				}
				else {
					cout << "It's already bought by the other player!...Pay the fee of " << (price15 * 25) / 100 << "!" << endl;
					ThisPlayer->Pay((price15 * 25) / 100);
					int CurBalOfTheOther = OtherPlayer->ReturnBalance();
					OtherPlayer->SetBalance(CurBalOfTheOther + (price15 * 25) / 100);
				}
			}
			else if (state15 == NotBought) {
				AskAndBuy(ThisPlayer,state15, "state15", price15);
			}//end of state 15

		}
		else if (TheBoard->CurLoc2 == 232) {
			if (state16 == Bought) {
				if (ThisPlayer->CheckProperties("state16", ThisPlayer)) {
					cout << "This is your own property!!" << endl;
				}
				else {
					cout << "It's already bought by the other player!...Pay the fee of " << (price16 * 25) / 100 << "!" << endl;
					ThisPlayer->Pay((price16 * 25) / 100);
					int CurBalOfTheOther = OtherPlayer->ReturnBalance();
					OtherPlayer->SetBalance(CurBalOfTheOther + (price16 * 25) / 100);
				}
			}
			else if (state16 == NotBought) {
				AskAndBuy(ThisPlayer,state16, "state16", price16);
			}//end of state 16
		}
	}
	else if (ThisPlayer->ReturnChar() == 'X') {//If the Character is X
		if (TheBoard->CurLoc1 >= 6 && TheBoard->CurLoc1 <= 90) {
			if (TheBoard->CurLoc1 == 6) {
				cout << "+150!!!!" << endl;
			}
			else if (TheBoard->CurLoc1 == 21) {
				if (state2 == Bought) {
					if (ThisPlayer->CheckProperties("state2", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price2 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price2 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price2 * 25) / 100);
					}
				}
				else if (state2 == NotBought) {
					AskAndBuy(ThisPlayer,state2, "state2", price2);
				}//end of state 2

			}
			else if (TheBoard->CurLoc1 == 36) {
				if (state3 == Bought) {
					if (ThisPlayer->CheckProperties("state3", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price3 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price3 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price3 * 25) / 100);
					}
				}
				else if (state3 == NotBought) {
					AskAndBuy(ThisPlayer,state3, "state3", price3);
				}//end of state 3

			}

			else if (TheBoard->CurLoc1 == 51) {
				if (state4 == Bought) {
					if (ThisPlayer->CheckProperties("state4", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price4 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price4 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price4 * 25) / 100);
					}
				}
				else if (state4 == NotBought) {
					AskAndBuy(ThisPlayer,state4, "state4", price4);
				}//end of state 4

			}
			else if (TheBoard->CurLoc1 == 66) {
				if (state5 == Bought) {
					if (ThisPlayer->CheckProperties("state5", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price5 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price5 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price5 * 25) / 100);
					}
				}
				else if (state5 == NotBought) {
					AskAndBuy(ThisPlayer,state5, "state5", price5);
				}//end of state 5

			}
			else if (TheBoard->CurLoc1 == 81) {
				if (state6 == Bought) {
					if (ThisPlayer->CheckProperties("state6", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price6 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price6 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price6 * 25) / 100);
					}
				}
				else if (state6 == NotBought) {
					AskAndBuy(ThisPlayer,state6, "state6", price6);
				}//end of state 6

			}

		}
		else if (TheBoard->CurLoc1 == 96) {
			if (state7 == Bought) {
				if (ThisPlayer->CheckProperties("state7", ThisPlayer)) {
					cout << "This is your own property!!" << endl;
				}
				else {
					cout << "It's already bought by the other player!...Pay the fee of " << (price7 * 25) / 100 << "!" << endl;
					ThisPlayer->Pay((price7 * 25) / 100);
					int CurBalOfTheOther = OtherPlayer->ReturnBalance();
					OtherPlayer->SetBalance(CurBalOfTheOther + (price7 * 25) / 100);
				}
			}
			else if (state7 == NotBought) {
				AskAndBuy(ThisPlayer,state7, "state7", price7);
			}//end of state 7
		}
		else if (TheBoard->CurLoc1 == 111) {
			if (state8 == Bought) {
				if (ThisPlayer->CheckProperties("state8", ThisPlayer)) {
					cout << "This is your own property!!" << endl;
				}
				else {
					cout << "It's already bought by the other player!...Pay the fee of " << (price8 * 25) / 100 << "!" << endl;
					ThisPlayer->Pay((price8 * 25) / 100);
					int CurBalOfTheOther = OtherPlayer->ReturnBalance();
					OtherPlayer->SetBalance(CurBalOfTheOther + (price8 * 25) / 100);
				}
			}
			else if (state8 == NotBought) {
				AskAndBuy(ThisPlayer,state8, "state8", price8);
			}//end of state 8
		}
		else if (TheBoard->CurLoc1 >= 123 && TheBoard->CurLoc1 <= 214) {
			if (TheBoard->CurLoc1 == 126) {
				if (state9 == Bought) {
					if (ThisPlayer->CheckProperties("state9", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price9 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price9 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price9 * 25) / 100);
					}
				}
				else if (state9 == NotBought) {
					AskAndBuy(ThisPlayer, state9, "state9", price9);
				}//end of state 9
			}
			else if (TheBoard->CurLoc1 == 141) {
				if (state10 == Bought) {
					if (ThisPlayer->CheckProperties("state10", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price10 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price10 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price10 * 25) / 100);
					}
				}
				else if (state10 == NotBought) {
					AskAndBuy(ThisPlayer, state10, "state10", price10);
				}//end of state 10
			}
			else if (TheBoard->CurLoc1 == 156) {
				if (state11 == Bought) {
					if (ThisPlayer->CheckProperties("state11", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price11 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price11 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price11 * 25) / 100);
					}
				}
				else if (state11 == NotBought) {
					AskAndBuy(ThisPlayer, state11, "state11", price11);
				}//end of state 11
			}
			else if (TheBoard->CurLoc1 == 171) {
				if (state12 == Bought) {
					if (ThisPlayer->CheckProperties("state12", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price12 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price12 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price12 * 25) / 100);
					}
				}
				else if (state12 == NotBought) {
					AskAndBuy(ThisPlayer, state12, "state12", price12);
				}//end of state 12
			}
			else if (TheBoard->CurLoc1 == 186) {
				if (state13 == Bought) {
					if (ThisPlayer->CheckProperties("state13", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price13 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price13 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price13 * 25) / 100);
					}
				}
				else if (state13 == NotBought) {
					AskAndBuy(ThisPlayer, state13, "state13", price13);
				}//end of state 13
			}
			else if (TheBoard->CurLoc1 == 201) {
				if (state14 == Bought) {
					if (ThisPlayer->CheckProperties("state14", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price14 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price14 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price14 * 25) / 100);
					}
				}
				else if (state14 == NotBought) {
					AskAndBuy(ThisPlayer, state14, "state14", price14);
				}//end of state 14
			}
		}
			else if (TheBoard->CurLoc1 == 216) {
				if (state15 == Bought) {
					if (ThisPlayer->CheckProperties("state15", ThisPlayer)) {
						cout << "This is your own property!!" << endl;
					}
					else {
						cout << "It's already bought by the other player!...Pay the fee of " << (price15 * 25) / 100 << "!" << endl;
						ThisPlayer->Pay((price15 * 25) / 100);
						int CurBalOfTheOther = OtherPlayer->ReturnBalance();
						OtherPlayer->SetBalance(CurBalOfTheOther + (price15 * 25) / 100);
					}
				}
				else if (state15 == NotBought) {
					AskAndBuy(ThisPlayer,state15, "state15", price15);
				}//end of state 15
			}
		
		else if (TheBoard->CurLoc1 == 231) {
			if (state16 == Bought) {
				if (ThisPlayer->CheckProperties("state16", ThisPlayer)) {
					cout << "This is your own property!!" << endl;
				}
				else {
					cout << "It's already bought by the other player!...Pay the fee of " << (price16 * 25) / 100 << "!" << endl;
					ThisPlayer->Pay((price16 * 25) / 100);
					int CurBalOfTheOther = OtherPlayer->ReturnBalance();
					OtherPlayer->SetBalance(CurBalOfTheOther + (price16 * 25) / 100);
				}
			}
			else if (state16 == NotBought) {
				AskAndBuy(ThisPlayer,state16, "state16", price16);
			}//end of state 16
		}
	}
		
		
	



	}



void Rules::AskAndBuy(player*ThisPlayer,int &STATE, string Numstate, int price) {
	char smth = 'k';
loop:
	cout << "This is not bought yet...Do you want to buy it?(y/n):";
	cin >> smth;
	if (smth == 'y' || smth == 'Y') {
		if (ThisPlayer->ReturnBalance() >= price) {
			ThisPlayer->SetProperties(Numstate, price);
			STATE = Bought;
			cout << ThisPlayer->NameReturn() << " purchased the property!" << endl;
			cout << "_________________________________________________________________________________________" << endl;
		}
		else {
			cout << "You don't have enought money to buy this" << endl;
		}
	}
	else if (smth == 'n' || smth == 'N') {
	}
	else {
		cout << "Enter the right symbol" << endl;
		goto loop;
	}
}
void Rules::OrderOfSteps(board*TheBoard,player*player1, player*player2) {
	char t = 'k';
	if (FirstThrow(player1, player2) == player1) {
		TheBoard->UpdateTheBoard(player1);
		CheckState(TheBoard, player1,player2);
		while (player1->ReturnBalance() > 0 && player2->ReturnBalance() > 0) {
		loop1:
			cout << player2->NameReturn() << " will throw the dice!" << endl;
			cout << "Player's balance is:" << player2->ReturnBalance() << endl; 
			cout << "Enter t to throw the dice:";
			cin >> t;
			if (t == 'T' || t == 't') {
				TheBoard->UpdateTheBoard(player2);
				CheckState(TheBoard, player2,player1);
				cout << "_________________________________________________________________________________________" << endl;
				t = 'k';
			}
			else {
				cout << "Enter a valid symbol!" << endl;
				cout << "_________________________________________________________________________________________" << endl;
				goto loop1;
			}
		loop2:
			cout << player1->NameReturn() << " will throw the dice!" << endl;
			cout << "Player's balance is:" << player1->ReturnBalance() << endl;
			cout << "Enter t to throw the dice:";
			cin >> t;
			if (t == 'T' || t == 't') {

				TheBoard->UpdateTheBoard(player1);
				CheckState(TheBoard, player1,player2);
				cout << "_________________________________________________________________________________________" << endl;
				t = 'k';
			}
			else {
				cout << "Enter a valid symbol!" << endl;
				cout << "_________________________________________________________________________________________" << endl;
				goto loop2;
			}
		}
		if (player1->ReturnBalance() <= 0) {
			cout << "The Game is over!" << player1->NameReturn() << "Lost :(" << endl;
		}
		else if (player2->ReturnBalance() <= 0) {
			cout << "The Game is over!" << player2->NameReturn() << "Lost :(" << endl;
		}
	}
	else {
		TheBoard->UpdateTheBoard(player2);
		CheckState(TheBoard, player2,player1);
		while (player1->ReturnBalance() != 0 && player2->ReturnBalance() != 0) {
			loop3:
			cout << player1->NameReturn() << " will throw the dice!" << endl;
			cout << "Player's balance is:" << player1->ReturnBalance() << endl;
			cout << "Enter t to throw the dice:";
			cin >> t;
			if (t == 'T' || t == 't') {

				TheBoard->UpdateTheBoard(player1);
				CheckState(TheBoard, player1,player2);
				cout << "_________________________________________________________________________________________" << endl;
				t = 'k';
			}
			else {
				cout << "Enter a valid symbol!" << endl;
				cout << "_________________________________________________________________________________________" << endl;
				goto loop3;
			}
			
			loop4:
			cout << player2->NameReturn() << " will throw the dice!" << endl;
			cout << "Player's balance is:" << player2->ReturnBalance() << endl;
			cout << "Enter t to throw the dice:";
			cin >> t;
			if (t == 'T' || t == 't') {
				TheBoard->UpdateTheBoard(player2);
				CheckState(TheBoard, player2,player1);
				cout << "_________________________________________________________________________________________" << endl;
				t = 'k';
			}
			else {
				cout << "Enter a valid symbol!" << endl;
				cout << "_________________________________________________________________________________________" << endl;
				goto loop4;
			}
			
		}
		if (player1->ReturnBalance() <= 0) {
			cout << "The Game is over!" << player1->NameReturn() << "Lost :(" << endl;
		}
		else if (player2->ReturnBalance() <= 0) {
			cout << "The Game is over!" << player2->NameReturn() << "Lost :(" << endl;
		}
	}


}
