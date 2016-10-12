#include "CreateText.h"

#include <iostream>

sf::Text& CreateText::createText(const std::string name, const std::string fontPath)
{
	_font[name] = sf::Font();
	if (!_font[name].loadFromFile(fontPath))
	{
		std::cout << "Error Loading Font from Path: " << fontPath << std::endl;
	}
	else
	{
		text.setFont(_font[name]);
	}

	return this->text;
}