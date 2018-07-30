/*
 * GameObj.cpp
 *
 *  Created on: Jul 28, 2018
 *      Author: theaw
 */

#include "GameObj.h"
#include "TexManager.h"

GameObject::GameObject(const char* texturesheet, SDL_Renderer*ren)
{
	renderer = ren;
	objTexture = TexMgr::LoadTexture(texturesheet,ren);

}

void GameObject::Update()
{
	xpos = 0;
	ypos = 0;
	srcRect.h = 64;
	srcRect.w = 64;
	srcRect.x = 0;
	srcRect.y = 0;
	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w *2;
	destRect.h = srcRect.h * 2;
}

void GameObject::Render()
{
	SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);
}
