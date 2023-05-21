//
// Created by SONY on 5/21/2023.
//

#ifndef GROUP9PROJECT_PLAYER_H
#define GROUP9PROJECT_PLAYER_H

#include <iostream>

using namespace std;

class Player {
private:
    string name;
    bool white;
public:
    Player();

    explicit Player(string name);

    bool isWhite();
};



#endif //GROUP9PROJECT_PLAYER_H
