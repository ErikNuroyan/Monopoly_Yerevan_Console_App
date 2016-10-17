#ifndef __DICE__
#define __DICE__
#include <iostream>
using namespace std;
class dice {
public:
	dice();
	void SetDice(int z);
	int ReturnDice1();
	int ThrowDice();
	void DisplayDice();


private:
	int a;
	
};
#endif
