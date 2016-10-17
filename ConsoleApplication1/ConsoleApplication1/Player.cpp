#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
player::player(char character) {
	c = character;
	name = "";
	balance = 5000;
	counter = 0;
	for (int i = 0; i < 16; i++) {
		properties[i] = "";
	}

}
void player::SetName(string n) {

	name = n;
}
string player::NameReturn() {
	return name;
}
void player::SetBalance(int bal) {
	balance = bal;
}
char player::ReturnChar() {

	return c;
}
void player::SetProperties(string a,int price) {
	properties[counter] = a;
	counter++;
	balance-=price;
}
void player::Pay(double price) {
	balance = balance - price;
}
double player::ReturnBalance() {
	return balance;
}
int player::CheckProperties(string STATE, player*ThisPlayer) {
	for (int i = 0; i < 16; i++) {
		if (properties[i] == STATE){
			return 1;
}
	}

	return 0;
}
