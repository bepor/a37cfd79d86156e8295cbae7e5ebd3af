#include "game.hpp"
//#include <iostream>
//#include <SDL2/SDL.h>
//#include <SDL2/SDL_image.h>

SDL_Texture* background = NULL;
SDL_Rect srcR, destR;

game::game()
{}
game::~game()
{}

void game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}
	if ( SDL_Init(SDL_INIT_EVERYTHING)==0)
	{

		std::cout << "SDL initialized" << std::endl;
		window = SDL_CreateWindow(title,xpos,ypos,width,height,flags);
		if(window)
		{
			//std::cout << "Window created" << std::endl;
		}
		renderer = SDL_CreateRenderer(window, -1, 0);
		if(renderer)
		{
			SDL_SetRenderDrawColor(renderer,255,255,255,255);
			std::cout << "Renderer created" << std::endl;
		}
		isRunning = true;
	} else {
		isRunning = false;
		std::cout << "Something went wrong lol" << std::endl;
	}
	//SDL_Surface*tmpsurface = IMG_Load("/imgs/background.jpg");
	//background = SDL_CreateTextureFromSurface(renderer,tmpsurface);
	//SDL_FreeSurface(tmpsurface);


	/* For images to show, run the exe from file explorer, dont run in eclipse*/
	background = IMG_LoadTexture(renderer, "../imgs/background.png");
	std::cout << IMG_GetError() << std::endl;
}
void game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch(event.type){
	case SDL_QUIT:
		IMG_Quit();
		isRunning = false;
		break;
	default:
		break;
	}
}
void game::update()
{
	destR.w = 800;
	destR.h = 600;

}
void game::render()
{
	SDL_RenderClear(renderer);
	//put shit to render here
	//obviously stuff in the back is rendered first
	SDL_RenderCopy(renderer,background,NULL,&destR);
	SDL_RenderPresent(renderer);

}
void game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	std::cout << "Window & Renderer destroyed" << std::endl;
}

