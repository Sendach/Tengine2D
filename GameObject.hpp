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
// This class contains many components. Such as InputComponent, RenderComponent, PhyiscsComponent etc.
// Using this class, we can pick and chooes what object need what component.
// Say we had a class called Scene that kept track of all of our GameObjects, std::Vector<std::shared_ptr<GameObject>> m_GameObjects;
// If we currently only have one gameObject, say Player, we know it's at m_GameObjects[0]. We can assign it the components it need like ---
// m_GameObjects[0] = std::make_shared<PlayerInputComponent>(); This object, player, now has a component which handles input.

class GameObject
{
public:
	// Default Constructor
	GameObject();

	GameObject(PlayerInputComponent* input);
	// Name of the object.
	std::string m_ObjectName;
	// Objects Tag (Type of object), e.g Background, Player, Enemy.
	std::string m_ObjectTag;
	// Holds all of the components, e.g InputComponent, PhysicsComponent, RenderComponent.
	std::vector<std::shared_ptr<Component>> m_Components;

	// Updates Everything. All components. A gameobjects input, rendering, physics etc.
	void update();

	void addComponent(std::shared_ptr<PlayerInputComponent> component);

	void add(PlayerInputComponent& gameObject);
	

private:
	
	
	
};
#endif