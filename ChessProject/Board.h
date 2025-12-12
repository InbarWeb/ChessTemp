#pragma once
#include "Player.h"
#include "Piece.h"
#include <string>
#define BOARD_SIZE 64
class Board
{
public:
	Board();
	char getEmptyPiecePosition(int position);
	std::string sendBoard();


protected:
	std::string _boardStr;
};

