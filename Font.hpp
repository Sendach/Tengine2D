#pragma once
#ifndef FONT_HPP
#define FONT_HPP

// SFML. 
#include <SFML\Graphics\Font.hpp>

// C++ Standard Library
#include <string>


namespace t2d {

	// Font class.
	class Font
	{
	public:

		// Default constructor
		Font() { }

		// Loads a font from a user-given path.
		bool load(const std::string fontPath);

		// The actual font
		sf::Font _font;

	};
}
#endif
