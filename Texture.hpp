#pragma once
#ifndef TEXTURE_HPP
#define TEXTURE_HPP

// SFML.
#include <SFML\Graphics\Texture.hpp>

// C++ Standard Library
#include <string>

// Engine Classes
#include "Vector2.hpp"


// A texture class
class Texture
{
public:

	// Default Constructor
	Texture() {  }

	// Loads a texture from a user-given path.
	bool load(const std::string texturePath);

	// The actual Texture
	sf::Texture m_Texture;

private:
	// Size in width.
	float m_SizeX;
	// Size in height.
	float m_SizeY;
};

#endif

