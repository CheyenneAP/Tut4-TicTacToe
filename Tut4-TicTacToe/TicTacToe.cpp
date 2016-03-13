#include "TicTacToe.h"
#include<iostream>
using namespace std;


// default constructor that sets up matrix for a new game 
TicTacToe::TicTacToe()
{
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
			mat[i][j] = '*';
}


TicTacToe::~TicTacToe()
{
}

// clears the board to start a new game 
void TicTacToe::reset(){

	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
			mat[i][j] = '*';
};



// method to print the current board showing all plays that have been made
void TicTacToe::print(){
	for (int i = 1; i <= 3; i++){

		for (int j = 1; j <= 3; j++)
			// display the contents of the matrix
			cout << mat[i][j] << "\t\t";
		cout << endl;
	};
};



int TicTacToe::Over(){
	int play1Mov = 0, play2Mov = 0, playIn = 0;

	//check  to see if row is full to make a set
	for (int i = 1; i <= 3; i++){

		play1Mov = 0, play2Mov = 0;
		for (int j = 1; j <= 3; j++){

			if (mat[i][j] == 'X')
				play1Mov++;
			if (mat[i][j] == 'O')
				play2Mov++;
		};

		if (play1Mov == 3)
			return 1;
		if (play2Mov == 3)
			return 2;
	};

	play1Mov = 0, play2Mov = 0;

	//check for full row of columns to make a set 
	for (int i = 1; i <= 3; i++){

		play1Mov = 0, play2Mov = 0;
		for (int j = 1; j <= 3; j++){

			if (mat[j][i] == 'X')
				play1Mov++;
			if (mat[j][i] == 'O')
				play2Mov++;
			if (mat[j][i] == '*')
				playIn = 1;
		};
		if (play1Mov == 3)
			return 1;
		if (play2Mov == 3)
			return 2;
	};

	play1Mov = 0, play2Mov = 0;

	//checks the first diagonal to make a set
	for (int i = 1; i <= 3; i++){

		if (mat[i][i] == 'X')
			play1Mov++;
		if (mat[i][i] == 'O')
			play2Mov++;
	};

	if (play1Mov == 3)
		return 1;
	if (play2Mov == 3)
		return 2;

	play1Mov = 0, play2Mov = 0;

	//checks the second diagonal to make a set.
	int t = 1;
	for (int j = 3; j >= 1; j--)
	{
		if (mat[t][j] == 'X')
			play1Mov++;
		if (mat[t][j] == 'O')
			play2Mov++;
		t++;
	}
	if (play1Mov == 3)
		return 1;
	if (play2Mov == 3)
		return 2;

	if (playIn = 1)
		return 3;
	else
		return 0;
};




// allows a player to make a move  and returns a boolean value true if its a legal move
bool TicTacToe::move(int row, int col, int player){

	bool countVar = 0;
	if (row <= 3 && col <= 3 && row > 0 && col > 0){

		// checks if any player has played in that required space 
		if (mat[row][col] == '*'){
			countVar = 1;
			// if no play has been made in that required space  then the  player is allowed to play in the space 
			if (player == 1)
				mat[row][col] = 'X';
			else
				mat[row][col] = 'O';
		};
	};
	return countVar;
};


