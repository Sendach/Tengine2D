#pragma once
#ifndef DRAW_HPP
#define DRAW_HPP

// SFML.
#include <SFML\Graphics\RenderWindow.hpp>
#include <SFML\Graphics\Drawable.hpp>

// Engine Classes
#include "Sprite.hpp"
#include "Text.hpp"


// A static class that Window.hpp uses to draw.
class Draw
{
public:

	// Draws user-given sprite. Using the Engine defined sprite.
	static void draw(sf::RenderWindow& window, const Sprite& sprite);
	// Draws user-given text. Using the engine defined Text.
	static void draw(sf::RenderWindow& window, const Text& text);

private:

	// Unused Default Constructor.
	Draw() {}
};


#endif
