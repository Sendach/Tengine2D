#pragma once
#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

// Engine Classes
#include "SpriteCache.hpp"
#include "TextCache.hpp"

// C++ Standard Library
#include <string>

namespace t2d {

	// A singleton class which The user can use to Create Sprites & texts, as well as to get them.
	class ResourceManager
	{
	public:

		// Returns the sprite bound to the user-given name.
		static Sprite& getSprite(std::string spriteName);
		// Returns the text bound to the user-given name.
		static Text& getText(std::string textName);
		// Creates a sprite using TextureCache.h & CreateSprite.h
		static Sprite& createSprite(const std::string textureName, const std::string spritePath);
		// Creates a (cropped)sprite using SpriteCache.h & CreateSprite.h
		static Sprite& createSpriteCI(const std::string textureName, std::string spritePath, sf::IntRect cropped);
		// Creates a text using TextCache.h & CreateText.h
		static Text& createText(const std::string textName, const std::string fontPath);

	private:

		// Unused Default Constructor.
		ResourceManager() {}
	};
}
#endif
