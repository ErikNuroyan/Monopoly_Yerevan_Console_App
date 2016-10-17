#ifndef __BOARD__
#define __BOARD__
#include <string>
#include "Player.h"

using namespace std;
class board {
public:
	friend class Rules;
	board();
	void UpdateTheBoard(player*heyman);
	void DoTheStepForY(player*heyman, int b, int&);
	void DoTheStepForX(player*heyman, int a, int&);
	void WelcomeThePlayers(player*heyman, player*heyman2);


private:
	string A;
	string B;
	string C;
	string D;
	string E;
	string F;
	int CurLoc1;
	int CurLoc2;
};
#endif

