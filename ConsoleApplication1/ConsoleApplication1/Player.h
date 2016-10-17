#ifndef __PLAYER__
#define __PLAYER__
#include <iostream>
#include <string>
#include "Board.h"
using namespace std;
class player {
public:
	
	friend class board;
	friend class Rules;
	player(char character);
	void SetName(string);
	string NameReturn();
	char ReturnChar();
	void SetBalance(int a);
	void SetProperties(string a,int price);
	void Pay(double p);
	double ReturnBalance();
	int CheckProperties(string STATE, player*ThisPlayer);


private:
	char c;
	string name;
	string properties[16];
	int counter;
	
protected:
	double balance;

};
#endif
