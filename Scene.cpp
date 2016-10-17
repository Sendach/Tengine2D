#include "Scene.hpp"

#include "Component.hpp"
#include <memory>

void Scene::createGameObject()
{
	std::shared_ptr<GameObject> result = std::make_shared<GameObject>();
	m_GameObjects.push_back(result);
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