#include "SpriteCache.hpp"
// C++ Standard Library
#include <iostream>

// Uses CreateSprite to create a sprite, and if done successfully it saves it in a std::map.
void SpriteCache::setupSprite(const std::string spriteName, const std::string path)
{
	// Saves the created sprite.
	Sprite sprite = m_CreateSprite.createSprite(spriteName, path);
	// / Iterates through all sprites to check if the user-given name for the sprite is already taken.
	auto spriteIterator = m_Sprites.find(spriteName); // Iterates through all sprites to check if the name the user has chosen for the sprite is already taken.

	// If the user-given name for the sprite does not previously exist. We Create it
	if (spriteIterator == m_Sprites.end())
	{
		// Successfully binded the user-given name to the sprite.
		m_Sprites.insert(make_pair(spriteName, sprite));
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
	Sprite sprite = m_CreateSprite.createSpriteCI(spriteName, path, cropped);
	// / Iterates through all sprites to check if the user-given name for the sprite is already taken.
	auto spriteIterator = m_Sprites.find(spriteName);

	// If the user-given name for the sprite does not previously exist. We Create it
	if (spriteIterator == m_Sprites.end()) // This means that it does not already exist, so we can go ahead and create it.
	{
		// Successfully binded the user-given name to the sprite.
		m_Sprites.insert(make_pair(spriteName, sprite));
	}
	else
	{	// User-given name for the sprite already exists.
		std::cout << "Error: Sprite With That Name Already Exists!" << std::endl;
	}
}

// Returns the sprite that is bound to the user-given name.
Sprite& SpriteCache::getSprite(std::string spriteName)
{
	return m_Sprites[spriteName];
}

