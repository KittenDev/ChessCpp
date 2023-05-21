//
// Created by SONY on 5/21/2023.
//

#include "Board.h"

Board::Board()
{
    this->resetBoard();
}

Square Board::getBoard(int x, int y)
{
    return chessBoard[x][y];
}

void Board::resetBoard()
{
    this->chessBoard[0][0] = Square(0, 0, new Rook(true));
    this->chessBoard[0][1] = Square(0, 1, new Knight(true));
    this->chessBoard[0][2] = Square(0, 2, new Bishop(true));
    this->chessBoard[0][3] = Square(0, 3, new Queen(true));
    this->chessBoard[0][4] = Square(0, 4, new King(true));
    this->chessBoard[0][5] = Square(0, 5, new Bishop(true));
    this->chessBoard[0][6] = Square(0, 6, new Knight(true));
    this->chessBoard[0][7] = Square(0, 7, new Rook(true));

    this->chessBoard[1][0] = Square(1, 0, new Pawn(true));
    this->chessBoard[1][1] = Square(1, 1, new Pawn(true));
    this->chessBoard[1][2] = Square(1, 2, new Pawn(true));
    this->chessBoard[1][3] = Square(1, 3, new Pawn(true));
    this->chessBoard[1][4] = Square(1, 4, new Pawn(true));
    this->chessBoard[1][5] = Square(1, 5, new Pawn(true));
    this->chessBoard[1][6] = Square(1, 6, new Pawn(true));
    this->chessBoard[1][7] = Square(1, 7, new Pawn(true));

    this->chessBoard[7][0] = Square(7, 0, new Rook(false));
    this->chessBoard[7][1] = Square(7, 1, new Knight(false));
    this->chessBoard[7][2] = Square(7, 2, new Bishop(false));
    this->chessBoard[7][3] = Square(7, 3, new Queen(false));
    this->chessBoard[7][4] = Square(7, 4, new King(false));
    this->chessBoard[7][5] = Square(7, 5, new Bishop(false));
    this->chessBoard[7][6] = Square(7, 6, new Knight(false));
    this->chessBoard[7][7] = Square(7, 7, new Rook(false));

    this->chessBoard[6][0] = Square(6, 0, new Pawn(false));
    this->chessBoard[6][1] = Square(6, 1, new Pawn(false));
    this->chessBoard[6][2] = Square(6, 2, new Pawn(false));
    this->chessBoard[6][3] = Square(6, 3, new Pawn(false));
    this->chessBoard[6][4] = Square(6, 4, new Pawn(false));
    this->chessBoard[6][5] = Square(6, 5, new Pawn(false));
    this->chessBoard[6][6] = Square(6, 6, new Pawn(false));
    this->chessBoard[6][7] = Square(6, 7, new Pawn(false));

    for (int i = 2; i < 6; i++)
        for (int j = 0; j < 8; j++)
            this->chessBoard[i][j] = Square(i, j, nullptr);
}