#pragma once
#ifndef COMPONENT_HPP
#define COMPONENT_HPP

// Forward Declare the class, so it now it exists.
class GameObject;

// C++ Standard Library
#include <memory>
#include <string>

class Component
{
public:
	// Updates component
	virtual	void update(const GameObject& gameObject, float delta) = 0;

	// Returns the component
	virtual const std::shared_ptr<Component>& getComponent() const = 0;

	// Returns the name of the component
	virtual const std::string getName() const = 0;
};

#endif