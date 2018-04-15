#pragma once


class ticTacToe {
	
public:
	char board[9] = { '1','2','3','4','5','6','7','8','9' };
	bool winCheck();
	void playerX(int num);
	void playerO(int num);
	//void drawBoard();

};

