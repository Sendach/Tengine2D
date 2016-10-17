#include "GameObject.hpp"

#include <iostream>

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

void GameObject::addComponent(std::shared_ptr<PlayerInputComponent> component)
{
	m_Components.push_back(component);
	
}

void GameObject::add(PlayerInputComponent& playerinput)
{
	
}

	
