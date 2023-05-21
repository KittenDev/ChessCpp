//
// Created by SONY on 5/21/2023.
//

#include "Piece.h"

class Bishop: public Piece{
public:
    Bishop(): Piece()
    {}

    explicit Bishop(bool white): Piece(white)
    {}

    bool isValidMove(Board board, Square start, Square end) override
    {
        if (end.getPiece().isWhite() == this->iswhite())
            return false;

        return start.getX() - end.getX() == start.getY() - start.getY();
    }
};