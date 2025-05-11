#include <SDL2/SDL.h>
#include <SDL_error.h>
#include <SDL_render.h>
#include <SDL_video.h>
#include <iostream>
#include "window.h"


Window::Window(const char* title, int width, int height){
    
    if (SDL_Init(SDL_INIT_VIDEO)) {
        std::cerr << SDL_GetError();
    }
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

Window::~Window(){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

SDL_Window* Window::getWindow() const{
    return window;
}
SDL_Renderer* Window::getrenderer() const{
    return renderer;
}
void Window::clear() {
    SDL_RenderClear(renderer);
}
void Window::RenderPreset(){
    SDL_RenderPresent(renderer);
}
