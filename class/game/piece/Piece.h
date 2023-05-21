//
// Created by SONY on 5/21/2023.
//

#ifndef GROUP9PROJECT_PIECE_H
#define GROUP9PROJECT_PIECE_H

#include "../Board.cpp"
#include "../Square.cpp"
#include <cmath>

class Piece {
private:
    bool killed{};
    bool white{};

public:
    Piece()
    {
        this->setKilled(false);
        this->setWhite(false);
    }

    explicit Piece(bool white)
    {
        this->setKilled(false);
        this->setWhite(white);
    }

    bool iswhite()
    {
        return white;
    }

    void setWhite(bool white)
    {
        this->white = white;
    }

    bool isKilled()
    {
        return killed;
    }

    void setKilled(bool killed)
    {
        this->killed = killed;
    }

    virtual bool isValidMove(Board board, Square start, Square end);
};


#endif //GROUP9PROJECT_PIECE_H
