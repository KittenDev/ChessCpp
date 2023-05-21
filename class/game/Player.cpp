//
// Created by SONY on 5/21/2023.
//

#include "Player.h"

Player::Player()
{
    this->white = false;
    this->name = "";
}

Player::Player(string name)
{
    this->white = false;
    this->name = name;
}

bool Player::isWhite()
{
    return this->white;
}