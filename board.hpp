#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>
using std::string;

class board {
	private:
		//Starting with using char array to keep track of board state
		char state[8][8] = {
			'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r',
			'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
			'_', '_', '_', '_', '_', '_', '_', '_',
			'_', '_', '_', '_', '_', '_', '_', '_',
			'_', '_', '_', '_', '_', '_', '_', '_',
			'_', '_', '_', '_', '_', '_', '_', '_',
			'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
			'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'
		};
		//Private Helpers
		bool isEmpty(char);
		bool isWhite(char);
		bool isBlack(char);
		string tileColor(int row, int col);
		void printPeice(int row, int col);
	public:
		void display(void);
};

#endif