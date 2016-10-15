#ifndef SPRITE_HPP
#define SPRITE_HPP

// SFML
#include <SFML\Graphics\Sprite.hpp>

// Classes
#include "Vector2.hpp"
#include "Texture.hpp"

namespace t2d {
	// A class that represents a sprite.
	class Sprite
	{
	public:
		// Default Constructor sets position of sprite to (0, 0).
		Sprite();
		
		// Rotates the sprite.
		void rotate(float angle);
		// Scales the sprite.
		void scale(float width, float height);
		// Translates/moves the sprite & Updates position of the sprite.
		void translate(float x, float y);
		
		// Settings & Getters

		// Applies texture on sprite.
		void setTexture(t2d::Texture& texture);

		// Gets the texture that belongs to this sprite. */Havent figured out how to do it yet */
		t2d::Texture& getTexture();

		// Sets the position of the sprite.
		void setPosition(float x, float y);

		// Gets the position of the sprite.
		t2d::Vector2f& getPosition();

		// The actual sprite.
		sf::Sprite _sprite;
		
	private:
		
		// Position x and y of sprite.
		t2d::Vector2f _position;
		// Position in x.
		float _x;
		// Position in y.
		float _y;
		// Width of sprite.
		float _width;
		// Height of sprite.
		float _height;
	};
}
#endif
