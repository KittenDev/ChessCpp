//
// Created by SONY on 5/21/2023.
//

#include "Square.h"

Square::Square(int x, int y, Piece *piece)
{
    this->setX(x);
    this->setY(y);
    this->setPiece(piece);
}

Piece* Square::getPiece()
    {
        return this->piece;
    }

void Square::setPiece(Piece *piece)
    {
        this->piece = piece;
    }

int Square::getX()
    {
        return this->x;
    }

void Square::setX(int x)
    {
        this->x = x;
    }

int Square::getY()
    {
        return this->y;
    }

void Square::setY(int y)
    {
        this->y = y;
    }