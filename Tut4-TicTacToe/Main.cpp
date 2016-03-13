
// libraries used 
#include<iostream>
#include "TicTacToe.h"
using namespace std;
// main class
int main(){

	
	
	TicTacToe roundplay;
	
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
		
			
		cout << "Player " << teamPlaya << ": Enter co-ordinates in the format displayed (row num,column num):";
		// accept input in the format given above 
		cin >> row >> comma >> col;

	

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
				cout << "Congratulations Player " << outcome << " You are the winner of the game"<<endl;
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