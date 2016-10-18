#pragma once
#ifndef SCENE_HPP
#define SCENE_HPP

// C++ Standard Library
#include <vector>
#include <memory>
#include <string>

// Engine Classes
// Forward Declaration
extern class GameObject;

// This class Basically represents a level in a game.
// It holds all the game objects in the game. 

class Scene
{
public:
	Scene() { }
	
	// Load all of the data and graphics that this scene needs to function.
	void loadScene();

	// Update logic for this scene.
	void update();

	// renders the entire scene on the screen.
	void render();

	// Creates a game object
	std::shared_ptr<GameObject> createGameObject(std::string name = "", std::string tag = "Untagged", std::string layer = "Default");

	// Finds a GameOject by name and returns it. Only returns active GameObjects.
	std::shared_ptr<GameObject>& find(std::string name);

	// Returns one active GameObject with user-given tag. 
	std::shared_ptr<GameObject>& findWithTag(std::string tag);

	// Returns a vector of active GameObjects with user-given tag. 
	std::vector<std::shared_ptr<GameObject>>& findGameObjectsWithTag(std::string tag);

	// Vector that holds all of the objects in the game
	std::vector<std::shared_ptr<GameObject>> m_GameObjects;
	
	
};
#endif
