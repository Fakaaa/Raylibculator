#include "program.h"
#include "raylib.h"

void Program::startDraw()
{
	ClearBackground(WHITE);
	BeginDrawing();
}

void Program::draw()
{
	//Draw all
}

void Program::endDraw()
{
	EndDrawing();
}

Program::Program()	//	--------------->	CONSTRUCTOR
{
	screen = new Screen(600, 720, "-Simple Calculator-");
}

Program::~Program()
{
	if (screen != NULL)
	{
		delete screen;
		screen = NULL;
	}
}

void Program::runApp()
{
	while (!WindowShouldClose())
	{
		startDraw();

		draw();

		endDraw();
	}
}