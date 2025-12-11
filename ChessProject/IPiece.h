#pragma once
#include "Player.h"
class IPiece
{
	public:
		virtual void move(int pointSource, int pointDst) = 0;
		virtual int getPosition() = 0;
		virtual void setSrcPosition(int pointSource) = 0;
		virtual void setDstPosition(int pointDst) = 0;
		virtual int* getLegalMoves() = 0;
	protected:
		int _pointSource;
		int _pointDst;
		int* _legalMoves;
};

