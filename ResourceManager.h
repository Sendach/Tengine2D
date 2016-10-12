#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

#include "SpriteCache.h"

#include <string>

class ResourceManager
{
public:
	ResourceManager() {}
	
	sf::Sprite& getSprite(std::string spriteName);

	SpriteCache spriteCache;
};
#endif
