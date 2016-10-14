#include "Text.h"


namespace t2d {

	// Default Constructor sets position of text to (0, 0)
	Text::Text()
	{
		_x = 0.0f;
		_y = 0.0f;
		_position = t2d::Vector2f(_x, _y);
	}

	// Rotates the text.
	void Text::rotate(float angle)
	{
		_text.rotate(angle);
	}

	// Scales the text.
	void Text::scale(float width, float height)
	{
		_text.scale(width, height);
	}

	// Translates/moves the sprite & Updates position of the text.
	void Text::translate(float x, float y)
	{
		_text.move(x, y);
		_position = t2d::Vector2f(_text.getPosition().x, _text.getPosition().y);
	}

	// Applies texture on sprite.
	void Text::setFont(t2d::Font& font)
	{
		_text.setFont(font._font);
	}

	// applies the string to the text.
	void Text::setString(const std::string string)
	{
		_text.setString(string);
	}

	// Sets character size.
	void Text::setCharacterSize(unsigned int size)
	{
		_text.setCharacterSize(size);
	}

	// Sets text style
	void Text::setStyle(t2d::Text::Style style)
	{
		_text.setStyle(style);
	}

	// Sets text color
	void Text::setColor(sf::Color color)
	{
		_text.setFillColor(color);
	}

	// Sets the position of the text.
	void Text::setPosition(float x, float y)
	{
		_text.setPosition(x, y);
		_x = x;
		_y = y;
		_position = t2d::Vector2f(x, y);
	}

	// Gets the position of the sprite.
	t2d::Vector2f& Text::getPosition()
	{
		return _position;
	}
}
