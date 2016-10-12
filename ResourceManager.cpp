#include "ResourceManager.h"

sf::Sprite& ResourceManager::getSprite(std::string spriteName)
{
	return this->spriteCache.getSprite(spriteName);
}