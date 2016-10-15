#ifndef COLOR_HPP
#define COLOR_HPP

// SFML.
#include <SFML\Graphics\Color.hpp>

// C++ Standard Library
#include <cstdint> // Used for the type uint8_t. Which is an 8 bit integer, range 0 to 255.

namespace t2d {

	// Currently existing colors
	enum  Colors	{
		Black,
		White,
		Red,
		Green,
		Blue,
		Yellow,
		Magenta,
		Cyan,
		Transparent
	};

	// Color class
	class Color
	{
	public:

		// Constructor which takes in color values for rgba.
		Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

		// Determines the color the user chosen with if statements
		// Returns that color in const sf::Color.
		static const sf::Color& getColor(t2d::Colors col);
		
		// Red component
		uint8_t _r;
		// Green component
		uint8_t _g;
		// Blue component
		uint8_t _b;
		// Alpha component
		uint8_t _a;
	private:
		
		// Unused default constructor
		Color() { }
		
	};
}
#endif

