#include "SpriteCache.h"
#include <iostream>

void SpriteCache::setupSpriteRect(const std::string name, const std::string path, sf::IntRect rect)
{
	sprite = this->_loadSprite->loadSpriteRect(name, path, rect);

	auto spriteIterator = sprites.find(name); // Iterates through all sprites to check if the name the user has chosen for the sprite is already taken.

	if (spriteIterator == sprites.end()) // This means that it does not already exist, so we can go ahead and create it.
	{
		sprites.insert(make_pair(name, sprite));
	}
	else
	{
		std::cout << "Error: Sprite With That Name Already Exists!" << std::endl;
	}
}

void SpriteCache::defaultSpriteSetup(const std::string name, const std::string path)
{
	sprite = this->_loadSprite->defaultSpriteLoad(name, path);

	auto spriteIterator = sprites.find(name); // Iterates through all sprites to check if the name the user has chosen for the sprite is already taken.

	if (spriteIterator == sprites.end()) // This means that it does not already exist, so we can go ahead and create it.
	{
		sprites.insert(make_pair(name, sprite));
	}
	else
	{
		std::cout << "Error: Sprite With That Name Already Exists!" << std::endl;
	}
}

sf::Sprite& SpriteCache::getSprite(std::string spriteName)
{
	return sprites[spriteName];
}