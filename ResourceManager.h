#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

// Classes
#include "SpriteCache.h"
#include "TextCache.h"

// C++ Standard Library
#include <string>

namespace t2d {

	// A class which The user can use to get their texts & sprites.
	class ResourceManager
	{
	public:

		// Returns the sprite bound to the user-given name.
		static sf::Sprite& getSprite(std::string spriteName);
		// Returns the text bound to the user-given name.
		static sf::Text& getText(std::string textName);
		// Creates a sprite using TextureCache.h & CreateSprite.h
		static void createSprite(const std::string textureName, const std::string spritePath);
		// Creates a (cropped)sprite using SpriteCache.h & CreateSprite.h
		static void createSpriteCI(const std::string textureName, std::string spritePath, sf::IntRect cropped);
		// Creates a text using TextCache.h & CreateText.h
		static void createText(const std::string textName, const std::string fontPath);

	private:

		// Unused Default Constructor.
		ResourceManager() {}

	};
}
#endif
