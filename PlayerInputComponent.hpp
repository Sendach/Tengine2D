#pragma once
#ifndef PLAYERINPUTCOMPONENT_HPP
#define PLAYERINPUTCOMPONENT_HPP

#include "InputComponent.hpp"

#include "GameObject.hpp"

class PlayerInputComponent : public InputComponent
{
public:

	PlayerInputComponent();

	virtual void update(const GameObject& gameObject);
	
private:


};
#endif