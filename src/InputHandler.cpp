#include "InputHandler.h"
#include "Game.h"

InputHandler::InputHandler(Game* inGame) {
    theGame = inGame;
}

InputHandler::~InputHandler() {
    //dtor
}

void InputHandler::handle() {
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) { theGame->killSwitch(); }
    }
}
