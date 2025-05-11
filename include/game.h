#include "window.h"

class Game{
public:
    Game();
    ~Game();

    void run();

private:
    Window window;
    bool running;

    void handleEvents();
    void update();
    void render();

};
