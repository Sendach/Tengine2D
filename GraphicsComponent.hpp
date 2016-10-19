#pragma once
#ifndef GRAPHICSCOMPONENT_HPP
#define GRAPHICSCOMPONENT_HPP

// Engine Classes
#include "Component.hpp"
#include "Window.hpp"

class GraphicsComponent : public Component
{
public:
	GraphicsComponent();
	
	virtual void update(const GameObject& gameObject, float delta) = 0;

	virtual const std::shared_ptr<Component>& getComponent() const = 0;

	virtual const std::string getName() const = 0;

	virtual void draw(t2d::Window& window) = 0;
};

#endif