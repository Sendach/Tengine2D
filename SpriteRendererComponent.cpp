#include "SpriteRendererComponent.hpp"

// Engine Classes
#include "ResourceManager.hpp"

SpriteRendererComponent::SpriteRendererComponent(std::string path, std::string name)
{
	// Initialize Variables
	m_Path = path;
	m_SpriteName = name;
	m_ComponentName = "Sprite Renderer";

	// Load sprite with user-given name and path
	t2d::ResourceManager::createSprite(name, path);
}

void SpriteRendererComponent::update(const GameObject& gameObject, float delta)
{
	
}

const std::shared_ptr<Component>& SpriteRendererComponent::getComponent() const
{
	return std::make_shared<SpriteRendererComponent>();
}

const std::string SpriteRendererComponent::getName() const
{
	return m_ComponentName;
}

void SpriteRendererComponent::draw(t2d::Window& window)
{
	window.draw(t2d::ResourceManager::getSprite(this->m_SpriteName));
}