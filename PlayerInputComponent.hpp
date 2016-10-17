#pragma once

#include "InputComponent.hpp"

class PlayerInputComponent : public InputComponent
{
public:
	PlayerInputComponent() { }
	virtual void update(const GameObject& gameObject);
	
private:

};

