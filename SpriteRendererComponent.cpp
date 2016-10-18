#include "SpriteRendererComponent.hpp"

// Engine Classes
#include "ResourceManager.hpp"

SpriteRendererComponent::SpriteRendererComponent(std::string path, std::string name)
{
	m_Path = path;
	m_SpriteName = name;
	m_ComponentName = "Sprite Renderer";
	t2d::ResourceManager::createSprite(name, path);
}

