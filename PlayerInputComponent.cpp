#include "PlayerInputComponent.hpp"
#include "Keyboard.hpp"
#include "ResourceManager.hpp"

void PlayerInputComponent::update(const GameObject& player)
{
	if (t2d::Keyboard::isKeyPressed(t2d::Keyboard::D))
	{
		t2d::ResourceManager::getSprite("RedPlayer").translate(400 * 0.00023, 0.0f);
	}
	if (t2d::Keyboard::isKeyPressed(t2d::Keyboard::A))
	{
		t2d::ResourceManager::getSprite("RedPlayer").translate(-400 * 0.00023, 0.0f);
	}
	if (t2d::Keyboard::isKeyPressed(t2d::Keyboard::S))
	{
		t2d::ResourceManager::getSprite("RedPlayer").translate(0.0f, 400 * 0.00023);
	}
	if (t2d::Keyboard::isKeyPressed(t2d::Keyboard::W))
	{
		t2d::ResourceManager::getSprite("RedPlayer").translate(0.0f, -400 * 0.00023);
	}
}
