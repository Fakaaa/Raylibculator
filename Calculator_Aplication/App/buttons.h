#ifndef BUTTONS_H
#define BUTTONS_H

#include "raylib.h"

class Button
{
private:
	Vector2 _posButton;
	int _scaleX;
	int _scaleY;

	bool _selected;
	int _type;
	Texture2D _texture;
	Rectangle _collider;

	struct TEXT
	{
		Font font;
		const char* text;
		int fontSize;
		float spacing;
		bool worldWrap;
		Color colorText;
	};
	TEXT _textBtn;
public:
	//CLASS METS
	Button(float posX, float posY, int scaleX, int scaleY, int type);
	~Button();

	//GETERS
	Texture2D getBtn() { return _texture; }
	Vector2 getPos() { return _posButton; }
	Rectangle getCollider() { return _collider; }
	float getSpacing() { return _textBtn.spacing; }
	int getTypeBTN() { return _type; }
	int getFontSize() { return _textBtn.fontSize; }
	bool getWordlWrap() { return _textBtn.worldWrap; }
	TEXT getAllParamText() { return _textBtn; }
	const char* getTextBtn() { return _textBtn.text; }
	Color getColorText() { return _textBtn.colorText; }
	int getScaleX() { return _scaleX; }
	int getScaleY() { return _scaleY; }
	Font getFontTextBtn() { return _textBtn.font; }

	//SETERS
	void loadFont();
	void setScaleX(int scaleX);
	void setScaleY(int scaleY);
	void setColorText(Color colorcin);
	void setFontSize(int size);
	void setTextButton(const char* textHere);
	void setBtnScale(int scaleX, int sclaeY);
	void setType(int type);
	void loadTextures(int& scaleX, int& scaleY);
	void unloadTextures();
};
#endif // !BUTTONS_H