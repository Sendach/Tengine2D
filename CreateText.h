#ifndef CREATETEXT_HPP
#define CREATETEXT_HPP

// SFML
#include <SFML\graphics.hpp>

#include <string>
#include <map>

class CreateText
{
public:
	CreateText() {}
	
	sf::Text& createText(const std::string name, const std::string path);

private:
	std::map<std::string, sf::Font> _font;
	sf::Text text;


};
#endif
