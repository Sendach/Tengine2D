#include "ResourceManager.h"

namespace t2d {

	// Creates a sprite using TextureCache.h & CreateSprite.h
	void ResourceManager::createSprite(const std::string textureName, const std::string spritePath)
	{
		SpriteCache::setupSprite(textureName, spritePath);
	}

	// Creates a (cropped)sprite using SpriteCache.h & CreateSprite.h
	void ResourceManager::createSpriteCI(const std::string textureName, std::string spritePath, sf::IntRect cropped)
	{
		SpriteCache::setupSpriteCI(textureName, spritePath, cropped);
	}

	// Creates a text using TextCache.h & CreateText.h
	void ResourceManager::createText(const std::string textName, const std::string fontPath)
	{
		TextCache::setupText(textName, fontPath);
	}

	// Returns the sprite bound to the user-given name.
	t2d::Sprite& ResourceManager::getSprite(std::string spriteName)
	{
		return SpriteCache::getSprite(spriteName);
	}

	// Returns the text bound to the user-given name.
	t2d::Text& ResourceManager::getText(std::string textName)
	{
		return TextCache::getText(textName);
	}
}