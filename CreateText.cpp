#include "CreateText.h"

// C++ Standard Library.
#include <iostream>

// Initialize Static variables
std::map<std::string, sf::Font> CreateText::_font;
sf::Text CreateText::_text;

// Creates a text & font.
sf::Text& CreateText::createText(const std::string textName, const std::string fontPath)
{
	// Uses our std::map to bind a user-given name to a new font.
	_font[textName] = sf::Font();
	// Loads the font from the user-given path.
	if (!_font[textName].loadFromFile(fontPath))
	{
		// Font failed to load.
		std::cout << "Error Loading Font from Path: " << fontPath << std::endl;
	}
	else
	{	// Font was successfully loaded.
		_text.setFont(_font[textName]);
	}

	// Return the sf::Text variable that this font is set to.
	return _text;
}
