#include "TransformComponent.hpp"

// Engine Classes
#include "GameObject.hpp"

TransformComponent::TransformComponent()
{
	name = "Transform";
}

TransformComponent::TransformComponent(GameObject* gameObject)
{
	name = "Transform";
	m_GameObject = gameObject;
	
}

// Updates GameObjects Position, rotation and size.
void TransformComponent::update(const GameObject& player, float delta)
{
	position = t2d::ResourceManager::getSprite(player.getName()).getPosition();
	rotation = t2d::ResourceManager::getSprite(player.getName()).getRotation();
	size = t2d::ResourceManager::getSprite(player.getName()).getScale();
}

// Translates sprite attached to the GameObject
void TransformComponent::Translate(t2d::Vector2f position)
{
	t2d::ResourceManager::getSprite(m_GameObject->getName()).translate(position);
}

// Returns the component
const std::shared_ptr<Component>& TransformComponent::getComponent() const
{
	return std::make_shared<TransformComponent>();
}

// Returns the amount of components that we have
const std::string TransformComponent::getName() const
{
	return name;
}

