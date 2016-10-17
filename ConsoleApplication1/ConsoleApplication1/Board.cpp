#include <iostream>
#include "dice.h"
#include <cstdlib>
#include <string>
#include <ctime>
#include "Board.h"
#include "Player.h"
using namespace std;

board::board() {
	A = "!______________!______________!______________!______________!______________!______________!";
	B = "! |            |                                                           |            | !";
	C = "! |            |                                                           |            | !";
	D = "!  ____________!______________!______________!______________!______________|____________| !";
	E = "! |            |                                                           |            | !";
	F = "! |            |                                                           |            | !";
	CurLoc1 = 6;
	CurLoc2 = 7;
}
void board::WelcomeThePlayers(player*heyman, player*heyman2) {
	string name1="";
	string name2="";
	cout << "____________________________________________________________________________________________________________________" << endl;
	cout << "Welcome To Monopoly!!!!!" << endl;
	cout << "____________________________________________________________________________________________________________________" << endl;
	cout << "WARNING!!!!Before we start,please make the console window bigger in order to see the whole stuff...Width:140 and Height:60 should be OK!" << endl;
	cout << "If you have done the previous step,we are about to start" << endl;
	cout << "____________________________________________________________________________________________________________________" << endl;
	loop1:
	cout << "Please enter the name of the first player:";
	getline(cin, name1);
	if (name1 == "") {
		cout << "You didn't enter the name...Try again!" << endl;
		goto loop1;
	}
	else {
		heyman->SetName(name1);
	}
	loop2:
	cout << "Enter the name of the second player:";
	getline(cin, name2);
	if (name2 == "") {
		cout << "You didn't enter the name...Try again!" << endl;
		goto loop2;
	}
	else {
		heyman2->SetName(name2);
	}
	cout << "______________________________________________________________________________________________________________________" << endl;
	cout << heyman->NameReturn() << " will play with figure \"X\"" << endl;
	cout << heyman2->NameReturn() << " will play with figure \"Y\"" << endl;
	cout << "______________________________________________________________________________________________________________________" << endl;
	cout << "Let's see who will start the game first" << endl;




}
void board::DoTheStepForX(player*heyman, int a, int&counter) {

tryagain:
	if (heyman->c == 'X') {
		if (CurLoc1 >= 6 && CurLoc1 <= 90) {
			A.replace(CurLoc1, 1, "_");
		}
		else if (CurLoc1 >= 91 && CurLoc1 <= 106) {
			B.replace(89, 1, " ");
		}
		else if (CurLoc1 >= 107 && CurLoc1 <= 122) {
			C.replace(89, 1, " ");
		}
		else if (CurLoc1 >= 123 && CurLoc1 <= 214) {
			D.replace(208 - CurLoc1, 1, "_");
		}
		else if (CurLoc1 >= 215 && CurLoc1 <= 230) {
			C.replace(1, 1, " ");
		}
		else if (CurLoc1 >= 231 && CurLoc1 <= 246) {
			B.replace(1, 1, " ");
		}
		if (counter == 0) {
			CurLoc1 = CurLoc1 + a * 15;
		}

		if (CurLoc1 >= 6 && CurLoc1 <= 90) {
			A.replace(CurLoc1, 1, "X");
		}
		else if (CurLoc1 >= 91 && CurLoc1 <= 106) {
			B.replace(89, 1, "X");
		}
		else if (CurLoc1 >= 107 && CurLoc1 <= 122) {
			C.replace(89, 1, "X");
		}
		else if (CurLoc1 >= 123 && CurLoc1 <= 214) {
			D.replace(208 - CurLoc1, 1, "X");
		}
		else if (CurLoc1 >= 215 && CurLoc1 <= 230) {
			C.replace(1, 1, "X");
		}
		else if (CurLoc1 >= 231 && CurLoc1 < 246) {
			B.replace(1, 1, "X");
		}
		else if (CurLoc1 >= 246) {
			CurLoc1 = 6 + (CurLoc1 - 246);
			counter++;
			int curBal = heyman->ReturnBalance();
			heyman->SetBalance(curBal + 150);
			cout << "+150!!!!" << endl;
			goto tryagain;
			//balance ++

		}

	}
}

