#pragma once
#ifndef DRAW_HPP
#define DRAW_HPP

// SFML.
#include <SFML\Graphics\RenderWindow.hpp>
#include <SFML\Graphics\Drawable.hpp>
#include <SFML\Graphics\RectangleShape.hpp>
// Engine Classes
#include "Sprite.hpp"
#include "Text.hpp"
#include "Rectangle.hpp"

// A static class that Window.hpp uses to draw.
class Draw 
{
public:

	// Draws user-given sprite. Using the Engine defined sprite.
	static void draw(sf::RenderWindow& window, Sprite& sprite);
	// Draws user-given text. Using the engine defined Text.
	static void draw(sf::RenderWindow& window, Text& text);
	// Draws a rectangle to the screen
	static void draw(sf::RenderWindow& window, Rectangle& rect);
	
private:

	// Unused Default Constructor.
	Draw() {}
};


#endif
