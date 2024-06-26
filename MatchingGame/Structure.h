#pragma once
#ifndef STRUCT
#define STRUCT

#include <string>
using namespace std;

//define the width and length of the game board
#define BOARDWIDTH 8
#define BOARDHEIGHT 5

//define the specific numbers for the keys based on ASCII
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ESC_KEY 27
#define ENTER_KEY 13
#define SPACE_KEY 32

//struct for position
struct Position {
	int x, y;
};

//struct for player 
struct Player {
	string name = "";
	int point = 0, life = 3;
};

//struct for the pointer array
struct Cell_1 {
	int i, j;
	char c = ' ';
	bool valid = 1, selected = 0;

	void drawBox(int);
	void drawHiddenBox(int);
	void deleteBox();
};

//struct for the linked list array
struct Cell_2 {
	int i, j;
	char c = ' ';
	bool selected = 0;
	Cell_2* next = NULL;

	void drawBox(int);
	void deleteBox();
};

#endif