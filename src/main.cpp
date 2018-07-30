#include <iostream>
#include "game.h"
#include <SDL2/SDL.h>

game *Game = nullptr;

int main(int argv, char** args) {
	Game = new game();
	Game->init("the Big Gay",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,false);

	const int FPS = 60;
	const int frameDelay = 1000/FPS;
	Uint32 frameStart;
	int frameTime;

	while (Game -> running()){
		frameStart = SDL_GetTicks();
		Game->handleEvents();
		Game->update();
		Game->render();
		frameTime = SDL_GetTicks() - frameStart;
		if(frameDelay > frameTime){
			SDL_Delay(frameDelay - frameTime);
		}
	}
	Game->clean();
return 0;
}



