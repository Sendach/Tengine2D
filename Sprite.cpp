#include "Sprite.hpp"


// Default Constructor sets position of sprite at (0, 0).
Sprite::Sprite()
{
	position_x = 0.0f;
	position_y = 0.0f;
	_position = t2d::Vector2f(position_x, position_y);

	scale_x = 1.0f;
	scale_y = 1.0f;
	_scale = t2d::Vector2f(scale_x, scale_y);

	_angle = 0.0f;
}

// Rotates the sprite. Adds to the current angle.
Sprite& Sprite::rotate(float angle)
{
	_sprite.rotate(angle);
	_angle += angle;
	return *this;
}

// Scales the sprite. Multiplies the currect scale of the object.
Sprite& Sprite::scale(float x, float y)
{
	_sprite.scale(x, y);
	scale_x *= x;
	scale_y *= y;
	_scale = t2d::Vector2f(scale_x, scale_y);
	return *this;
}

// Scales the sprite, using t2d::Vector2f. Multiplies the currect scale of the object.
Sprite& Sprite::scale(const t2d::Vector2f& factors)
{
	_sprite.scale(factors.x, factors.y); 
	scale_x *= factors.x;
	scale_y *= factors.y;
	_scale = t2d::Vector2f(scale_x, scale_y);
	return *this;
}

// Translates/moves the sprite & Updates position of the sprite. Adds to the current position.
Sprite& Sprite::translate(float x, float y)
{
	_sprite.move(x, y);
	position_x += x;
	position_y += x;
	_position = t2d::Vector2f(position_x, position_y);
	return *this;
}

// Translates/moves the sprite & Updates position of the sprite using t2d::Vector2f.  Adds to the current position.
Sprite& Sprite::translate(const t2d::Vector2f& factors)
{
	_sprite.move(factors.x, factors.y);
	position_x += factors.x;
	position_y += factors.y;
	_position = t2d::Vector2f(position_x, position_y);
	return *this;
}

// Applies texture on sprite.
void Sprite::setTexture(Texture& texture)
{
	_sprite.setTexture(texture._texture);
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
	position_x = x;
	position_y = y;
	_position = t2d::Vector2f(position_x, position_y);
	return *this;
}

// Sets the position of sprite using t2d::Vector2f.
Sprite& Sprite::setPosition(t2d::Vector2f& position)
{
	_sprite.setPosition(position.x, position.y);
	position_x = position.x;
	position_y = position.y;
	_position = t2d::Vector2f(position_x, position_y);
	return *this;
}

// Gets the position of the sprite.
const t2d::Vector2f& Sprite::getPosition() const
{
	return _position;
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
	_angle = angle;
	return *this;
}

// Gets the rotation of the sprite.
const float Sprite::getRotation() const
{
	return _angle;
}

// Sets the scaling for the sprite using t2d::Vector2f. Overwrites previous scale
Sprite& Sprite::setScale(const t2d::Vector2f& factors)
{
	_sprite.setScale(factors.x, factors.y);
	scale_x = factors.x;
	scale_y = factors.y;
	_scale = t2d::Vector2f(scale_x, scale_y);
	return *this;
}

Sprite& Sprite::getsprite()
{
	return *this;
}

// Sets the scaling for the sprite using two float values for x and y. Overwrites previous scale
Sprite& Sprite::setScale(float x_factor, float y_factor)
{
	_sprite.setScale(x_factor, y_factor);
	scale_x = x_factor;
	scale_y = y_factor;
	_scale = t2d::Vector2f(scale_x, scale_y);
	return *this;
}

// Gets the scaling of the sprite.
const t2d::Vector2f& Sprite::getScale() const
{
	return _scale;
}

// Draw Class calls this function, which draws the sprite.
void Sprite::draw(sf::RenderWindow& window, Sprite& sprite)
{
	window.draw(sprite._sprite);
}