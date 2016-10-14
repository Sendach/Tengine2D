#ifndef DRAW_HPP
#define DRAW_HPP

// SFML.
#include <SFML\Graphics\RenderWindow.hpp>
#include <SFML\Graphics\Drawable.hpp>

// Classes
#include "Sprite.h"
#include "Text.h"
// A static class that Window.h uses to draw.
class Draw
{
public:

	// Draws A SFML sprite/text on the screen.
	static void draw(sf::RenderWindow& window, const sf::Drawable& drawable);
	// Draws user-given sprite. Using the Engine defined sprite.
	static void draw(sf::RenderWindow& window, const t2d::Sprite& sprite);
	// Draws user-given text. Using the engine defined Text.
	static void draw(sf::RenderWindow& window, const t2d::Text& text);

private:

	// Unused Default Constructor.
	Draw() {}
};


#endif
