//
// Created by SONY on 5/21/2023.
//

#ifndef GROUP9PROJECT_BOARD_H
#define GROUP9PROJECT_BOARD_H

#include "Square.cpp"
#include "piece/Bishop.cpp"
#include "piece/King.cpp"
#include "piece/Knight.cpp"
#include "piece/Pawn.cpp"
#include "piece/Queen.cpp"
#include "piece/Rook.cpp"

class Board {
private:
    Square chessBoard[8][8];
public:
    Board();

    Square getBoard(int x, int y);

    void resetBoard();
};


#endif //GROUP9PROJECT_BOARD_H
