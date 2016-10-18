#include "Scene.hpp"

#include "Component.hpp"
#include <memory>
#include <iostream>
#include "GameObject.hpp"



void Scene::createGameObject()
{
	std::shared_ptr<GameObject> result = std::make_shared<GameObject>("Player", "Player");
	result->addedToScene(this);
	m_GameObjects.push_back(result);
	
}

std::shared_ptr<GameObject>& Scene::findObject(std::string name)
{
	for (auto& m_GameObjects : m_GameObjects)
	{
		if (m_GameObjects->m_ObjectName == name)
		{
			return m_GameObjects;
		}
	}
}

// Load all of the data and graphics that this scene needs to function.
void Scene::loadScene()
{
	for (auto& m_GameObjects : m_GameObjects)
	{
		
	}
}

// Update logic for this scene.
void Scene::update()
{
	for (auto& m_GameObjects : m_GameObjects)
	{
		m_GameObjects->update();
	}
}

// Draw the entire scene on the screen.
void Scene::draw()
{

}