#pragma once
#include "Player.h"
#include <string>
class IPiece
{
	public:
		IPiece(int startPosition);
		~IPiece();
		virtual void move(int PositionSource, int positionDestination) = 0;
		virtual int getPosition() = 0;
		virtual void setSourcePosition(int positionSource) = 0;
		virtual void setDestinationPosition(int positionDestination) = 0;
		virtual int* getLegalMoves() = 0;
	protected:
		std::string _positionSource;
		std::string _positionDestination;
		int* _legalMoves;
};

