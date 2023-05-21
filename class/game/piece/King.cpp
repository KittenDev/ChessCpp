//
// Created by SONY on 5/21/2023.
//

#include "Piece.h"

class King: public Piece{
private:
    bool castling;
public:
    King(): Piece()
    {
        this->castling = false;
    }

    explicit King(bool white): Piece(white)
    {
        this->castling = false;
    }

    bool isCastling()
    {
        return this->castling;
    }

    void setCastling(bool castling)
    {
        this->castling = castling;
    }

    bool isValidMove(Board board, Square start, Square end) override
    {
        if (end.getPiece().isWhite() == this->iswhite())
            return false;

        if (abs(start.getX() - end.getX()) + abs(start.getY() - end.getY()) == 1) {
            return true;
        }


    }
};