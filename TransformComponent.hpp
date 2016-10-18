#pragma once
#ifndef TRANSFORMCOMPONENT_HPP
#define TRANSFORMCOMPONENT_HPP

// Engine Classes
#include "Component.hpp"
#include "Vector2.hpp"

// Forward Declarations
class GameObject;

// C++ Standard Library
#include <string>
#include <memory>

//holds information about the game object's position, orientation, and size. 
//Other game objects, such the renderer will read and write the values stored in the transform. 

class TransformComponent : public Component
{
public:
	TransformComponent();
	TransformComponent(GameObject* gameObject);

	// Updates GameObjects Position, rotation and size.
	virtual void update(const GameObject& gameObject, float delta);

	// Returns the component
	virtual const std::shared_ptr<Component>& getComponent() const;

	// Returns the amount of components that we have
	virtual const std::string TransformComponent::getName() const;

	// Moves the sprite
	void Translate(t2d::Vector2f position);
	// Position of GameObject
	t2d::Vector2f position;
	// Rotation angle of the player
	float rotation;
	// float size
	t2d::Vector2f size;

private:
	// Name of the component
	std::string name;
	// Copy of GameObject
	GameObject* m_GameObject;

	
};

#endif
