#pragma once
#ifndef INPUTCOMPONENT_HPP
#define INPUTCOMPONENT_HPP

// Engine Classes
#include "Component.hpp"

class InputComponent : public Component
{
public:
	virtual void update(const GameObject& gameObject) = 0;
	
};

#endif
