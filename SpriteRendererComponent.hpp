#pragma once
#ifndef SPRITERENDERERCOMPONENT_HPP
#define SPRITERENDERERCOMPONENT_HPP

// Engine Classes
#include "Sprite.hpp"
#include "GraphicsComponent.hpp"

// C++ Standard Library
#include <string>

class SpriteRendererComponent : public GraphicsComponent
{
public:
	SpriteRendererComponent(std::string path = "", std::string name = "");
	
	virtual void update(const GameObject& gameObject, float delta);
	
	virtual const std::shared_ptr<Component>& getComponent() const;
	
	virtual const std::string getName() const;
	
	virtual void draw(t2d::Window& window);

	// Setters & Getters //

	
private:

	// Path to load sprite
	std::string m_Path;
	// Name of the sprite
	std::string m_SpriteName;
	// Name of this component
	std::string m_ComponentName;
};

#endif