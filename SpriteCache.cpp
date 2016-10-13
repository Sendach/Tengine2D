#include "SpriteCache.h"

// C++ Standard Library
#include <iostream>

namespace t2d {

	// Uses CreateSprite to create a sprite, and if done successfully it saves it in a std::map.
	void SpriteCache::setupSprite(const std::string spriteName, const std::string path)
	{
		// Saves the created sprite.
		sprite = CreateSprite::createSprite(spriteName, path);
		// / Iterates through all sprites to check if the user-given name for the sprite is already taken.
		auto spriteIterator = sprites.find(spriteName); // Iterates through all sprites to check if the name the user has chosen for the sprite is already taken.

		// If the user-given name for the sprite does not previously exist. We Create it
		if (spriteIterator == sprites.end())
		{
			// Successfully binded the user-given name to the sprite.
			sprites.insert(make_pair(spriteName, sprite));
		}
		else
		{	// User-given name for the sprite already exists.
			std::cout << "Error: Sprite With That Name Already Exists!" << std::endl;
		}
	}

	// Uses CreateSprite to create a cropped sprite, and if done successfully it saves it in a std::map.
	void SpriteCache::setupSpriteCI(const std::string spriteName, const std::string path, sf::IntRect cropped)
	{
		// Saves the created sprite.
		sprite = CreateSprite::createSpriteCI(spriteName, path, cropped);
		// / Iterates through all sprites to check if the user-given name for the sprite is already taken.
		auto spriteIterator = sprites.find(spriteName);

		// If the user-given name for the sprite does not previously exist. We Create it
		if (spriteIterator == sprites.end()) // This means that it does not already exist, so we can go ahead and create it.
		{
			// Successfully binded the user-given name to the sprite.
			sprites.insert(make_pair(spriteName, sprite));
		}
		else
		{	// User-given name for the sprite already exists.
			std::cout << "Error: Sprite With That Name Already Exists!" << std::endl;
		}
	}

	// Returns the sprite that is bound to the user-given name.
	sf::Sprite& SpriteCache::getSprite(std::string spriteName)
	{
		return sprites[spriteName];
	}
}