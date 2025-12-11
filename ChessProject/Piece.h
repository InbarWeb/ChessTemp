#pragma once
#include "IPiece.h"
class Piece : public IPiece, public Player
{
	public:
		void move(int pointSource, int pointDst) override;
		int getPosition() override;
		void setSrcPosition(int pointSource) override;
		void setDstPosition(int pointDst) override;
		int* getLegalMoves() override;
};

