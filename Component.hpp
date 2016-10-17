#pragma once
#ifndef COMPONENT_HPP
#define COMPONENT_HPP

// Forward Declare the class, so it now it exists.
class GameObject;

class Component
{
public:
	virtual	void update(GameObject& gameObject) = 0;

};

#endif