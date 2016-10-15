#include "Texture.hpp"

// Loads a texture from a user-given path.
bool Texture::load(const std::string texturePath)
{
	return _texture.loadFromFile(texturePath);
}
