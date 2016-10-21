#pragma once
#ifndef COLLIDERCOMPONENT_HPP
#define COLLIDERCOMPONENT_HPP

// Engine Classes
#include "Component.hpp"
#include "Window.hpp"

// This class is a base class for all the collider components. 
class ColliderComponent : public Component
{
public:
	ColliderComponent();
	
	// Updates component
	virtual	void update(const GameObject& gameObject, float delta) = 0;

	// Returns the component
	virtual const std::shared_ptr<Component>& getComponent() const = 0;

	// Returns the name of the component
	virtual const std::string getName() const = 0;

	virtual void draw(t2d::Window& window) = 0;
};
#endif
