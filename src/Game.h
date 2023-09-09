//
// Created by Alef Oliveira on 08/09/23.
//

#ifndef HELLOWORLD_GAME_H
#define HELLOWORLD_GAME_H

#include "raylib.h"

namespace core {

    class Game {
    public:
        explicit Game(Color screenColor = WHITE);

        ~Game();

        void update(void (*updateCall)(float deltaTime));

        void draw(void (*drawCall)());
    };

} // core

#endif //HELLOWORLD_GAME_H
