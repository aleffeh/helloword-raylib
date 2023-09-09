#include <iostream>
#include "raylib.h"
#include "Game.h"

int main() {
    auto game = new core::Game();

    while (!WindowShouldClose()) {

        game->update(nullptr);
        game->draw(nullptr);
    }

    free(game);
    return 0;
}
