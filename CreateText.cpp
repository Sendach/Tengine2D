#include "CreateText.hpp"

// C++ Standard Library.
#include <iostream>

// Creates a text & font.
Text CreateText::createText(const std::string textName, const std::string fontPath)
{
	// Create the text
	Text _text;
	// Uses our std::map to bind a user-given name to a new font.
	m_Font[textName] = t2d::Font();
	// Loads the font from the user-given path.
	if (!m_Font[textName].load(fontPath))
	{
		// Font failed to load.
		std::cout << "Error Loading Font from Path: " << fontPath << std::endl;
	}
	else
	{	// Font was successfully loaded.
		_text.setFont(m_Font[textName]);
	}

	// Return the sf::Text variable that this font is set to.
	return _text;
}

