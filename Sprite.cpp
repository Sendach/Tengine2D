#include "Sprite.hpp"


// Default Constructor sets position of sprite at (0, 0).
Sprite::Sprite()
{
	m_PositionX = 0.0f;
	m_PositionY = 0.0f;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);

	m_ScaleX = 1.0f;
	m_ScaleY = 1.0f;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);

	m_Angle = 0.0f;

	m_Width = _sprite.getGlobalBounds().width;
	m_Height = _sprite.getGlobalBounds().height;
}

// Rotates the sprite. Adds to the current angle.
Sprite& Sprite::rotate(float angle)
{
	_sprite.rotate(angle);
	m_Angle += angle;
	return *this;
}

// Scales the sprite. Multiplies the currect scale of the object.
Sprite& Sprite::scale(float x, float y)
{
	_sprite.scale(x, y);
	m_ScaleX *= x;
	m_ScaleY *= y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Scales the sprite, using t2d::Vector2f. Multiplies the currect scale of the object.
Sprite& Sprite::scale(const t2d::Vector2f& factors)
{
	_sprite.scale(factors.x, factors.y); 
	m_ScaleX *= factors.x;
	m_ScaleY *= factors.y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Translates/moves the sprite & Updates position of the sprite. Adds to the current position.
Sprite& Sprite::translate(float x, float y)
{
	_sprite.move(x, y);
	m_PositionX += x;
	m_PositionY += x;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Translates/moves the sprite & Updates position of the sprite using t2d::Vector2f.  Adds to the current position.
Sprite& Sprite::translate(const t2d::Vector2f& factors)
{
	_sprite.move(factors.x, factors.y);
	m_PositionX += factors.x;
	m_PositionY += factors.y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Applies texture on sprite.
void Sprite::setTexture(Texture& texture)
{
	_sprite.setTexture(texture.m_Texture);
}

// Gets the texture that belongs to this sprite. */Havent figured out how to do it yet */
//const Texture& Sprite::getTexture() const
//{
//	return _sprite.getTexture();
//}

// Sets the position of the sprite & Updates The position of the sprite.
Sprite& Sprite::setPosition(float x, float y)
{
	_sprite.setPosition(x, y);
	m_PositionX = x;
	m_PositionY = y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Sets the position of sprite using t2d::Vector2f.
Sprite& Sprite::setPosition(t2d::Vector2f& position)
{
	_sprite.setPosition(position.x, position.y);
	m_PositionX = position.x;
	m_PositionY = position.y;
	m_Position = t2d::Vector2f(m_PositionX, m_PositionY);
	return *this;
}

// Gets the position of the sprite.
const t2d::Vector2f& Sprite::getPosition() const
{
	return m_Position;
}

// Sets the color of the sprite.
Sprite& Sprite::setColor(const t2d::Color color)
{
	_sprite.setColor(t2d::Color::getColor(color));
	return *this;
}

// Returns the color used for this sprite.
const t2d::Color Sprite::getColor() const
{
	return _sprite.getColor();
}

// Sets the rotation of the sprite. Overwrites previous rotation angle
Sprite& Sprite::setRotation(float angle)
{
	_sprite.setRotation(angle);
	m_Angle = angle;
	return *this;
}

// Gets the rotation of the sprite.
const float Sprite::getRotation() const
{
	return m_Angle;
}

// Sets the scaling for the sprite using t2d::Vector2f. Overwrites previous scale
Sprite& Sprite::setScale(const t2d::Vector2f& factors)
{
	_sprite.setScale(factors.x, factors.y);
	m_ScaleX = factors.x;
	m_ScaleY = factors.y;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Sets the scaling for the sprite using two float values for x and y. Overwrites previous scale
Sprite& Sprite::setScale(float x_factor, float y_factor)
{
	_sprite.setScale(x_factor, y_factor);
	m_ScaleX = x_factor;
	m_ScaleY = y_factor;
	m_Scale = t2d::Vector2f(m_ScaleX, m_ScaleY);
	return *this;
}

// Gets the scaling of the sprite.
const t2d::Vector2f& Sprite::getScale() const
{
	return m_Scale;
}

// Draw Class calls this function, which draws the sprite.
void Sprite::draw(sf::RenderWindow& window, Sprite& sprite)
{
	window.draw(sprite._sprite);
}

Sprite& Sprite::getsprite()
{
	return *this;
}

// Gets size of sprite, in width and height.
const t2d::Vector2f& Sprite::getSize() const
{
	return t2d::Vector2f(_sprite.getGlobalBounds().width, _sprite.getGlobalBounds().height);
}

sf::FloatRect& Sprite::getGlobalBounds()
{
	return _sprite.getGlobalBounds();
}