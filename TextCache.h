#ifndef TEXTCACHE_HPP
#define TEXTCACHE_HPP

#include <string>
#include <map>

#include "CreateText.h"

#include <memory>

class TextCache
{
public:
	TextCache() { _createText = std::make_shared<CreateText>(); }
	
	void setupText(const std::string textName, const std::string path);
	sf::Text& getText(const std::string textName);
private:
	std::map<std::string, sf::Text> texts;

	sf::Text text;

	std::shared_ptr<CreateText> _createText;
};
#endif
