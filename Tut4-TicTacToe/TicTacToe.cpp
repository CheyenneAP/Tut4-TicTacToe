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

void TicTacToe::reset()
{
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
			mat[i][j] = '*';
};
