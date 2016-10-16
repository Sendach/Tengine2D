#pragma once
#ifndef TEXT_HPP
#define TEXT_HPP

// SFML
#include <SFML\Graphics\Text.hpp>
#include <SFML\Graphics\RenderWindow.hpp>

// Engine Classes
#include "Vector2.hpp"
#include "Font.hpp"
#include "Color.hpp"

namespace t2d {

	enum  TextStyle {
		Regular = 0,
		Bold = 1 << 0,
		Italic = 1 << 1,
		Underlined = 1 << 2
	};
}
class Text
{
public:

	// Default Constructor sets position of text to (0, 0)
	Text();

	// Different text styles.
	

	// Rotates the text.  Adds to the current angle.
	Text& rotate(float angle);
	// Scales the text. using float values x and y. Multiplies the currect scale of the object.
	Text& scale(float x, float y);
	// Scales the text, using t2d::Vector2f. Multiplies the currect scale of the object.
	Text& scale(const t2d::Vector2f& factors);
	// Translates/moves the sprite & Updates position of the text.
	Text& translate(float x, float y);
	// Translates/moves the text & Updates position of the sprite using t2d::Vector2f. Adds to the current position.
	Text& translate(const t2d::Vector2f& factors);


	// Settings & Getters

	// Applies font to text.
	Text& setFont(t2d::Font& font);
	// Gets the font that belongs to this text. */Havent figured out how to do it yet */
	t2d::Font& getFont() const;

	// applies the string to the text.
	Text& setString(const std::string string);
	// Gets the string attached to the text.
	const std::string& getString() const;

	// Sets the position of the text.
	Text& setPosition(float x, float y);
	// Sets the position of text using t2d::Vector2f.
	Text& setPosition(t2d::Vector2f& position);
	// Gets the position of the sprite.
	const t2d::Vector2f& getPosition() const;

	// Sets the color of the text.
	Text& setColor(const t2d::Color color);
	// Returns the color used for this text.
	const t2d::Color getColor() const;

	// Sets character size.
	Text& setCharacterSize(unsigned int size);
	// Returns character size
	const unsigned int getCharacterSize() const;

	// Sets text style
	Text& setStyle(t2d::TextStyle style);
	// Gets the style. Figure this one out later
	const t2d::TextStyle getStyle() const;

	// Sets the rotation of the text. Overwrites previous rotation angle
	Text& setRotation(float angle);
	// Gets the rotation angle of the text. 
	const float getRotation() const;

	// Sets the scaling for the text using t2d::Vector2f. Overwrites previous scale
	Text& setScale(const t2d::Vector2f& factors);
	// Sets the scaling for the text using two float values for x and y. Overwrites previous scale
	Text& setScale(float x_factor, float y_factor);
	// Gets the scaling of the text.
	const t2d::Vector2f& getScale() const;

	// Draw Class calls this function, which draws the text.
	void draw(sf::RenderWindow& window, Text& text);

private:

	// The actual text.
	sf::Text _text;

	// Position x and y of text.
	t2d::Vector2f _position;
	// Scale of the text
	t2d::Vector2f _scale;
	// Position in x.
	float position_x;
	// Position in y.
	float position_y;
	// Scale in x
	float scale_x;
	// Scale in y
	float scale_y;
	// Rotation angle of the sprite.
	float _angle;
	// Width of text.
	float _width;
	// Height of text.
	float _height;
	// String containing the text
	std::string _string;
	// Character size
	unsigned int char_size;
	
	
};

#endif
