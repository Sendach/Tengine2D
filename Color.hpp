#pragma once
#ifndef COLOR_HPP
#define COLOR_HPP

// SFML.
#include <SFML\Graphics\Color.hpp>

// C++ Standard Library
#include <cstdint> // Used for the type uint8_t. Which is an 8 bit integer, range 0 to 255.

namespace t2d {

	// Color class
	class Color
	{
	public:

		// Constructor which takes in color values for rgba.
		Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255);
		// Constructor used to define Colors using the pre-defined sf::Colors
		Color::Color(const sf::Color color);

		// Overloaded== operator used to compare user-given color, using The Engine's Color class. To pre-defined sf::colors.
		friend bool operator== (const t2d::Color& color, const t2d::Color& sfcolor);
		

		// Determines the color the user chosen with if statements
		// Returns that color in const sf::Color.
		static const sf::Color& getColor(t2d::Color color);
		
		// Red component
		uint8_t m_R;
		// Green component
		uint8_t m_G;
		// Blue component
		uint8_t m_B;
		// Alpha component
		uint8_t m_A;

		// All of the colors the user can use.
		static const Color Black;       
		static const Color White;       
		static const Color Red;         
		static const Color Green;       
		static const Color Blue;        
		static const Color Yellow;      
		static const Color Magenta;     
		static const Color Cyan;        
		static const Color Transparent; 

	private:
		
		// Unused default constructor
		Color() { }
	};
}
#endif

