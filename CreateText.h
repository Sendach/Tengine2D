#ifndef CREATETEXT_HPP
#define CREATETEXT_HPP

// SFML.

// C++ Standard Library.
#include <string>
#include <map>

// Classes
#include "Text.h"
#include "Font.h"

// A static class that creates and loads in Text & Font.
class CreateText
{

public:

	// Creates a text & font.
	static t2d::Text& createText(const std::string textName, const std::string fontPath);

private:

	// Unused Default Constructor.
	CreateText() {}
	// // A map which is used to bind and saves a user-given name to a new font.
	static std::map<std::string, t2d::Font> _font;
	// When the Text is created it is bound to this variable, which is then set to put in the TextureCache.
	static t2d::Text _text;


};

#endif
