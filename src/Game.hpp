
#ifndef GAME_HPP_
#define GAME_HPP_
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "zlib.h"

class game{
public:
	game();
	~game();

	void init(const char* title, int x, int y, int width, int height, bool fullscreen);

	void handleEvents();
	void update();
	void render();
	void clean();
	bool running(){return isRunning;}
private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;
};


#endif /* GAME_HPP_ */
