


#include "dice.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
dice::dice() {
	a = 0;
	
	
}
void dice::SetDice(int z) {
a = z;

}
int dice::ReturnDice1() {
	return a;
}

int dice::ThrowDice(){
	srand(time(0));
	int a = rand() % 6 + 1;
	SetDice(a);
	return a;

}
void dice::DisplayDice()
{
	int a = ReturnDice1();
	switch (a) {
	case 1:
		cout << " ______________\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!      XXX     !\n";
		cout << "!      XXX     !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!______________!\n";
		cout << "       1               " << endl;
		break;
	case 2:
		cout << " ______________\n";
		cout << "! XXX          !\n";
		cout << "! XXX          !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!          XXX !\n";
		cout << "!          XXX !\n";
		cout << "!______________!\n";
		cout << "       2               " << endl;
		break;
	case 3:
		cout << " ______________\n";
		cout << "! XXX          !\n";
		cout << "! XXX          !\n";
		cout << "!              !\n";
		cout << "!     XXX      !\n";
		cout << "!     XXX      !\n";
		cout << "!              !\n";
		cout << "!         XXX  !\n";
		cout << "!         XXX  !\n";
		cout << "!______________!\n";
		cout << "       3               " << endl;
		break;
	
	case 4:
		cout << " ______________\n";
		cout << "! XXX      XXX !\n";
		cout << "! XXX      XXX !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "!              !\n";
		cout << "! XXX      XXX !\n";
		cout << "! XXX      XXX !\n";
		cout << "!______________!\n";
		cout << "       4               " << endl;
		break;
	case 5:
		cout << " ______________\n";
		cout << "! XXX      XXX !\n";
		cout << "! XXX      XXX !\n";
		cout << "!              !\n";
		cout << "!      XXX     !\n";
		cout << "!      XXX     !\n";
		cout << "!              !\n";
		cout << "! XXX      XXX !\n";
		cout << "! XXX      XXX !\n";
		cout << "!______________!\n";
		cout << "       5               " << endl;
		break;

	case 6:
		cout << " ______________\n";
		cout << "! XXX      XXX !\n";
		cout << "! XXX      XXX !\n";
		cout << "!              !\n";
		cout << "! XXX      XXX !\n";
		cout << "! XXX      XXX !\n";
		cout << "!              !\n";
		cout << "! XXX      XXX !\n";
		cout << "! XXX      XXX !\n";
		cout << "!______________!\n";
		cout << "       6               " << endl;
		break;

	case 0:
		cout << "You haven't thrown the dice" << endl;
		break;
	}
	
	

}
