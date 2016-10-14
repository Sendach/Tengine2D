#ifndef CREATETEXT_HPP
#define CREATETEXT_HPP

// SFML.
#include <SFML\Graphics\Text.hpp>
#include <SFML\Graphics\Font.hpp>

// C++ Standard Library.
#include <string>
#include <map>

// A static class that creates and loads in Text & Font.
class CreateText
{

public:

	// Creates a text & font.
	static sf::Text& createText(const std::string textName, const std::string path);

private:

	// Unused Default Constructor.
	CreateText() {}
	// // A map which is used to bind and saves a user-given name to a new font.
	static std::map<std::string, sf::Font> _font;
	// When the Text is created it is bound to this variable, which is then set to put in the TextureCache.
	static sf::Text _text;


};

#endif
