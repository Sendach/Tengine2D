#include "Input.hpp"


std::shared_ptr<InputManager> Input::m_InputManager = std::make_shared<InputManager>();

// Returns t2d::Keyboard, so the player can get a hold of all the keys.
const t2d::Keyboard Input::keyCode() 
{
	return t2d::Keyboard::getKeyboard();
}

// Returns true while the user holds down the key.
// This function takes an actual key, and checks if it is being pressed.
const bool Input::getKey(const t2d::Keyboard::Key key, const std::string keyName)
{
	if (t2d::Keyboard::isKeyPressed(key))
	{
		return true;
	}

	return false;
}

// Returns true during the frame the user starts pressing down the key.
// This function takes an actual key, and checks if it was pressed this frame.
const bool Input::getKeyDown(const t2d::Keyboard::Key key, const std::string keyName)
{
	if (t2d::Keyboard::keyPressed(key))
	{
		return true;
	}

	return false;
}

// Returns instance of the virtual axis identified by axisName. So the user can change the buttons etc.
Axes& Input::getAxis(const std::string axisName)
{
	return m_InputManager->getAxis(axisName);
}

// Returns the value of the virtual axis identified by axisName.
// In a keyboard it just ranges between -1 and 1. -1 being negative direction
// and 1 being positive. 0 if the button is not pressed.

const float Input::GetAxisValue(const std::string axisName)
{
	return m_InputManager->getAxisValue(axisName);
}

// Returns true while the virtual button identified by buttonName is held down.
// Get Button takes a string, and checks if there is an axis named that.
// Axis such as Horizontal, or Vertical. If there is an axis named that.
// It checks if any of the buttons in that axis is being pressed.

const bool Input::GetButton(const std::string buttonName)
{
	return m_InputManager->getButton(buttonName);
}

// Returns true during the frame the user pressed down the virtual button identified by buttonName.
// Get Button takes a string, and checks if there is an axis named that.
// Axis such as Horizontal, or Vertical. If there is an axis named that.
// It checks if any of the buttons in that axis was pressed that frame.
const bool Input::GetButtonDown(const std::string buttonName)
{
	return m_InputManager->getButtonDown(buttonName);
}

// Returns true the first frame the user releases the virtual button identified by buttonName.
// Get Button takes a string, and checks if there is an axis named that.
// Axis such as Horizontal, or Vertical. If there is an axis named that.
// It checks if any of the buttons in that axis was releasdc that frame.
const bool Input::GetButtonUp(const std::string buttonName)
{
	return true;
}