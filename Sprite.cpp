#include "Sprite.hpp"


namespace t2d {

	// Default Constructor sets position of sprite at (0, 0).
	Sprite::Sprite()
	{
		_x = 0.0f;
		_y = 0.0f;
		_position = t2d::Vector2f(_x, _y);
	}

	// Rotates the sprite.
	void Sprite::rotate(float angle)
	{
		_sprite.rotate(angle);
	}

	// Scales the sprite.
	void Sprite::scale(float width, float height)
	{
		_sprite.scale(width, height);
	}

	// Translates/moves the sprite & Updates position of the sprite.
	void Sprite::translate(float x, float y)
	{
		_sprite.move(x, y);
		_position = t2d::Vector2f(_sprite.getPosition().x, _sprite.getPosition().y);
	}

	// Applies texture on sprite.
	void Sprite::setTexture(t2d::Texture& texture)
	{
		_sprite.setTexture(texture._texture);
	}

	// Sets the position of the sprite & Updates The position of the sprite.
	void Sprite::setPosition(float x, float y)
	{
		_sprite.setPosition(x, y);
		_x = x;
		_y = y;
		_position = t2d::Vector2f(x, y);
	}

	// Gets the position of the sprite.
	t2d::Vector2f& Sprite::getPosition()
	{
		return _position;
	}
}