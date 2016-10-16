#include "Text.hpp"


// Default Constructor sets position of text to (0, 0)
Text::Text()
{
	position_x = 0.0f;
	position_y = 0.0f;
	_position = t2d::Vector2f(position_x, position_y);
	
	scale_x = 1.0f;
	scale_y = 1.0f;
	_scale = t2d::Vector2f(scale_x, scale_y);

	_angle = 0.0f;
}

// Rotates the text.
Text& Text::rotate(float angle)
{
	_text.rotate(angle);
	_angle += angle;
	return *this;
}

// Scales the text.
Text& Text::scale(float x, float y)
{
	_text.scale(x, y);
	scale_x *= x;
	scale_y *= y;
	_scale = t2d::Vector2f(scale_x, scale_y);
	return *this;
}

// Scales the text, using t2d::Vector2f. Multiplies the currect scale of the object.
Text& Text::scale(const t2d::Vector2f& factors)
{
	_text.scale(factors.x, factors.y);
	scale_x *= factors.x;
	scale_y *= factors.y;
	_scale = t2d::Vector2f(scale_x, scale_y);
	return *this;
}

// Translates/moves the sprite & Updates position of the text.
Text& Text::translate(float x, float y)
{
	_text.move(x, y);
	position_x += x;
	position_y += y;
	_position = t2d::Vector2f(position_x, position_y);
	return *this;
}

// Translates/moves the text & Updates position of the sprite using t2d::Vector2f. Adds to the current position.
Text& Text::translate(const t2d::Vector2f& factors)
{
	_text.move(factors.x, factors.y);
	position_x += factors.x;
	position_y += factors.y;
	_position = t2d::Vector2f(position_x, position_y);
	return *this;
}

// Applies texture on sprite.
Text& Text::setFont(t2d::Font& font)
{
	_text.setFont(font._font);
	return *this;
}

// Gets the font that belongs to this text. */Havent figured out how to do it yet */
//t2d::Font& Text::getFont() const
//{
//
//}

// applies the string to the text.
Text& Text::setString(const std::string string)
{
	_text.setString(string);
	_string = string;
	return *this;
}

// Gets the string attached to the text.
const std::string& Text::getString() const
{
	return _string;
}

// Sets the position of the text.
Text& Text::setPosition(float x, float y)
{
	_text.setPosition(x, y);
	position_x = x;
	position_y = y;
	_position = t2d::Vector2f(x, y);
	return *this;
}

// Sets the position of the text using t2d::Vector2f.
Text& Text::setPosition(t2d::Vector2f& position)
{
	_text.setPosition(position.x, position.y);
	position_x = position.x;
	position_y = position.y;
	_position = t2d::Vector2f(position_x, position_y);
	return *this;
}

// Gets the position of the sprite.
const t2d::Vector2f& Text::getPosition() const
{
	return _position;
}

// Sets the color of the text.
Text& Text::setColor(const t2d::Color color)
{
	_text.setFillColor(t2d::Color::getColor(color));
	return *this;
}
// Returns the color used for this text.
const t2d::Color Text::getColor() const
{
	//return t2d::Color::getColor(_color); // Create a color variable and save it in setColor. So you can return it.
	return _text.getFillColor();
}

// Sets character size.
Text& Text::setCharacterSize(unsigned int size)
{
	_text.setCharacterSize(size);
	char_size = size;
	return *this;
}

const unsigned int Text::getCharacterSize() const
{
	return char_size;
}

// Sets text style
Text& Text::setStyle(t2d::TextStyle style)
{
	_text.setStyle(style);
	return *this;
}

// Gets the style. Figure this one out later
//const t2d::TextStyle Text::getStyle() const
//{
//	return _text.getStyle();
//}

// Sets the rotation of the text. Overwrites previous rotation angle
Text& Text::setRotation(float angle)
{
	_text.setRotation(angle);
	_angle = angle;
	return *this;
}
// Gets the rotation of the text. 
const float Text::getRotation() const
{
	return _angle;
}

// Sets the scaling for the text using t2d::Vector2f. Overwrites previous scale
Text& Text::setScale(const t2d::Vector2f& factors)
{
	_text.setScale(factors.x, factors.y);
	scale_x = factors.x;
	scale_y = factors.y;
	_scale = t2d::Vector2f(scale_x, scale_y);
	return *this;
}

// Sets the scaling for the text using two float values for x and y. Overwrites previous scale
Text& Text::setScale(float x_factor, float y_factor)
{
	_text.setScale(x_factor, y_factor);
	scale_x = x_factor;
	scale_y = y_factor;
	_scale = t2d::Vector2f(scale_x, scale_y);
	return *this;
}

// Gets the scaling of the text.
const t2d::Vector2f& Text::getScale() const
{
	return _scale;
}

// Draw Class calls this function, which draws the text.
void Text::draw(sf::RenderWindow& window, Text& text)
{
	window.draw(text._text);
}