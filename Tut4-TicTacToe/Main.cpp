// main class

#include<iostream>
#include "TicTacToe.h"
using namespace std;

int main(){

	
	
	TicTacToe round;
	int c = 0;
	int teamPlaya = 1;

	round.print();

	// loop to check if the game is still is progress
	for (int i = 1; i <= 9; i++)
	{
		if (i > 4)
			cout << "\nDo not disturb the game is still in progress\n";
	}
}