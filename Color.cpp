#include "Color.hpp"

// C++ Standard Library
#include <iostream>

namespace t2d {

	Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
	{
		_r = r;
		_g = g;
		_b = b;
		_a = a;
	}

	// Determines the color the user chosen with if statements
	// Returns that color in const sf::Color.

	const sf::Color& Color::getColor(t2d::Colors color)
	{
		switch (color)
		{
		case t2d::Black:
			return sf::Color::Black;
			break;
		case t2d::White:
			return sf::Color::White;
			break;
		case t2d::Red:
			return sf::Color::Red;
			break;
		case t2d::Green:
			return sf::Color::Green;
			break;
		case t2d::Blue:
			return sf::Color::Blue;
			break;
		case t2d::Yellow:
			return sf::Color::Yellow;
			break;
		case t2d::Magenta:
			return sf::Color::Magenta;
			break;
		case t2d::Cyan:
			return sf::Color::Cyan;
			break;
		case t2d::Transparent:
			return sf::Color::Transparent;
			break;
		default:
			std::cout << "The Color You Picked Does Not Currently Exist!" << std::endl;
			break;
		}
	}
}


