#include "PlayerInputComponent.hpp"

// Engine Classes
#include "Keyboard.hpp"
#include "ResourceManager.hpp"

// Default constructor - Initializes info
PlayerInputComponent::PlayerInputComponent()
{
	name = "PlayerInput";
	amount_of_components++;
	this->velocity = 400;
}

// Updates Component
void PlayerInputComponent::update(const GameObject& player, float delta)
{
	if (t2d::Keyboard::isKeyPressed(t2d::Keyboard::D))
	{
		t2d::ResourceManager::getSprite("RedPlayer").translate(velocity * delta, 0.0f);
	}
	if (t2d::Keyboard::isKeyPressed(t2d::Keyboard::A))
	{
		t2d::ResourceManager::getSprite("RedPlayer").translate(-velocity * delta, 0.0f);
	}
	if (t2d::Keyboard::isKeyPressed(t2d::Keyboard::S))
	{
		t2d::ResourceManager::getSprite("RedPlayer").translate(0.0f, velocity * delta);
	}
	if (t2d::Keyboard::isKeyPressed(t2d::Keyboard::W))
	{
		t2d::ResourceManager::getSprite("RedPlayer").translate(0.0f, -velocity * delta);
	}
}

// Returns the component
const std::shared_ptr<Component>& PlayerInputComponent::getComponent() const
{
	return std::make_shared<PlayerInputComponent>();
	
}

// Returns the amount of components that we have
const std::string PlayerInputComponent::getName() const
{
	return name;
}

