#include "Game.h"

Game::Game(Renderer& inRenderer, InputHandler& inInputHandlr) {
    isRunning = true;
    theHandler = inInputHandlr;
    theRenderer = inRenderer;
}

void Game::update() {
    //do the game stuff
}

void Game::handleInput() {
    //handle the input
}

void Game::render() {
    //render the game state
}

void Game::killSwitch() {
    isRunning = false;
}

bool Game::stillRunning() { return isRunning; }
