#pragma once
#ifndef SPRITERENDERERCOMPONENT_HPP
#define SPRITERENDERERCOMPONENT_HPP

// Engine Classes
#include "Sprite.hpp"
#include "Component.hpp"

// C++ Standard Library
#include <string>

class SpriteRendererComponent : public Component
{
public:
	SpriteRendererComponent(std::string path = "", std::string name = "");
	
	virtual void update(const GameObject& gameObject, float delta)
	{

	}

	virtual const std::shared_ptr<Component>& getComponent() const
	{
		return std::make_shared<SpriteRendererComponent>();
	}

	virtual const std::string getName() const
	{
		return m_ComponentName;
	}

	// The sprite the component renders
	Sprite m_Sprite;
	
	std::string m_Path;
	std::string m_SpriteName;
	std::string m_ComponentName;
};

#endif