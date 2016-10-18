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

#include "Scene.hpp"

// Base Game Object class that we can use for every object int he game.
// The class contains a vector of Components, which the user can use to add components such as InputComponent, or PhysicsComponent.
// Using this class, we can pick and chooes what object need what component.
// It Is capable of removing and adding objects.
// A GameObject has a name and a tag. 

class GameObject
{
public:
	GameObject();
	// Called when Object is created using createGameObject() in the Scene class.
	GameObject(std::string name = "", std::string tag = "Untagged", std::string layer = "Default");

	///////// Functions //////////

	// Updates Everything. All components. A gameobjects input, rendering, physics etc.
	void update();

	// Allows User to add components to their GameObject.
	void addComponent(std::shared_ptr<Component> component);
	// Allows user to remove components of their GameObject
	void removeComponent(std::shared_ptr<Component> component);

	void addedToScene(Scene* newScene);


	///////// Setters & Getters /////////

	// Sets the object name
	void setName(std::string newName);
	// Gets the object name
	const std::string getName() const;

	// Sets the object tag
	void setTag(std::string newTag);
	// Gets the object Tag
	const std::string getTag() const;

	// Sets the object layer
	void setLayer(std::string newLayer);
	// Gets the object layer
	const std::string getLayer() const;

	///////// Variables /////////

	

	// We hold a reference to the scene so the game objects can query the scene information,
	// such as determining if the player is visible to an enemy etc.
	Scene* m_Scene;
	

private:
	// Holds all of the components, e.g InputComponent, PhysicsComponent, RenderComponent.
	std::vector<std::shared_ptr<Component>> m_Components;

	// Name of the object.
	std::string m_Name;

	// Objects Tag (Type of object), e.g Background, Player, Enemy.
	// Markers values that can be used to identify objects in your project.
	std::string m_Tag;

	// Layers are used throughout the engine as a way to create groups of objects that share
	// particular characteristics. Layers are primarily used to restrict operations such as collision
	// so they are only applied to the groups of objects that are relevant.
	std::string m_Layer;
};

#endif