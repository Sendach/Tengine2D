#include "Color.hpp"

// C++ Standard Library
#include <iostream>

namespace t2d {

// Initialize static variables - Predefined sf::colors.
const Color Color::Black(sf::Color::Black);       
const Color Color::White(sf::Color::White);       
const Color Color::Red(sf::Color::Red);         
const Color Color::Green(sf::Color::Green);      
const Color Color::Blue(sf::Color::Blue);       
const Color Color::Yellow(sf::Color::Yellow);      
const Color Color::Magenta(sf::Color::Magenta);     
const Color Color::Cyan(sf::Color::Cyan);        
const Color Color::Transparent(sf::Color::Transparent); 

	// Constructor used to define Colors using the pre-defined sf::Colors
	Color::Color(const sf::Color color)
	{
		_r = color.r;
		_g = color.g;
		_b = color.b;
		_a = color.a;
	}

	// Constructor which takes in color values for rgba.
	Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
	{
		_r = r;
		_g = g;
		_b = b;
		_a = a;
	}

	// Overloaded== operator used to compare user-given color, using The Engine's Color class. To pre-defined sf::colors.
	bool operator== (const t2d::Color& color, const sf::Color& sfcolor)
	{
		if (color._r == sfcolor.r && color._g == sfcolor.g && color._b == sfcolor.b && color._a == sfcolor.a)
		{
			return true;
		}
		return false;
	}

	// Determines the color the user chosen with if statements
	// Returns that color in const sf::Color.
	const sf::Color& Color::getColor(const t2d::Color color)
	{
		if (color == sf::Color::Black)
			return sf::Color::Black;
		else if (color == sf::Color::White)
			return sf::Color::White;
		else if (color == sf::Color::Red)
			return sf::Color::Red;
		else if (color == sf::Color::Green)
			return sf::Color::Green;
		else if (color == sf::Color::Blue)
			return sf::Color::Blue;
		else if (color == sf::Color::Yellow)
			return sf::Color::Yellow;
		else if (color == sf::Color::Magenta)
			return sf::Color::Magenta;
		else if (color == sf::Color::Cyan)
			return sf::Color::Cyan;
		else if (color == sf::Color::Transparent)
			return sf::Color::Transparent;

		return sf::Color::Red;
	}
}