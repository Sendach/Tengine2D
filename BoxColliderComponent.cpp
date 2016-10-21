#include "BoxColliderComponent.hpp"

#include "GameObject.hpp"
#include "Window.hpp"

BoxColliderComponent::BoxColliderComponent(GameObject* gameObject, std::shared_ptr<TransformComponent> transform)
{
	m_Name = "BoxCollider";
	m_GameObject = gameObject;
	m_Transform = transform;

	m_GoName = gameObject->getName();
	m_GoTag = gameObject->getTag();

	m_IsTrigger = false;
	
	m_Size = transform->getSize();
	
	m_Rectangle.setPosition(transform->getPosition().x, transform->getPosition().y);
	m_Rectangle.setSize(t2d::Vector2f(m_Size));
	m_Rectangle.setColor(sf::Color(0, 255, 0, 100));
	
}

// Updates component
void BoxColliderComponent::update(const GameObject& gameObject, float delta)
{
	m_Rectangle.setPosition(m_Position = m_Transform->getPosition());
	m_Rectangle.setSize(m_Size = m_Transform->getSize());
	
}

// Returns the component
const std::shared_ptr<Component>& BoxColliderComponent::getComponent() const
{
	return std::make_shared<BoxColliderComponent>();
}

// Returns the name of the component
const std::string BoxColliderComponent::getName() const
{
	return m_Name;
}

void BoxColliderComponent::draw(t2d::Window& window)
{
	window.draw(m_Rectangle);
}