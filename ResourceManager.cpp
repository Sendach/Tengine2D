#include "ResourceManager.hpp"

namespace t2d {

static SpriteCache m_SpriteCache;
static TextCache m_TextCache;


	// Creates a sprite using TextureCache.h & CreateSprite.h
	Sprite& ResourceManager::createSprite(const std::string textureName, const std::string spritePath)
	{
		m_SpriteCache.setupSprite(textureName, spritePath);
		return m_SpriteCache.getSprite(textureName);
	}

	// Creates a (cropped)sprite using SpriteCache.h & CreateSprite.h
	Sprite& ResourceManager::createSpriteCI(const std::string textureName, std::string spritePath, sf::IntRect cropped)
	{
		m_SpriteCache.setupSpriteCI(textureName, spritePath, cropped);
		return m_SpriteCache.getSprite(textureName);
	}

	// Creates a text using TextCache.h & CreateText.h
	Text& ResourceManager::createText(const std::string textName, const std::string fontPath)
	{
		m_TextCache.setupText(textName, fontPath);
		return m_TextCache.getText(textName);
	}

	// Returns the sprite bound to the user-given name.
	Sprite& ResourceManager::getSprite(std::string spriteName)
	{
		return m_SpriteCache.getSprite(spriteName);
	}

	// Returns the text bound to the user-given name.
	Text& ResourceManager::getText(std::string textName)
	{
		return m_TextCache.getText(textName);
	}
}