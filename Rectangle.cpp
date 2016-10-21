#include "Rectangle.hpp"


Rectangle::Rectangle(const t2d::Vector2f& size)
{
	m_PositionX = 0.0f;
	m_PositionY = 0.0f;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);

	m_ScaleX = 1.0f;
	m_ScaleY = 1.0f;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);

	m_Angle = 0.0f;

	m_Width = m_RectangleShape.getGlobalBounds().width;
	m_Height = m_RectangleShape.getGlobalBounds().height;
}

// Rotates the sprite. Adds to the current angle.
Rectangle& Rectangle::rotate(float angle)
{
	m_RectangleShape.rotate(angle);
	m_Angle += angle;
	return *this;
}

// Scales the sprite. Multiplies the currect scale of the object.
Rectangle& Rectangle::scale(float x, float y)
{
	m_RectangleShape.scale(x, y);
	m_ScaleX *= x;
	m_ScaleY *= y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Scales the sprite, using t2d::Vector2f. Multiplies the currect scale of the object.
Rectangle& Rectangle::scale(const t2d::Vector2f& factors)
{
	m_RectangleShape.scale(factors.x, factors.y);
	m_ScaleX *= factors.x;
	m_ScaleY *= factors.y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Translates/moves the sprite & Updates position of the sprite. Adds to the current position.
Rectangle& Rectangle::translate(float x, float y)
{
	m_RectangleShape.move(x, y);
	m_PositionX += x;
	m_PositionY += x;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Translates/moves the sprite & Updates position of the sprite using t2d::Vector2f.  Adds to the current position.
Rectangle& Rectangle::translate(const t2d::Vector2f& factors)
{
	m_RectangleShape.move(factors.x, factors.y);
	m_PositionX += factors.x;
	m_PositionY += factors.y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

Rectangle& Rectangle::setPosition(float x, float y)
{
	m_RectangleShape.setPosition(x, y);
	m_PositionX = x;
	m_PositionY = y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Sets the position of sprite using t2d::Vector2f.
Rectangle& Rectangle::setPosition(t2d::Vector2f& position)
{
	m_RectangleShape.setPosition(position.x, position.y);
	m_PositionX = position.x;
	m_PositionY = position.y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Gets the position of the sprite.
const t2d::Vector2f Rectangle::getPosition() const
{
	return m_Position;
}

// Sets the color of the sprite.
Rectangle& Rectangle::setColor(const t2d::Color color)
{
	m_RectangleShape.setFillColor(sf::Color(color.m_R, color.m_G, color.m_B, color.m_A));
	return *this;
}

// Returns the color used for this sprite.
const t2d::Color Rectangle::getColor() const
{
	return m_RectangleShape.getFillColor();
}

// Sets the rotation of the sprite. Overwrites previous rotation angle
Rectangle& Rectangle::setRotation(float angle)
{
	m_RectangleShape.setRotation(angle);
	m_Angle = angle;
	return *this;
}

// Gets the rotation of the sprite.
const float Rectangle::getRotation() const
{
	return m_Angle;
}

// Sets the scaling for the sprite using t2d::Vector2f. Overwrites previous scale
Rectangle& Rectangle::setScale(const t2d::Vector2f& factors)
{
	m_RectangleShape.setScale(factors.x, factors.y);
	m_ScaleX = factors.x;
	m_ScaleY = factors.y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Sets the scaling for the sprite using two float values for x and y. Overwrites previous scale
Rectangle& Rectangle::setScale(float x_factor, float y_factor)
{
	m_RectangleShape.setScale(x_factor, y_factor);
	m_ScaleX = x_factor;
	m_ScaleY = y_factor;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Gets the scaling of the sprite.
const t2d::Vector2f Rectangle::getScale() const
{
	return m_Scale;
}

sf::RectangleShape& Rectangle::getRectangle()
{
	return m_RectangleShape;
}

void Rectangle::setSize(t2d::Vector2f size)
{
	m_RectangleShape.setSize(sf::Vector2f(size.x, size.y));
}

// Gets size of sprite, in width and height.
t2d::Vector2f Rectangle::getSize() const
{
	return t2d::Vector2f(m_RectangleShape.getGlobalBounds().width, m_RectangleShape.getGlobalBounds().height);
}