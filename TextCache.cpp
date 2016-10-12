#include "TextCache.h"

#include <iostream>

void TextCache::setupText(const std::string textName, const std::string fontPath)
{
	text = this->_createText->createText(textName, fontPath);
	
	auto textIterator = texts.find(textName);

	if (textIterator == texts.end()) // This means that it does not already exist, so we can go ahead and create it.
	{
		texts.insert(make_pair(textName, text));
	}
	else
	{
		std::cout << "Error: Sprite With That Name Already Exists!" << std::endl;
	}
}

sf::Text& TextCache::getText(const std::string textName)
{
	return texts[textName];
}