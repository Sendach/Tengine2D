#include "ResourceManager.h"

sf::Sprite& ResourceManager::getSprite(std::string spriteName)
{
	return this->spriteCache.getSprite(spriteName);
}
sf::Text& ResourceManager::getText(std::string textName)
{
	return this->textCache.getText(textName);
}