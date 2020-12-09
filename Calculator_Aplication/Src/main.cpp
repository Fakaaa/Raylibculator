#include <iostream>
#include "raylib.h"

Rectangle test;
int width;
int heigth;
const char* nameScreen;

static void initScreen() {
	width = 400;
	heigth = 600;
	nameScreen = "Test Screen";
}

static void initRectangle() {
	test = {width * 0.5f, heigth * 0.5f, 100 , 100};
}

void main() {

	initScreen();
	
	initRectangle();

	InitWindow(width, heigth, nameScreen);

	while (!WindowShouldClose())
	{
		ClearBackground(BLACK);

		BeginDrawing();

		DrawRectangleRec(test, GRAY);

		EndDrawing();
	}

	CloseWindow();
}