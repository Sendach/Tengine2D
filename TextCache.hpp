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

	// Uses CreateText to create a text, and if done successfully it saves it in a std::map.
	static void setupText(const std::string textName, const std::string path);
	// Returns the text that is bound to the user-given name.
	static Text& getText(const std::string textName);

private:

	// Unused Default Constructor.
	TextCache() { }
};

#endif
