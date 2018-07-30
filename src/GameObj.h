/*
 * GameObj.h
 *
 *  Created on: Jul 28, 2018
 *      Author: theaw
 */
#pragma once
#include "game.h"
class GameObject {
public:
	GameObject(const char* texturesheet,SDL_Renderer*ren);
	~GameObject();
	void Update();
	void Render();

private:
	int xpos, ypos;
	SDL_Texture* objTexture;
	SDL_Rect srcRect,destRect;
	SDL_Renderer* renderer;
};

