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

	// Creates a text & font.
	static Text createText(const std::string textName, const std::string fontPath);

private:

	// Unused Default Constructor.
	CreateText() {}
	
};

#endif
