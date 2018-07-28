#include <iostream>
#include "../src/Game.hpp"
#include <SDL2/SDL.h>

game *Game = nullptr;

int main(int argv, char** args) {
	Game = new game();

	Game->init("the Big Gay",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,false);
	while (Game -> running()){
		Game->handleEvents();
		Game->update();
		Game->render();
	}
	Game->clean();
return 0;
}



