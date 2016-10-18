#pragma once
#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

// C++ Standard Library
#include <string>
#include <vector>
#include <memory>

// Engine Classes
/* Components */
#include "Component.hpp"
#include "PlayerInputComponent.hpp"
#include "SpriteRendererComponent.hpp"
#include "TransformComponent.hpp"

/* Others */
#include "Scene.hpp"
#include "Sprite.hpp"

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
	GameObject(std::string path = "" , std::string name = "", std::string tag = "Untagged", std::string layer = "Default");
	
	///////// Functions //////////

	// Updates Everything. All components. A gameobjects input, rendering, physics etc.
	void update(float delta);

	// Draws the game object
	void render(t2d::Window& window);

	// Allows User to add components to their GameObject.
	void addComponent(std::string componentName);//std::shared_ptr<Component> component);
	// Allows user to remove components of their GameObject
	void removeComponent(std::string componentName);

	// Updates our reference to scene
	void addedToScene(Scene* newScene);
	
	// A function that Fills our vector that holds all components (all_components)
	// with the components that the engine has.
	void initializeAllComponents();

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

	// Enables or disables rendering of GameObject
	void setEnableRender(bool enable);
	// Returns the state of the rendering of the GameObject
	const bool getEnableRender() const;

	// Actives or disables the GameObject
	void setActive(bool active);
	// Returns the state of the GameObject
	const bool getActive() const;

	///////// Variables /////////

	// We hold a reference to the scene so the game objects can query the scene information,
	// such as determining if the player is visible to an enemy etc.
	Scene* m_Scene;
	
	//holds information about the game object's position, orientation, and size. 
	//Other game objects, such the renderer will read and write the values stored in the transform. 
	std::shared_ptr<TransformComponent> transform;

	

private:

	// All objects have a sprite renderer by default. It renders the sprite.
	std::shared_ptr<SpriteRendererComponent> SpriteRenderer;

	// Holds all ofthe components, e.g InputComponent, PhysicsComponent, RenderComponent.
	std::vector<std::shared_ptr<Component>> m_Components;

	// Holds all the components in the engine.
	// When the player wants a component, he gives a name, and we can search the names of
	// All the components in the engine, to find the one they want.
	std::vector<std::shared_ptr<Component>> all_components;

	// Name of the object.
	std::string m_Name;

	// Objects Tag (Type of object), e.g Background, Player, Enemy.
	// Markers values that can be used to identify objects in your project.
	std::string m_Tag;

	// Layers are used throughout the engine as a way to create groups of objects that share
	// particular characteristics. Layers are primarily used to restrict operations such as collision
	// so they are only applied to the groups of objects that are relevant.
	std::string m_Layer;

	// Whether or not the GameObject should be rendered.
	bool m_EnableRender;

	// Whether or not a GameObject is active (turned on or off)
	bool m_Active;
};

#endif