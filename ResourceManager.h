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

	private:

		// Unused Default Constructor.
		ResourceManager() {}

	};
}
#endif
