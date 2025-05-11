#include "game.h"
#include <SDL2/SDL.h>

Game::Game(): window("", 800, 600), running(true){

};

Game::~Game(){

};

void Game::run(){

    SDL_Event e;

    while (running) {

        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
            running = false;
        }
    }
    update();
    render();
    }
  
}

void Game::update(){
    
}

void Game::render(){

    window.clear();
    SDL_SetRenderDrawColor(window.getrenderer(), 50, 50, 50, 255);
    window.RenderPreset();

}