void board::DoTheStepForY(player*heyman,int b,int&counter2){
tryagain:
	if (CurLoc2 >= 7 && CurLoc2 <= 90) {
		A.replace(CurLoc2 + 2, 1, "_");
	}
	else if (CurLoc2 >= 91 && CurLoc2 <= 106) {
		E.replace(89, 1, " ");
	}
	else if (CurLoc2 >= 107 && CurLoc2 <= 122) {
		F.replace(89, 1, " ");
	}
	else if (CurLoc2 >= 123 && CurLoc2 <= 214) {
		D.replace(205 - CurLoc2 + 6, 1, "_");
	}
	else if (CurLoc2 >= 215 && CurLoc2 <= 230) {
		F.replace(1, 1, " ");
	}
	else if (CurLoc2 >= 231 && CurLoc2 <= 246) {
		E.replace(1, 1, " ");
	}
	if (counter2 == 0) {
		CurLoc2 = CurLoc2 + b * 15;
	}

	if (CurLoc2 >= 6 && CurLoc2 <= 90) {
		A.replace(CurLoc2 + 2, 1, "Y");
	}
	else if (CurLoc2 >= 91 && CurLoc2 <= 106) {
		E.replace(89, 1, "Y");
	}
	else if (CurLoc2 >= 107 && CurLoc2 <= 122) {
		F.replace(89, 1, "Y");
	}
	else if (CurLoc2 >= 123 && CurLoc2 <= 214) {
		D.replace(205 - CurLoc2 + 6, 1, "Y");
	}
	else if (CurLoc2 >= 215 && CurLoc2 <= 230) {
		F.replace(1, 1, "Y");
	}
	else if (CurLoc2 >= 231 && CurLoc2 <= 246) {
		E.replace(1, 1, "Y");
	}
	else if (CurLoc2 >= 247) {
		CurLoc2 = 7 + (CurLoc2 - 247);
		counter2++;
		int curBal = heyman->ReturnBalance();
		heyman->SetBalance(curBal+ 150);
		cout << "+150!!!!" << endl;
		goto tryagain;
		//balance ++

	}


}

void board::UpdateTheBoard(player *heyman) {
	dice dice1;
	int a =dice1.ThrowDice();
	int b = dice1.ThrowDice();
	int counter = 0;
	int counter2 = 0;
	dice1.DisplayDice();

	char*play = new char;
loop2:
	cout << "Enter p to play:";
	cin >> *play;
	if (*play != 'p')
	{
		goto loop2;
	}
	if (heyman->c == 'X') {
		DoTheStepForX(heyman, a, counter);
	}

	else if (heyman->c == 'Y') {
		DoTheStepForY(heyman, b, counter2);
	}
	

	cout << " _________________________________________________________________________________________" << endl;
	cout << D << endl;
	cout << "! |            |              |              |              |              |            | !" << endl;
	cout << "! | Republic   | Charles      | Vernisagge   |  Yerevan     | Geological   |  Shangri   | !" << endl;
	cout << "! |  Square    | Aznavour     |   Market     |  Brandy      |   Museum     |    La      | !" << endl;
	cout << "! |            | Square       |              |  Company     |              |  Casino    | !" << endl;
	cout << "! |            |              |              |              |              |            | !" << endl;
	cout << "! |  Price:570 |  Price:500   |  Price:470   |  Price:400   |  Price: 370  |  Price:350 | !" << endl;
	cout << "! |____________|______________|______________|______________|______________|____________| !" << endl;
	cout << "! |            |                                                           |            | !" << endl;
	cout << "! |  Opera     |                                                           |  Yerevan   | !" << endl;
	cout << "!_|  House     |                                                           |   City     |_!" << endl;
	cout << C << endl;
	cout << F << endl;
	cout << "!_|  Price:600 |                                                           |  Price:300 |_!" << endl;
	cout << "! |____________|                                                           |____________| !" << endl;
	cout << "! |            |                                                           |            | !" << endl;
	cout << "!_|Matenadaran |                                                           | Luna Park  |_!" << endl;
	cout << B << endl;
	cout << E << endl;
	cout << "!_|            |                                                           |            |_!" << endl;
	cout << "! |  Price:650 |                                                           |  Price:280 | !" << endl;
	cout << "! |____________|___________________________________________________________|____________| !" << endl;
	cout << "! |            |              |              |              |              |            | !" << endl;
	cout << "! |            |    Zoo       |  Moskovyan   |  Arabkir     |  Modern Art  |  Yerevan   | !" << endl;
	cout << "! |  Starting  |    Park      |    Park      |    Park      |    Museum    |    Mall    | !" << endl;
	cout << "! |  Position  |              |              |              |              |            | !" << endl;
	cout << "! |   +150     |  Price: 150  |  Price: 200  |  Price: 220  |  Price: 250  |  Price:270 | !" << endl;
	cout << "! |____________|______________|______________|______________|______________|____________| !" << endl;
	cout << A << endl;
	


	delete play;

	


}
