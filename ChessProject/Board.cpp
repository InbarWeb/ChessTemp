#include "Board.h"
Board::Board()
{
	this->_boardStr = "rkbqkbkrpppppppp00000000000000000000000000000000PPPPPPPPRKBQKBKR";
}
char Board::getEmptyPiecePosition(int position)
{
	return this->_boardStr[position];
}
std::string Board::sendBoard()
{
	return this->_boardStr;
}