#pragma once
#include "Player.h"
#include "Piece.h"
#include <string>
class Board
{
public:
	Board();
	~Board();
	Player* getWhite();
	Player* getBlack();
	void initBoard();
	void clearBoard();
	int getPieceIndex(std::string pos);


protected:
	Player* white;
	Player* black;
	Piece* board[];
};

