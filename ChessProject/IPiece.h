#pragma once
#include "Player.h"
class IPiece
{
	public:
		virtual void move() = 0;
		virtual int getPosition() = 0;
		virtual void setPosition() = 0;
		virtual int* getLegalMoves() = 0;
	protected:
		int xPos;
		int yPos;
		int* legalMoves;
};

