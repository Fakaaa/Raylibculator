#ifndef SCREEN_H
#define SCREEN_H

class Screen
{
protected:
	int _width;
	int _heigth;
	const char* _titleScreen;
public:
	Screen(int sizeX, int sizeY, const char* title);
	~Screen();
	int GetWindowWidth() { return _width; }
	int GetWindowHeigth() { return _heigth; }
};
#endif // !SCREEN_H