#include "GameObject.hpp"

// C++ Standard Library
#include <algorithm>
#include <iostream>

#include "Scene.hpp"

GameObject::GameObject()
{
	m_Name = " ";
	m_Tag = "Untagged";
	m_Layer = "Default";
	m_Scene = nullptr;
}

// Called when Object is created using createGameObject() in the Scene class.
GameObject::GameObject(std::string name, std::string tag, std::string layer)
{
	m_Name = name;
	m_Tag = tag;
	m_Scene = nullptr;
}

// Updates Everything. All components. A gameobjects input, rendering, physics etc.
void GameObject::update()
{
	for (auto& m_Components : m_Components)
	{
		m_Components->update(*this);
	}
}

// Allows User to add components to their GameObject.
void GameObject::addComponent(std::shared_ptr<Component> component)
{
	m_Components.push_back(component);
}

// Allows user to remove components of their GameObject 
void GameObject::removeComponent(std::shared_ptr<Component> component)
{
	// https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
	m_Components.erase(std::remove(m_Components.begin(), m_Components.end(), component), m_Components.end());
}

void GameObject::addedToScene(Scene* newScene)
{
	this->m_Scene = newScene;
}


// Sets the object name
void GameObject::setName(std::string newName)
{
	this->m_Name = newName;
}

// Gets the object name
const std::string GameObject::getName() const
{
	return m_Name;
}

// Sets the object tag
void GameObject::setTag(std::string newTag)
{
	this->m_Tag = newTag;
}

// Gets the object Tag
const std::string GameObject::getTag() const
{
	return m_Tag;
}

// Sets the object layer
void GameObject::setLayer(std::string newLayer)
{
	this->m_Layer = newLayer;
}

// Gets the object layer
const std::string GameObject::getLayer() const
{
	return m_Layer;
}