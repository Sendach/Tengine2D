#include "CreateSprite.h"

#include <iostream>

sf::Sprite& CreateSprite::defaultSpriteLoad(const std::string name, const std::string path)
{
	_texture[name] = sf::Texture();
	if (!_texture[name].loadFromFile(path))
	{
		std::cout << "Error Loading Image From Path: " << path << std::endl;
	}
	else
	{
		sprite.setTexture(_texture[name]);
	}

	return this->sprite;
}

sf::Sprite CreateSprite::loadSpriteRect(const std::string name, std::string path, sf::IntRect rect)
{
	_texture[name] = sf::Texture();
	if (!_texture[name].loadFromFile(path, rect))
	{
		std::cout << "Error Loading Image From Path: " << path << std::endl;
	}
	else
	{
		sprite.setTexture(_texture[name]);
	}
	
	return this->sprite;
}