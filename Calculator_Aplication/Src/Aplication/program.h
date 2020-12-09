#ifndef PROGRAM_H
#define PROGRAM_H

#include <iostream>
#include "Screen/screen.h"

class Program
{
private:
	Screen* screen;
protected:
	void startDraw();
	void draw();
	void endDraw();
public:
	Program();
	~Program();
	void runApp();
};
#endif // !PROGRAM_H