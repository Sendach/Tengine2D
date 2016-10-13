#ifndef CREATETEXT_HPP
#define CREATETEXT_HPP

// SFML
#include <SFML\Graphics\Text.hpp>

#include <string>
#include <map>

class CreateText
{
public:
	sf::Text& createText(const std::string name, const std::string path);

private:
	CreateText() {}
	std::map<std::string, sf::Font> _font;
	sf::Text _text;


};
#endif
