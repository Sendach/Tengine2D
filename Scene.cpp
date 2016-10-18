#include "Scene.hpp"

// Forward declared in Scene.hpp. Now we include it in the .cpp.
#include "GameObject.hpp"

// Creates a game object. Returns it.
std::shared_ptr<GameObject> Scene::createGameObject(std::string name, std::string tag, std::string layer)
{
	std::shared_ptr<GameObject> m_GameObject = std::make_shared<GameObject>(name, tag, layer);

	m_GameObjects.push_back(m_GameObject);

	m_GameObject->addedToScene(this);

	return m_GameObject;
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
void Scene::render()
{

}

// Finds a GameOject by name and returns it. Only returns active GameObjects.
std::shared_ptr<GameObject>& Scene::find(std::string name)
{
	for (auto& m_GameObjects : m_GameObjects)
	{
		if (m_GameObjects->getName() == name)
		{
			return m_GameObjects;
		}
	}
}

// Returns one active GameObject with user-given tag. 
std::shared_ptr<GameObject>& Scene::findWithTag(std::string tag)
{
	for (auto& m_GameObjects : m_GameObjects)
	{
		if (m_GameObjects->getTag() == tag)
		{
			return m_GameObjects;
		}
	}
}
// Returns a vector of active GameObjects with user-given tag. 
std::vector<std::shared_ptr<GameObject>>& Scene::findGameObjectsWithTag(std::string tag)
{
	std::vector<std::shared_ptr<GameObject>> tags;

	for (auto& m_GameObjects : m_GameObjects)
	{
		if (m_GameObjects->getTag() == tag)
		{
			tags.push_back(m_GameObjects);
		}
	}

	return tags;
}