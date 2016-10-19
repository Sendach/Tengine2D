#include "Input.hpp"

// Returns t2d::Keyboard, so the player can get a hold of all the keys.
const t2d::Keyboard Input::keyCode() 
{
	return t2d::Keyboard::getKeyboard();
}

// Returns true while the user holds down the key.
const bool Input::getKey(const t2d::Keyboard::Key key, const std::string keyName)
{
	if (t2d::Keyboard::isKeyPressed(key))
	{
		return true;
	}

	return false;
}

// Returns true during the frame the user starts pressing down the key.
const bool Input::getKeyDown(const t2d::Keyboard::Key key, const std::string keyName)
{
	if (t2d::Keyboard::keyPressed(key))
	{
		return true;
	}

	return false;
}

// Returns the value of the virtual axis identified by axisName.
const bool Input::GetAxis(const std::string axisName)
{
	return true;
}

// Returns true while the virtual button identified by buttonName is held down.
const bool Input::GetButton(const std::string buttonName)
{
	return true;
}

// Returns true during the frame the user pressed down the virtual button identified by buttonName.
const bool Input::GetButtonDown(const std::string buttonName)
{
	return true;
}

// Returns true the first frame the user releases the virtual button identified by buttonName.
const bool Input::GetButtonUp(const std::string buttonName)
{
	return true;
}