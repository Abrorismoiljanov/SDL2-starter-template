#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

class Window{
private:
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

public:
    Window(const char* title, int width, int height);

    ~Window();

    SDL_Window* getWindow() const;
    SDL_Renderer* getrenderer() const;

    void clear();
    void RenderPreset();
    
};
