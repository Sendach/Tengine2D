#pragma once
#ifndef BOXCOLLIDER_HPP
#define BOXCOLLIDER_HPP

// Engine Classes

#include "ColliderComponent.hpp"
#include "Rectangle.hpp"

// Forward Declarations
class GameObject;
class TransformComponent;
class Window;
// C++ Standard Library
#include <string>

// A Class that creates a tight rectangle box around a sprite, 
class BoxColliderComponent : public ColliderComponent
{
public:
	BoxColliderComponent() { }

	BoxColliderComponent(GameObject* gameObject, std::shared_ptr<TransformComponent> transform);

//	bool colliding()
	// Updates component
	virtual void update(const GameObject& gameObject, float delta);
	
	// Returns the component
	virtual const std::shared_ptr<Component>& getComponent() const;

	// Returns the name of the component
	virtual const std::string getName() const;

	virtual void draw(t2d::Window& window);
	
private:

	// Name of this component
	std::string m_Name;
	// The width and height of the rectangle.
	t2d::Vector2f m_Size;
	// Position of the rectangle
	t2d::Vector2f m_Position;

	// The GameObject this component is attached to.
	GameObject* m_GameObject; 

	// Tag of the GameObject attached to this component
	std::string m_GoTag;

	// Name of the GameObject attached to this component
	std::string m_GoName;

	// Is this collider configured as a trigger?
	// When it is, the component does not use the physics engine.
	// Instead, the user decides what to do when they collide.
	bool m_IsTrigger;

	// The transform attached to this GameObject
	std::shared_ptr<TransformComponent> m_Transform;

	// The box around the sprite. I have to create my own FloatRect class!!!
	sf::RectangleShape rect;
	Rectangle m_Rectangle;

};

#endif
