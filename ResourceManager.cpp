#include "ResourceManager.hpp"

namespace t2d {

static SpriteCache _spriteCache;
static TextCache _textCache;


	// Creates a sprite using TextureCache.h & CreateSprite.h
	Sprite& ResourceManager::createSprite(const std::string textureName, const std::string spritePath)
	{
		_spriteCache.setupSprite(textureName, spritePath);
		return _spriteCache.getSprite(textureName);
	}

	// Creates a (cropped)sprite using SpriteCache.h & CreateSprite.h
	Sprite& ResourceManager::createSpriteCI(const std::string textureName, std::string spritePath, sf::IntRect cropped)
	{
		_spriteCache.setupSpriteCI(textureName, spritePath, cropped);
		return _spriteCache.getSprite(textureName);
	}

	// Creates a text using TextCache.h & CreateText.h
	Text& ResourceManager::createText(const std::string textName, const std::string fontPath)
	{
		_textCache.setupText(textName, fontPath);
		return _textCache.getText(textName);
	}

	// Returns the sprite bound to the user-given name.
	Sprite& ResourceManager::getSprite(std::string spriteName)
	{
		return _spriteCache.getSprite(spriteName);
	}

	// Returns the text bound to the user-given name.
	Text& ResourceManager::getText(std::string textName)
	{
		return _textCache.getText(textName);
	}
}