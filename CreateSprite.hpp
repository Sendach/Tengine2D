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

	// Default constructor
	CreateSprite() { }

	// Creates a sprite and loads in the entire image.
	Sprite createSprite(const std::string textureName, const std::string path);

	// Creates a sprite and loads in a smaller part of the image, a cropped version. CI = Cropped Image.
	Sprite createSpriteCI(const std::string textureName, const std::string path, sf::IntRect cropped);

private:

	// A map which is used to bind and saves a user-given name to a new texture.
	std::map< std::string, Texture> _texture;
};

#endif
