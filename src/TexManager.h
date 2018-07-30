/*
 * TexManager.h
 *
 *  Created on: Jul 28, 2018
 *      Author: theaw
 */

//#ifndef TEXMANAGER_H_
//#define TEXMANAGER_H_

#pragma once
#include "game.h"

class TexMgr{
public:
	static SDL_Texture* LoadTexture(const char* fileName, SDL_Renderer* texren);
};




//#endif /* TEXMANAGER_H_ */
