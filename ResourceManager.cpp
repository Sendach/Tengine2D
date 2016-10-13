#include "ResourceManager.h"

namespace t2d {

	//
	void ResourceManager::createSprite(const std::string textureName, const std::string spritePath)
	{
		SpriteCache::setupSprite(textureName, spritePath);
	}
	//
	void ResourceManager::createSpriteCI(const std::string textureName, std::string spritePath, sf::IntRect cropped)
	{
		SpriteCache::setupSpriteCI(textureName, spritePath, cropped);
	}
	//
	void ResourceManager::createText(const std::string textName, const std::string fontPath)
	{
		TextCache::setupText(textName, fontPath);
	}

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