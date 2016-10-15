#pragma once
#ifndef CREATESPRITE_HPP
#define CREATESPRITE_HPP

// C++ Standard Library.
#include <string>
#include <map>

// Engine Classes
#include "Sprite.hpp"
#include "Texture.hpp"



// A static class that creates and loads in an image/sprite & Texture.
class CreateSprite
{

public:

	// Creates a sprite and loads in the entire image.
	static Sprite& createSprite(const std::string textureName, const std::string path);

	// Creates a sprite and loads in a smaller part of the image, a cropped version. CI = Cropped Image.
	static Sprite& createSpriteCI(const std::string textureName, const std::string path, sf::IntRect cropped);

private:

	// Unused Default constructor
	CreateSprite() {}
	// A map which is used to bind and saves a user-given name to a new texture.
	static std::map< std::string, Texture> _texture;
	// When the sprite is created it is bound to this variable, which is then set to put in the SpriteCache.
	static Sprite _sprite;

};

#endif
