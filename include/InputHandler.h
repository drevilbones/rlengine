#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SDL2/SDL.h>

class Game;

class InputHandler
{
    public:
        InputHandler(Game* inGame);
        virtual ~InputHandler();
        void handle();

    protected:

    private:
        Game* theGame;
        SDL_Event event;
};

#endif // INPUTHANDLER_H
