// main class

#include<iostream>
#include "TicTacToe.h"
using namespace std;

int main(){

	
	
	TicTacToe roundplay;
	//int c = 0;
	int teamPlaya = 1;

	roundplay.print();

	// loop to check if the game is still is progress
	for (int i = 1; i <= 9; i++)
	{
		if (i > 4)
			cout << "\nDo not disturb the game is still in progress\n";

		bool mov;
		int row, col;

		char comma;
		cout << "To start a new game please enter -1\n"
			;
		cout << "Player " << teamPlaya << ": Enter co-ordinates in the format displayed (row num,column num):";
		// accept input in the format given above 
		cin >> row >> comma >> col;

		if (row == -1){

			i = 1;
			roundplay.reset();
			continue;
		}

		// a move is made
		mov = roundplay.move(row, col, teamPlaya);
		while (!mov)
		{
			cout << "You have made an invalid entry! Please try Again " << endl;
			cout << "Player " << teamPlaya << ": Enter co-ordinates in the format displayed (r,c):";
			cin >> row >> comma >> col;
			mov = roundplay.move(row, col, teamPlaya);
		}


		if (i > 4){

			int outcome;
			outcome = roundplay.Over();
			if (outcome != 0 && outcome != 3){

				system("CLS");
				cout << "The winner of the game is: Player " << outcome << endl;
				roundplay.print();
				exit(1);
			}
			else if (!outcome)
				cout << "\n The game ended in a draw\n";
		}

		if (teamPlaya == 1)
			teamPlaya = 2;
		else
			teamPlaya = 1;

		system("CLS");
		roundplay.print();



	}
}