#include "Renderer.h"
//#include <stdio.h>
//#include <SDL2/SDL.h>

Renderer::Renderer()
{
    window = NULL;
    screenSurface = NULL;

    if (SDL_Init(SDL_INIT_VIDEO) < 0 ) {
        printf("SDL broke! It says: %s\n", SDL_GetError());
    } else {
        window = SDL_CreateWindow("MAKE GAME!", SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED, 640, 480,
                                  SDL_WINDOW_RESIZABLE |
                                  SDL_WINDOW_MAXIMIZED);
        if( window == NULL )
        {
            printf( "Window broke! SDL says: %s\n", SDL_GetError() );
        } else {
            screenSurface = SDL_GetWindowSurface(window);
            SDL_UpdateWindowSurface(window);
        } //endif window null
    } //endif sdl init video
}

void Renderer::render()
{
    //make the stuff be seen
}

Renderer::~Renderer()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}
