#include <SDL.h>
#include <SDL_events.h>
#include <SDL_render.h>
#include <SDL_timer.h>
#include "game.h"

int main (int argc, char *argv[]) {
    
    Game game;

    game.run();
    
    return 0;
}
