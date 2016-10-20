#pragma once
#ifndef SCENE_HPP
#define SCENE_HPP

// C++ Standard Library
#include <vector>
#include <memory>
#include <string>

// Engine Classes
#include "ResourceManager.hpp"
#include "Window.hpp"
#include "Input.hpp"
// Forward Declaration
extern class GameObject;

// This class Basically represents a level in a game.
// It holds all the game objects in the game. 

class Scene
{
public:
	Scene() { }
	
	///////////// Functions ///////////////

	// Create a function that creates the window. 
	// The user can obviously change its functionality.

	// Load all of the data and graphics that this scene needs to function.
	void loadScene();

	// Update logic for this scene.
	void update(float delta);

	// Create a Graphic Class that Draws everything in the scene
	// Graphics m_Graphics; m_Graphics->update(*this); 
	// renders the entire scene on the screen.
	void render(t2d::Window& window);

	// Creates a game object
	std::shared_ptr<GameObject> createGameObject(std::string path = "", std::string name = "", std::string tag = "Untagged", std::string layer = "Default");

	// Finds a GameOject by name and returns it. Only returns active GameObjects.
	std::shared_ptr<GameObject>& find(std::string name);

	// Returns one active GameObject with user-given tag. 
	std::shared_ptr<GameObject>& findWithTag(std::string tag);

	// Returns a vector of active GameObjects with user-given tag. 
	std::vector<std::shared_ptr<GameObject>>& findGameObjectsWithTag(std::string tag);


	///////////// Variables ///////////////

	// Vector that holds all of the objects in the Scene
	std::vector<std::shared_ptr<GameObject>> m_GameObjects;

	// Vector that holds all the sprites in the scene
	Sprite& createSprite(const const std::string textureName, const std::string spritePath);
	// Returns the sprite bound to the user-given name
	Sprite& getSprite(std::string spriteName);

	// Perhaps move all of this to some kind of asset manager class?
	// Our Asset Caches
	SpriteCache m_Spritecache;
	TextCache m_Textcache;
	
};
#endif
