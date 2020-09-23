//============================================================================
// Name        : Break_Out_Game.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include "Vec2D.h"

const int SCREEN_WIDTH = 680;
const int SCREEN_HEIGHT = 480;

using namespace std;

int main(int argc, char* argv[]) {

	if(SDL_Init(SDL_INIT_VIDEO))
	{
		std::cout<<"Error SDL_Init Failed"<<std::endl;
		return 1;
	}

	SDL_Window* optrwindow = SDL_CreateWindow("Hello_World", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT,0);

    if(optrwindow==nullptr)
    {
    	std::cout<<"could not create window, got error:"<<SDL_GetError()<<std::endl;
    	return 1;
    }

	SDL_Event sdlEvent;
	bool running = true;

	while(running)
	{
		while(SDL_PollEvent(&sdlEvent))
		{
			switch(sdlEvent.type)
			{
			case SDL_QUIT:
				running = false;
				break;
			}
		}
	}

	SDL_DestroyWindow(optrwindow);
	SDL_Quit();

	return 0;
}
