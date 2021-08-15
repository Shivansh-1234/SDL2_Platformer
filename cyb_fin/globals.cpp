#include "globals.h"

const float Globals::PI = 3.14159;

//useful for me as a dev
bool Globals::debugging = false;

//sdl related
int Globals::ScreenWidth = 640, Globals::ScreenHeight = 352, Globals::ScreenScale = 2;
SDL_Renderer* Globals::renderer = NULL;

string Globals::clipOffDataHeader(string data){
	int pos = data.find(":", 0);//returns where we find the : in the string, otherwise, return -1
	if (pos != -1){
		data = data.substr(pos + 1, data.length() - pos + 2);
	}
	return data;
}

SDL_Rect Globals::camera;