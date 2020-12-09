#include "screen.h"
#include "raylib.h"

Screen::Screen(int sizeX, int sizeY, const char* title)
{
	InitWindow(sizeX, sizeY, title);
	_width = sizeX;
	_heigth = sizeY;
	_titleScreen = title;
}

Screen::~Screen()
{
	CloseWindow();
}