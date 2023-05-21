//
// Created by SONY on 5/21/2023.
//

#include "Piece.h"

class Pawn: public Piece{
public:
    Pawn(): Piece()
    {

    }

    explicit Pawn(bool white): Piece(white)
    {

    }

    bool isValidMove(Board board, Square start, Square end) override
    {
        if (end.getPiece().isWhite() == this->iswhite())
            return false;

        return false;
    }
};