#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include "Renderer.h"
#include "InputHandler.h"

class Game
{
    public:
        Game(Renderer, InputHandler);
        void update();
        void render();
        void handleInput();
        void killSwitch();
        bool stillRunning();
    private:
        bool isRunning;
        Renderer& theRenderer;
        InputHandler& theHandler;
};

#endif // GAME_H
