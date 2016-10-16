#pragma once
#ifndef CREATETEXT_HPP
#define CREATETEXT_HPP

// SFML.

// C++ Standard Library.
#include <string>
#include <map>

// Engine Classes
#include "Text.hpp"
#include "Font.hpp"

// A static class that creates and loads in Text & Font.
class CreateText
{

public:

	// Unused Default Constructor.
	CreateText() { }

	// Creates a text & font.
	Text createText(const std::string textName, const std::string fontPath);

private:

	
	
	// // A map which is used to bind and saves a user-given name to a new font.
	std::map<std::string, t2d::Font> _font;

};

#endif
