#include "CreateText.h"

// C++ Standard Library.
#include <iostream>

namespace t2d {

	// Creates a text & font.
	sf::Text& CreateText::createText(const std::string name, const std::string fontPath)
	{
		// Uses our std::map to bind a user-given name to a new font.
		_font[name] = sf::Font();
		// Loads the font from the user-given path.
		if (!_font[name].loadFromFile(fontPath))
		{
			// Font failed to load.
			std::cout << "Error Loading Font from Path: " << fontPath << std::endl;
		}
		else
		{	// Font was successfully loaded.
			_text.setFont(_font[name]);
		}

		// Return the sf::Text variable that this font is set to.
		return _text;
	}
}