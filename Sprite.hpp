#pragma once
#ifndef SPRITE_HPP
#define SPRITE_HPP

// SFML
#include <SFML\Graphics\Sprite.hpp>
#include <SFML\Graphics\RenderWindow.hpp>

// Engine Classes
#include "Vector2.hpp"
#include "Texture.hpp"
#include "Color.hpp"

// A class that represents a sprite.
class Sprite
{
public:
	// Default Constructor sets position of sprite to (0, 0).
	Sprite();

	// Rotates the sprite. Adds to the current angle.
	Sprite& rotate(float angle);
	// Scales the sprite, using float values x and y. Multiplies the currect scale of the object.
	Sprite& scale(float x, float y);
	// Scales the sprite, using t2d::Vector2f. Multiplies the currect scale of the object.
	Sprite& scale(const t2d::Vector2f& factors);
	// Translates/moves the sprite & Updates position of the sprite using float values x and y. Adds to the current position.
	Sprite& translate(float x, float y);
	// Translates/moves the sprite & Updates position of the sprite using t2d::Vector2f. Adds to the current position.
	Sprite& translate(const t2d::Vector2f& factors);


	// Settings & Getters

	// Applies texture on sprite.
	void setTexture(Texture& texture);
	// Gets the texture that belongs to this sprite. */Havent figured out how to do it yet */
	const Texture& getTexture() const;

	// Sets the position of the sprite.
	Sprite& setPosition(float x, float y);
	// Sets the position of sprite using t2d::Vector2f.
	Sprite& setPosition(t2d::Vector2f& position);
	// Gets the position of the sprite.
	const t2d::Vector2f& getPosition() const;

	// Sets the color of the sprite.
	Sprite& setColor(const t2d::Color color);
	// Returns the color used for this sprite.
	const t2d::Color getColor() const;

	// Sets the rotation of the sprite. Overwrites previous rotation angle
	Sprite& setRotation(float angle);
	// Gets the rotation angle of the sprite. 
	const float getRotation() const;

	// Sets the scaling for the sprite using t2d::Vector2f. Overwrites previous scale
	Sprite& setScale(const t2d::Vector2f& factors);
	// Sets the scaling for the sprite using two float values for x and y. Overwrites previous scale
	Sprite& setScale(float x_factor, float y_factor);
	// Gets the scaling of the sprite.
	const t2d::Vector2f& getScale() const;

	// Draw Class calls this function, which draws the sprite.
	void draw(sf::RenderWindow& window, Sprite& sprite);

	// Returns sprite
	Sprite& getsprite();

private:

	// The actual sprite.
	sf::Sprite _sprite;

	// Position x and y of sprite.
	t2d::Vector2f m_Position;
	// Scale of the sprite
	t2d::Vector2f m_Scale;
	// Position in x.
	float m_PositionX;
	// Position in y.
	float m_PositionY;
	// Scale in x
	float m_ScaleX;
	// Scale in y
	float m_ScaleY;
	// Rotation angle of the sprite.
	float m_Angle;
	// Width of sprite.
	float m_Width;
	// Height of sprite.
	float m_Height;

};

#endif
