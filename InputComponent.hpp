#pragma once
#ifndef INPUTCOMPONENT_HPP
#define INPUTCOMPONENT_HPP

// Engine Classes
#include "Component.hpp"

// C++ Standard Libary
#include <string>
#include <memory>

class InputComponent : public Component
{
public:

	// Updates Component
	virtual void update(const GameObject& gameObject, float delta) = 0;

	// Returns the component
	virtual const std::shared_ptr<Component>& getComponent() const = 0;

	virtual const std::string getName() const = 0;

};

#endif
