#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

#include "SpriteCache.h"
#include "TextCache.h"

#include <string>

class ResourceManager
{
public:
	ResourceManager() {}
	
	sf::Sprite& getSprite(std::string spriteName);
	sf::Text& getText(std::string textName);

	SpriteCache spriteCache;
	TextCache textCache;
};
#endif
