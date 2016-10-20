#include "TransformComponent.hpp"

// Engine Classes
#include "GameObject.hpp"
#include "ResourceManager.hpp"
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
	m_Position = t2d::ResourceManager::getSprite(player.getName()).getPosition();
	m_Rotation = t2d::ResourceManager::getSprite(player.getName()).getRotation();
	m_Scale = t2d::ResourceManager::getSprite(player.getName()).getScale();
	m_Size = t2d::ResourceManager::getSprite(player.getName()).getSize();
}

// Translates sprite attached to the GameObject - using t2d::Vector
void TransformComponent::Translate(t2d::Vector2f& position)
{
	t2d::ResourceManager::getSprite(m_GameObject->getName()).translate(position);
}

// Translates sprite attached to the GameObject - using float values
void TransformComponent::Translate(float x, float y)
{
	t2d::ResourceManager::getSprite(m_GameObject->getName()).translate(t2d::Vector2f(x, y));
}

// Sets the position
void TransformComponent::setPosition(t2d::Vector2f& position)
{
	t2d::ResourceManager::getSprite(m_GameObject->getName()).setPosition(position);
}

// Gets the position
const t2d::Vector2f& TransformComponent::getPosition() const
{
	return m_Position;
}

// Sets rotation
void TransformComponent::setRotation(float angle)
{
	t2d::ResourceManager::getSprite(m_GameObject->getName()).setRotation(angle);
}

// Gets rotation
const float TransformComponent::getRotation() const
{
	return m_Rotation;
}

// Sets the scale - using vector
void TransformComponent::setScale(t2d::Vector2f& size)
{
	t2d::ResourceManager::getSprite(m_GameObject->getName()).setScale(size);
}

// Sets size - Using float values
void TransformComponent::setScale(float x, float y)
{
	t2d::ResourceManager::getSprite(m_GameObject->getName()).setScale(t2d::Vector2f(x,y));
}

// Gets size
const t2d::Vector2f& TransformComponent::getScale() const
{
	return m_Scale;
}

const t2d::Vector2f& TransformComponent::getSize() const
{
	return m_Size;
}

Sprite& TransformComponent::getSprite()
{
	return t2d::ResourceManager::getSprite(m_GameObject->getName());
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

