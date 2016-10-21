#include "Text.hpp"


// Default Constructor sets position of text to (0, 0)
Text::Text()
{
	m_PositionX = 0.0f;
	m_PositionY = 0.0f;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	
	m_ScaleX = 1.0f;
	m_ScaleY = 1.0f;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);

	m_Angle = 0.0f;
}

// Rotates the text.
Text& Text::rotate(float angle)
{
	_text.rotate(angle);
	m_Angle += angle;
	return *this;
}

// Scales the text.
Text& Text::scale(float x, float y)
{
	_text.scale(x, y);
	m_ScaleX *= x;
	m_ScaleY *= y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Scales the text, using t2d::Vector2f. Multiplies the currect scale of the object.
Text& Text::scale(const t2d::Vector2f& factors)
{
	_text.scale(factors.x, factors.y);
	m_ScaleX *= factors.x;
	m_ScaleY *= factors.y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Translates/moves the sprite & Updates position of the text.
Text& Text::translate(float x, float y)
{
	_text.move(x, y);
	m_PositionX += x;
	m_PositionY += y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Translates/moves the text & Updates position of the sprite using t2d::Vector2f. Adds to the current position.
Text& Text::translate(const t2d::Vector2f& factors)
{
	_text.move(factors.x, factors.y);
	m_PositionX += factors.x;
	m_PositionY += factors.y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Applies texture on sprite.
Text& Text::setFont(t2d::Font& font)
{
	_text.setFont(font.m_Font);
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
	m_String = string;
	return *this;
}

// Gets the string attached to the text.
const std::string Text::getString() const
{
	return m_String;
}

// Sets the position of the text.
Text& Text::setPosition(float x, float y)
{
	_text.setPosition(x, y);
	m_PositionX = x;
	m_PositionY = y;
	m_Position = t2d::Vector2f(x, y);
	return *this;
}

// Sets the position of the text using t2d::Vector2f.
Text& Text::setPosition(t2d::Vector2f& position)
{
	_text.setPosition(position.x, position.y);
	m_PositionX = position.x;
	m_PositionY = position.y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Gets the position of the sprite.
const t2d::Vector2f Text::getPosition() const
{
	return m_Position;
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
	m_CharSize = size;
	return *this;
}

const unsigned int Text::getCharacterSize() const
{
	return m_CharSize;
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
	m_Angle = angle;
	return *this;
}
// Gets the rotation of the text. 
const float Text::getRotation() const
{
	return m_Angle;
}

// Sets the scaling for the text using t2d::Vector2f. Overwrites previous scale
Text& Text::setScale(const t2d::Vector2f& factors)
{
	_text.setScale(factors.x, factors.y);
	m_ScaleX = factors.x;
	m_ScaleY = factors.y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Sets the scaling for the text using two float values for x and y. Overwrites previous scale
Text& Text::setScale(float x_factor, float y_factor)
{
	_text.setScale(x_factor, y_factor);
	m_ScaleX = x_factor;
	m_ScaleY = y_factor;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Gets the scaling of the text.
const t2d::Vector2f Text::getScale() const
{
	return m_Scale;
}

sf::Text& Text::getText()
{
	return _text;
}