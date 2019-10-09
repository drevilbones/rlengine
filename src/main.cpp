#include <stdio.h>
#include <Game.h>
#include <Renderer.h>
#include <InputHandler.h>

int main(int argc, char* argv[]) {

    Renderer theRenderer;
    InputHandler theHandler;
    Game theGame = new Game(theRenderer, theHandler);

    while (theGame.stillRunning()) {
        theGame.handleInput();
        theGame.update();
        theGame.render();
    }

    return 0;
}
