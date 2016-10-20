#include "BoxColliderComponent.hpp"



BoxColliderComponent::BoxColliderComponent(GameObject* gameObject, std::shared_ptr<TransformComponent> transform)
{
	m_Name = "Box Collider";
	m_GameObject = gameObject;
	m_Transform = transform;

	m_GoName = gameObject->getName();
	m_GoTag = gameObject->getTag();

	m_IsTrigger = false;
	
	m_Size = transform->getSize();
}

// Updates component
void BoxColliderComponent::update(const GameObject& gameObject, float delta)
{

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