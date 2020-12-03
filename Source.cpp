#include <iostream>
#include "SoccerPlayer.h"
using namespace std;
int main() {
	SoccerPlayer player1("Alexander","Gleb",1,1);
	player1.print();
	player1.addGoals(2);
	player1.addAssists(3);
	player1.print();
	return 0;
}