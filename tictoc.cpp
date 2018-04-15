#include <iostream>
#include <cstring>
#include <cstdio>
#include <iostream> 
#include <sstream>
#include "kek.h"
using namespace std;

//win condition check
bool ticTacToe::winCheck() {
	bool win = false;
	int count = 0;
	if (board[0] == 'x' && board[1] == 'x' && board[2] == 'x') //across
	{
		cout << "x win!" << endl;
		bool win = true;
	}
	if (board[3] == 'x' && board[4] == 'x' && board[5] == 'x')//across
	{
		cout << "x win!" << endl;
		bool win = true;
	}
	if (board[6] == 'x' && board[7] == 'x' && board[8] == 'x')//across
	{
		cout << "x win!" << endl;
		bool win = true;
	}
	if (board[0] == 'x' && board[3] == 'x' && board[6] == 'x')//down
	{
		cout << "x win!" << endl;
		bool win = true;
	}
	if (board[1] == 'x' && board[4] == 'x' && board[7] == 'x')//down
	{
		cout << "x win!" << endl;
		bool win = true;
	}
	if (board[2] == 'x' && board[5] == 'x' && board[8] == 'x')//down
	{
		cout << "x win!" << endl;
		bool win = true;
	}
	if (board[0] == 'x' && board[4] == 'x' && board[8] == 'x')//diagonal
	{
		cout << "x win!" << endl;
		bool win = true;
	}
	if (board[2] == 'x' && board[4] == 'x' && board[6] == 'x')//diagonal
	{
		cout << "x win!" << endl;
		bool win = true;
	}
	if (board[0] == 'o' && board[1] == 'o' && board[2] == 'o') //across
	{
		cout << "o win!" << endl;
		bool win = true;
	}
	if (board[3] == 'o' && board[4] == 'o' && board[5] == 'o')//across
	{
		cout << "o win!" << endl;
		bool win = true;
	}
	if (board[6] == 'o' && board[7] == 'o' && board[8] == 'o')//across
	{
		cout << "o win!" << endl;
		bool win = true;
	}
	if (board[0] == 'o' && board[3] == 'o' && board[6] == 'o')//down
	{
		cout << "o win!" << endl;
		bool win = true;
	}
	if (board[1] == 'o' && board[4] == 'o' && board[7] == 'o')//down
	{
		cout << "o win!" << endl;
		bool win = true;
	}
	if (board[2] == 'o' && board[5] == 'o' && board[8] == 'o')//down
	{
		cout << "o win!" << endl;
		bool win = true;
	}
	if (board[0] == 'o' && board[4] == 'o' && board[8] == 'o')//diagonal
	{
		cout << "o win!" << endl;
		bool win = true;
	}
	if (board[2] == 'o' && board[4] == 'o' && board[6] == 'o')//diagonal
	{
		cout << "o win!" << endl;
		bool win = true;
	}
	/*else {
		for (int i = 0; i < 10; i++)
		if (board[i] != i) {
			count++;
			cout << "wthat" << endl;
			if (count == 9) {
				cout << "draw!" << endl;
			}
		}
	}*/
	return win;
}

/*show board*/
void ticTacToe::playerX(int num) {
	switch (num) {
	case 1:
		board[0] = 'x';
		break;
	case 2:
		board[1] = 'x';
		break;
	case 3:
		board[2] = 'x';
		break;
	case 4:
		board[3] = 'x';
		break;
	case 5:
		board[4] = 'x';
		break;
	case 6:
		board[5] = 'x';
		break;
	case 7:
		board[6] = 'x';
		break;
	case 8:
		board[7] = 'x';
		break;
	case 9:
		board[8] = 'x';
		break;
	}
	cout << "o pick a number!" << endl;
	cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << "--+---+--" << endl;
	cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << "--+---+--" << endl;
	cout << board[6] << " | " << board[7] << " | " << board[8] << endl << endl;

};

void ticTacToe::playerO(int num) {
	switch (num) {
	case 1:
		board[0] = 'o';
		break;
	case 2:
		board[1] = 'o';
		break;
	case 3:
		board[2] = 'o';
		break;
	case 4:
		board[3] = 'o';
		break;
	case 5:
		board[4] = 'o';
		break;
	case 6:
		board[5] = 'o';
		break;
	case 7:
		board[6] = 'o';
		break;
	case 8:
		board[7] = 'o';
		break;
	case 9:
		board[8] = 'o';
		break;
	}
	cout << "x pick a number" << endl;
	cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << "--+---+--" << endl;
	cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << "--+---+--" << endl;
	cout << board[6] << " | " << board[7] << " | " << board[8] << endl << endl;

};

//void ticTacToe::drawBoard() {
//	cout << "pick a number!" << endl;
//	cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
//	cout << "--+---+--" << endl;
//	cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
//	cout << "--+---+--" << endl;
//	cout << board[6] << " | " << board[7] << " | " << board[8] << endl << endl;
//}