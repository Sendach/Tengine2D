#include "Draw.h"

// Draws everything on the screen.
void Draw::draw(sf::RenderWindow& window, const sf::Drawable& drawable)
{
	window.draw(drawable);
}

// Draws user-given sprite. Using the Engine defined sprite.
void Draw::draw(sf::RenderWindow& window, const t2d::Sprite& sprite)
{
	window.draw(sprite._sprite);
}

// Draws user-given text. Using the engine defined Text.
void Draw::draw(sf::RenderWindow& window, const t2d::Text& text)
{
	window.draw(text._text);
}