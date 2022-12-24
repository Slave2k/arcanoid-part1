#include "settings.h"
#include "functions.h"
#include "bat.h"
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(window_width, window_height),
        window_title);
    
    Bat bat;
    batInit(bat);

    while (window.isOpen())
    {
        checkEvents(window);
        updateGame(bat);
        checkCollisions();
        drawGame(window, bat);
    }

    return 0;
}