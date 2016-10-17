#include "GameObject.hpp"

// C++ Standard Library
#include <algorithm>
#include <iostream>



// Called when Object is created using createGameObject() in the Scene class.
GameObject::GameObject()
{
	this->addComponent(std::make_shared<PlayerInputComponent>());
}

// Updates Everything. All components. A gameobjects input, rendering, physics etc.
void GameObject::update()
{
	for (auto& m_Components : m_Components)
	{
		m_Components->update(*this);
	}
}

// Allows User to add components to their GameObject.
void GameObject::addComponent(std::shared_ptr<Component> component)
{
	m_Components.push_back(component);

}

// Allows user to remove components of their GameObject 
void GameObject::removeComponent(std::shared_ptr<Component> component)
{
	// https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
	m_Components.erase(std::remove(m_Components.begin(), m_Components.end(), component), m_Components.end());
}
