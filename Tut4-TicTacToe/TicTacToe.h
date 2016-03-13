#pragma once
#include "TicTacToe.h"
#include<string>
using namespace std;

class TicTacToe{
private:
	// character matrix
	char mat[3][3];

public:
	TicTacToe();
	~TicTacToe();
	void reset();
	bool move(int, int, int);
	void print();
	int Over();

};

