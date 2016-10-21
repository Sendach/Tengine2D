#include "Draw.hpp"

// Draws user-given sprite. Using the Engine defined sprite.
void Draw::draw(sf::RenderWindow& window,  Sprite& sprite) 
{
	window.draw(sprite.getsprite());
	
}

// Draws user-given text. Using the engine defined Text.
void Draw::draw(sf::RenderWindow& window, Text& text)
{
	window.draw(text.getText());
}

void Draw::draw(sf::RenderWindow& window, Rectangle& rect)
{
	window.draw(rect.getRectangle());
}