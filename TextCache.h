#ifndef TEXTCACHE_HPP
#define TEXTCACHE_HPP

// Classes.
#include "CreateText.h"

// C++ Standard Library.
#include <string>
#include <map>
#include <memory>

// A static class that uses the class CreateText to create a text, which it then saves.
class TextCache
{

public:

	// Uses CreateText to create a text, and if done successfully it saves it in a std::map.
	static void setupText(const std::string textName, const std::string path);
	// Returns the text that is bound to the user-given name.
	static sf::Text& getText(const std::string textName);

private:

	// Unused Default Constructor.
	TextCache() { }
	// Saves and binds a user-given name to the created text.
	static std::map<std::string, sf::Text> _text;
	// The text that is created in CreateText is temporarily saved in this variable before placed in the std::map.
	static sf::Text text;

};

#endif
