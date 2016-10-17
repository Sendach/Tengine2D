#include "CreateSprite.hpp"
// C++ Standard Library
#include <iostream>



// Creates a sprite and loads in the entire image.
Sprite CreateSprite::createSprite(const std::string textureName, const std::string texturePath)
{
	// Create sprite
	Sprite _sprite;

	// Uses our std::map to bind a user-given name to a new texture.
	m_Texture[textureName] = Texture();
	// Loads in the image/sprite from the user-given path.
	if (!m_Texture[textureName].load(texturePath))
	{
		// Image failed to load.
		std::cout << "Error Loading Image From Path: " << texturePath << std::endl;
	}
	else
	{	// Image was successfully loaded.
		_sprite.setTexture(m_Texture[textureName]);
	}

	// Return the sf::Sprite variable that this image was set to.
	return _sprite;
}

/////////////////////////////////////////////////////////////////////////////////////////////
////// CREATE NECESSARY CLASSES, SUCH AS INTRECT, SO WE DON'T HAVE TO USE SF::INTRECT //////
///////////////////////////////////////////////////////////////////////////////////////////

// Creates a sprite and loads in a smaller part of the image, a cropped version. CI = Cropped Image.
Sprite CreateSprite::createSpriteCI(const std::string textureName, std::string texturePath, sf::IntRect cropped)
{
	// Create sprite
	Sprite _sprite;

	// Uses our std::map to bind a user-given name to a new texture.
	m_Texture[textureName] = Texture();
	// Loads in the image/sprite with a from the user-given path. Cropping the image using sf::IntRect 
	if (!m_Texture[textureName].load(texturePath))
	{
		// Image failed to load.
		std::cout << "Error Loading (Cropped)Image From Path: " << texturePath << std::endl;
	}
	else
	{	// Image was successfully loaded.
		_sprite.setTexture(m_Texture[textureName]);
	}

	// Return the sf::Sprite variable that this image was set to.
	return _sprite;
}

