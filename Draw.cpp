#include "Draw.hpp"

// Draws user-given sprite. Using the Engine defined sprite.
void Draw::draw(sf::RenderWindow& window,  Sprite& sprite) 
{
	sprite.draw(window, sprite);
}

// Draws user-given text. Using the engine defined Text.
void Draw::draw(sf::RenderWindow& window, Text& text)
{
	text.draw(window, text);
}
