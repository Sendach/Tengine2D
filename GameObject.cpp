#include "GameObject.hpp"

// Engine Classes
#include "Scene.hpp"

// C++ Standard Library
#include <algorithm>
#include <iostream>



// Called when Object is created using createGameObject() in the Scene class.
GameObject::GameObject()
{
	// Initialize variables
	m_Name = " ";
	m_Tag = "Untagged";
	m_Layer = "Default";
	m_Scene = nullptr;
	m_Active = true;
	m_EnableRender = true;

	// Initializing Default Components
	m_SpriteRenderer = std::make_shared<SpriteRendererComponent>();
	m_Components.push_back(m_SpriteRenderer);

	// Initialize the rest of the components, which the player can add.
	initializeAllComponents();
}

// Called when Object is created using createGameObject() in the Scene class.
GameObject::GameObject(std::string path, std::string name, std::string tag, std::string layer)
{
	// Initialize variables
	m_Name = name;
	m_Tag = tag;
	m_Layer = layer;
	m_Scene = nullptr;
	m_Active = true;
	m_EnableRender = true;

	// Initializing Default Components
	m_SpriteRenderer = std::make_shared<SpriteRendererComponent>(path, name);
	m_Components.push_back(m_SpriteRenderer);

	// Initialize the rest of the components, which the player can add.
	initializeAllComponents();
}

// Updates Everything. All components. A gameobjects input, rendering, physics etc.
void GameObject::update(float delta)
{
	for (auto& i : m_Components)
	{
		i->update(*this, delta);
	}
}

// Draws the game object
void GameObject::render(t2d::Window& window)
{
	if (m_Active)
	{
		if (m_EnableRender)
		{
			window.draw(m_Scene->getSprite(m_SpriteRenderer->m_SpriteName));
		}
	}
}

// A function that Fills our vector that holds all components (all_components)
// with the components that the engine has.
void GameObject::initializeAllComponents()
{
	all_components.push_back(std::make_shared<PlayerInputComponent>());
	all_components.push_back(m_SpriteRenderer);

}

// Allows User to add components to their GameObject.
void GameObject::addComponent(std::string componentName)//std::shared_ptr<Component> component)
{
	for (auto& i : all_components)
	{
		if (i->getName() == componentName)
		{
			m_Components.push_back(i);
		}
	}
}

// Allows user to remove components of their GameObject 
void GameObject::removeComponent(std::string componentName)
{
	for (auto& i : all_components)
	{
		if (i->getName() == componentName)
		{
			// https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
			m_Components.erase(std::remove(m_Components.begin(), m_Components.end(), i), m_Components.end());
		}
	}
	
	
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

// Enables or disables rendering of GameObject
void GameObject::setEnableRender(bool enable)
{
	m_EnableRender = enable;
}

// Returns the state of the rendering of the GameObject
const bool GameObject::getEnableRender() const
{
	return m_EnableRender;
}

// Actives or disables the GameObject
void GameObject::setActive(bool active)
{
	m_Active = active;
}

// Returns the state of the GameObject
const bool GameObject::getActive() const
{
	return m_Active;
}
