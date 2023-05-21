//
// Created by SONY on 5/21/2023.
//

#ifndef GROUP9PROJECT_SQUARE_H
#define GROUP9PROJECT_SQUARE_H

#include "piece/Piece.h"

class Square {
private:
    Piece *piece{};
    int x{};
    int y{};

public:
    Square(int x, int y, Piece *piece);

    Piece* getPiece();

    void setPiece(Piece *piece);

    int getX();

    void setX(int x);

    int getY();

    void setY(int y);
};


#endif //GROUP9PROJECT_SQUARE_H
