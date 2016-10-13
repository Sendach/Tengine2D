#include "CreateSprite.h"

// C++ Standard Library
#include <iostream>
namespace t2d {

	// Creates a sprite and loads in the entire image.
	sf::Sprite& CreateSprite::createSprite(const std::string textureName, const std::string path)
	{
		// Uses our std::map to bind a user-given name to a new texture.
		_texture[textureName] = sf::Texture();
		// Loads in the image/sprite from the user-given path.
		if (!_texture[textureName].loadFromFile(path))
		{
			// Image failed to load.
			std::cout << "Error Loading Image From Path: " << path << std::endl;
		}
		else
		{	// Image was successfully loaded.
			sprite.setTexture(_texture[textureName]);
		}

		// Return the sf::Sprite variable that this image was set to.
		return sprite;
	}

	// Creates a sprite and loads in a smaller part of the image, a cropped version. CI = Cropped Image.
	sf::Sprite CreateSprite::createSpriteCI(const std::string textureName, std::string path, sf::IntRect cropped)
	{
		// Uses our std::map to bind a user-given name to a new texture.
		_texture[textureName] = sf::Texture();
		// Loads in the image/sprite with a from the user-given path. Cropping the image using sf::IntRect 
		if (!_texture[textureName].loadFromFile(path, cropped))
		{
			// Image failed to load.
			std::cout << "Error Loading (Cropped)Image From Path: " << path << std::endl;
		}
		else
		{	// Image was successfully loaded.
			sprite.setTexture(_texture[textureName]);
		}

		// Return the sf::Sprite variable that this image was set to.
		return sprite;
	}
}