#include "Draw.hpp"



// Draws user-given sprite. Using the Engine defined sprite.
void Draw::draw(sf::RenderWindow& window, const Sprite& sprite)
{
	window.draw(sprite._sprite);
}

// Draws user-given text. Using the engine defined Text.
void Draw::draw(sf::RenderWindow& window, const Text& text)
{
	window.draw(text._text);
}
