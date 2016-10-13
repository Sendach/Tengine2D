#include "ResourceManager.h"

namespace t2d {

	// Returns the sprite bound to the user-given name.
	sf::Sprite& ResourceManager::getSprite(std::string spriteName)
	{
		return SpriteCache::getSprite(spriteName);
	}

	// Returns the text bound to the user-given name.
	sf::Text& ResourceManager::getText(std::string textName)
	{
		return TextCache::getText(textName);
	}
}