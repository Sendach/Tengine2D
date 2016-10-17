#pragma once
#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

// C++ Standard Library
#include <string>
#include <vector>
#include <memory>

// Engine Classes
#include "Component.hpp"

#include "PlayerInputComponent.hpp"



// Base Game Object class that we can use for every object int he game.
// The class contains a vector of Components, which the user can use to add components such as InputComponent, or PhysicsComponent.
// Using this class, we can pick and chooes what object need what component.
// It Is capable of removing and adding objects.
// A GameObject has a name and a tag. 

class GameObject
{
public:
	// Called when Object is created using createGameObject() in the Scene class.
	GameObject();

	///////// Functions //////////

	// Updates Everything. All components. A gameobjects input, rendering, physics etc.
	void update();

	// Allows User to add components to their GameObject.
	void addComponent(std::shared_ptr<Component> component);
	// Allows user to remove components of their GameObject
	void removeComponent(std::shared_ptr<Component> component);

	///////// Variables //////////

	// Name of the object.
	std::string m_ObjectName;
	// Objects Tag (Type of object), e.g Background, Player, Enemy.
	std::string m_ObjectTag;

private:
	// Holds all of the components, e.g InputComponent, PhysicsComponent, RenderComponent.
	std::vector<std::shared_ptr<Component>> m_Components;


};

#endif