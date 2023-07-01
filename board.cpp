#include "board.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
using std::to_string;
using std::string;
using std::cout;
using std::endl;

#define WHITETILE "\033[48;5;15m\033[38;5;0m"
#define BLACKTILE "\033[48;5;94m\033[38;5;0m"

bool board::isEmpty(char p) {
	return (p == '_');
}

bool board::isWhite(char p) {
	return ((p >= 'a') && (p <= 'z'));
}

bool board::isBlack(char p) {
	return ((p >= 'A') && (p <= 'Z'));
}

string board::tileColor(int row, int col) {
	if((row+col) % 2 == 0) {
		return "\033[48;5;15m\033[38;5;0m";
	} else {
		return "\033[48;5;94m\033[38;5;0m";
	}
}

void board::printPeice(int row, int col) {
	cout << tileColor(row, col) << this->state[row][col] << "\033[m";
}

void board::display(void) {
	int backgroundColor = 11;
	int foregroundColor = 0;
	for(int row = 0; row < 8; row++) {
		for(int col = 0; col < 8; col++) {
			printPeice(row, col);
		}
		cout << endl;
	}
}