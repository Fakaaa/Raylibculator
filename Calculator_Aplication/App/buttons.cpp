#include "buttons.h"

Button::Button(float posX, float posY, int scaleX, int scaleY, int type)
{
	_posButton.x = posX;
	_posButton.y = posY;
	_scaleX = scaleX;
	_scaleY = scaleY;
	_type = type;
}

Button::~Button()
{
}

void Button::loadFont()
{
	//Dejemos default xd
}

void Button::setScaleX(int scaleX)
{
	_scaleX = scaleX;
}

void Button::setScaleY(int scaleY)
{
	_scaleY = scaleY;
}

void Button::setColorText(Color colorcin)
{
	_textBtn.colorText = colorcin;
}

void Button::setFontSize(int size)
{
	_textBtn.fontSize = size;
}

void Button::setTextButton(const char * textHere)
{
	_textBtn.text = textHere;
}

void Button::setBtnScale(int scaleX, int scaleY)
{
	_scaleX = scaleX;
	_scaleY = scaleY;
}

void Button::setType(int type)
{
	_type = type;
}

void Button::loadTextures(int & scaleX, int & scaleY)
{

}

void Button::unloadTextures()
{

}