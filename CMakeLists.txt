cmake_minimum_required(VERSION 3.25)
project(Group9Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(Group9Project main.cpp class/game/Game.cpp class/game/Game.h class/ui/Display.cpp class/ui/Display.h class/game/Board.cpp class/game/Board.h class/game/Player.cpp class/game/Player.h class/game/Square.cpp class/game/Square.h class/game/piece/Piece.h class/game/piece/King.cpp class/game/piece/Queen.cpp class/game/piece/Knight.cpp class/game/piece/Bishop.cpp class/game/piece/Rook.cpp class/game/piece/Pawn.cpp)
