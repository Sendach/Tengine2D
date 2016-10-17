#pragma once
#ifndef SCENE_HPP
#define SCENE_HPP

// C++ Standard Library
#include <vector>
#include <memory>

// Engine Classes

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

	// Draw the entire scene on the screen.
	void draw();

	// Creates a game object
	void createGameObject();

	std::shared_ptr<GameObject>& findObject(std::string);

	
	
};
#endif
