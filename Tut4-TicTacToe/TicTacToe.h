#pragma once
#include "TicTacToe.h"

class TicTacToe{
private:
	
	char mat[3][3];

public:
	TicTacToe();
	~TicTacToe();
	void reset();
	bool move(int r, int c, int p);
	void print();
	int Over();

};

