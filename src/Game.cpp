//
// Created by Alef Oliveira on 08/09/23.
//

#include "Game.h"
#include "raylib.h"

namespace core {
    Color _clearScreenColor;

    Game::Game(Color bgColor) {
        _clearScreenColor = bgColor;
        InitWindow(800, 600, "Hello World");
        SetTargetFPS(60);
    };

    Game::~Game() {
        CloseWindow();
    }

    void Game::draw(void (*drawCall)()) {
        BeginDrawing();
        ClearBackground(_clearScreenColor);

        if (drawCall != nullptr)
            drawCall();

        EndDrawing();
    }

    void Game::update(void (*updateCall)(float)) {
        if (updateCall != nullptr)
            updateCall(GetFrameTime());
    }

} // core