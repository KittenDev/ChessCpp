//
// Created by SONY on 5/21/2023.
//

#include "Piece.h"

class Knight: public Piece{
public:
    Knight(): Piece()
    {}

    explicit Knight(bool white): Piece(white)
    {}

    bool isValidMove(Board board, Square start, Square end) override
    {

        return false;
    }
};