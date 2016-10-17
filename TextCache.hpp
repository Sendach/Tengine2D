#pragma once
#ifndef TEXTCACHE_HPP
#define TEXTCACHE_HPP

// Engine Classes.
#include "CreateText.hpp"

// C++ Standard Library.
#include <string>
#include <map>
#include <memory>



// A static class that uses the class CreateText to create a text, which it then saves.
class TextCache
{

public:

	// Default constructor.
	TextCache() { }

	// Uses CreateText to create a text, and if done successfully it saves it in a std::map.
	void setupText(const std::string textName, const std::string path);
	// Returns the text that is bound to the user-given name.
	Text& getText(const std::string textName);

private:
	// Saves and binds a user-given name to the created text.
	std::map<std::string, Text> m_Text;
	
	// The only instance of CreateText
	CreateText m_CreateText;
};

#endif
