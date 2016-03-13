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
			cout << mat[i][j] << "\t";
		cout << endl;
	};
};


