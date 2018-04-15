#include <iostream>
#include <cstring>
#include <cstdio>
#include <iostream> 
#include <sstream>
#include "kek.h"

using namespace std;

int main() {


	ticTacToe example;
	int playerXChoice;
	int playerOChoice;

	cout << 1 << " | " << 2 << " | " << 3 << endl;
	cout << "--+---+--" << endl;
	cout << 4 << " | " << 5 << " | " << 6 << endl;
	cout << "--+---+--" << endl;
	cout << 7 << " | " << 8 << " | " << 9 << endl << endl;
	cout << "lets play tictactoe!! x goes first" << endl;

	//example.drawBoard();
	while (example.winCheck() == false)
	{
		cin >> playerXChoice;
		if (!cin) {
			cin.clear();
			cin.ignore(100, '\n');
		}
		example.playerX(playerXChoice);
		example.winCheck();
		cin >> playerOChoice;
		if (!cin) {
			cin.clear();
			cin.ignore(100, '\n');
		}
		example.playerO(playerOChoice);
		example.winCheck();
	};

	return 0;
	/*std::cin.get(); std::cout << "Press enter to continue..." << std::endl;*/

}
