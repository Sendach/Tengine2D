#ifndef SPRITECACHE_HPP
#define SPRITECACHE_HPP

// Classes.
#include "CreateSprite.hpp"

// C++ Standard Library
#include <string>
#include <map>
#include <memory>

namespace t2d {
	// A static class that uses the class CreateSprite to create a sprite, which it then saves.
	class SpriteCache
	{

	public:

		// Uses CreateSprite to create a sprite, and if done successfully it saves it in a std::map.
		static void setupSprite(const std::string spriteName, const std::string path);
		// Uses CreateSprite to create a cropped sprite, and if done successfully it saves it in a std::map.
		static void setupSpriteCI(const std::string spriteName, const std::string path, sf::IntRect cropped);
		// Returns the sprite that is bound to the user-given name.
		static t2d::Sprite& getSprite(const std::string spriteName);

	private:

		// Unused Default Constructor.
		SpriteCache() { }
		// Saves and binds a user-given name to the created text.
		static std::map<std::string, t2d::Sprite> _sprite;
		// The sprite that is created in CreateSprite is temporarily saved in this variable before placed in the std::map.
		static t2d::Sprite sprite;

	};
}
#endif
