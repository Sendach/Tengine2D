#pragma once
#ifndef TEXTCACHE_HPP
#define TEXTCACHE_HPP

// Classes.
#include "CreateText.hpp"

// C++ Standard Library.
#include <string>
#include <map>
#include <memory>

namespace t2d {

	// A static class that uses the class CreateText to create a text, which it then saves.
	class TextCache
	{

	public:

		// Uses CreateText to create a text, and if done successfully it saves it in a std::map.
		static void setupText(const std::string textName, const std::string path);
		// Returns the text that is bound to the user-given name.
		static t2d::Text& getText(const std::string textName);

	private:

		// Unused Default Constructor.
		TextCache() { }
		// Saves and binds a user-given name to the created text.
		static std::map<std::string, t2d::Text> _text;
		// The text that is created in CreateText is temporarily saved in this variable before placed in the std::map.
		static t2d::Text text;

	};
}
#endif
