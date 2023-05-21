//
// Created by SONY on 5/21/2023.
//

#include "Piece.h"

class Rook: public Piece{
public:
    Rook(): Piece()
    {}

    explicit Rook(bool white): Piece(white)
    {}

    bool isValidMove(Board board, Square start, Square end) override {
        if (end.getPiece().isWhite() == this->iswhite())
            return false;
        if (start.getX() != end.getX() && start.getY() == end.getY())
            return true;
        if (start.getY() != end.getY() && start.getX() == end.getX())
            return true;
        return false;
    }
};