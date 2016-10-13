#ifndef DRAW_HPP
#define DRAW_HPP

// SFML.
#include <SFML\Graphics\RenderWindow.hpp>
#include <SFML\Graphics\Sprite.hpp>

// A static class that Window.h uses to draw.
class Draw
{
public:

	// Draws everything on the screen.
	static void draw(sf::RenderWindow& window, sf::Sprite& sprite);

private:

	// Unused Default Constructor.
	Draw() {}
};


#endif
