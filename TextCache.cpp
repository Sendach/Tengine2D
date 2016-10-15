#include "TextCache.hpp"

// C++ Standard Library
#include <iostream>

// Initialize Static variables.
std::map<std::string, Text> TextCache::_text;
Text TextCache::text;

// Uses CreateText to create a text, and if done successfully it saves it in a std::map.
void TextCache::setupText(const std::string textName, const std::string fontPath)
{
	// Saves the created text.
	text = CreateText::createText(textName, fontPath);
	// / Iterates through all texts to check if the user-given name for the text is already taken.
	auto textIterator = _text.find(textName);

	// If the user-given name for the text does not previously exist. We Create it
	if (textIterator == _text.end())
	{
		// Successfully binded the user-given name to the text.
		_text.insert(make_pair(textName, text));
	}
	else
	{	// User-given name for the text already exists.
		std::cout << "Error: Text With That Name Already Exists!" << std::endl;
	}
}

// Returns the text that is bound to the user-given name.
Text& TextCache::getText(const std::string textName)
{
	// Returns the text bound to the user-given name.
	return _text[textName];
}

