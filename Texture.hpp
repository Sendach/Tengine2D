#pragma once
#ifndef TEXTURE_HPP
#define TEXTURE_HPP

// SFML.
#include <SFML\Graphics\Texture.hpp>

// C++ Standard Library
#include <string>

// Classes
#include "Vector2.hpp"

namespace t2d {

	// A texture class
	class Texture
	{
	public:

		// Default Constructor
		Texture() {  }
		
		// Loads a texture from a user-given path.
		bool load(const std::string texturePath);

		// The actual Texture
		sf::Texture _texture;
	private:
		// Size in width.
		float x;
		// Size in height.
		float y;
	};
}
#endif

