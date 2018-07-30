/*
 * TexManager.cpp
 *
 *  Created on: Jul 28, 2018
 *      Author: theaw
 */
#include "texmanager.h"
SDL_Texture* TexMgr::LoadTexture(const char*texture,SDL_Renderer*ren)
{
	SDL_Surface*tmpsurface = IMG_Load(texture);
	SDL_Texture*tex = SDL_CreateTextureFromSurface(ren,tmpsurface);
	SDL_FreeSurface(tmpsurface);
	std::cout << IMG_GetError() << std::endl;
	return tex;
}


