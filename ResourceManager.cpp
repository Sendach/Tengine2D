#include "ResourceManager.hpp"

namespace t2d {

	// Creates a sprite using TextureCache.h & CreateSprite.h
	Sprite& ResourceManager::createSprite(const std::string textureName, const std::string spritePath)
	{
		SpriteCache::setupSprite(textureName, spritePath);
		return SpriteCache::getSprite(textureName);
	}

	// Creates a (cropped)sprite using SpriteCache.h & CreateSprite.h
	Sprite& ResourceManager::createSpriteCI(const std::string textureName, std::string spritePath, sf::IntRect cropped)
	{
		SpriteCache::setupSpriteCI(textureName, spritePath, cropped);
		return SpriteCache::getSprite(textureName);
	}

	// Creates a text using TextCache.h & CreateText.h
	Text& ResourceManager::createText(const std::string textName, const std::string fontPath)
	{
		TextCache::setupText(textName, fontPath);
		return TextCache::getText(textName);
	}

	// Returns the sprite bound to the user-given name.
	Sprite& ResourceManager::getSprite(std::string spriteName)
	{
		return SpriteCache::getSprite(spriteName);
	}

	// Returns the text bound to the user-given name.
	Text& ResourceManager::getText(std::string textName)
	{
		return TextCache::getText(textName);
	}
}