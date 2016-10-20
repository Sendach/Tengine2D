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

	// Moves the sprite - Using t2d::Vector
	void Translate(t2d::Vector2f& position);
	// Moves the sprite - Using float values
	void TransformComponent::Translate(float x, float y);
	// Setters & Getters //

	// Sets the position
	void setPosition(t2d::Vector2f& position);
	// Gets the position
	const t2d::Vector2f& getPosition() const;

	// Sets rotation
	void setRotation(float angle);
	// Gets rotation
	const float getRotation() const;

	// Sets size
	void setSize(t2d::Vector2f& size);
	// Gets size
	const t2d::Vector2f& getSize() const;

private:
	///////// Variables ///////

	// Position of GameObject
	t2d::Vector2f m_Position;
	// Rotation angle of the player
	float m_Rotation;
	// float size
	t2d::Vector2f m_Size;
	
	// Name of the component
	std::string name;
	// Copy of GameObject
	GameObject* m_GameObject;

	
};

#endif
