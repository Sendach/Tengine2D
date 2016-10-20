#pragma once
#ifndef INPUT_HPP
#define INPUT_HPP

// Engine Classes
#include "Keyboard.hpp"
#include "InputManager.hpp"

// C++ Standard Library
#include <string>
#include <memory>

// This class handles all the input.
class Input
{
public:
	Input() { }

	// Returns t2d::Keyboard, so the player can get a hold of all the keys.
	static const t2d::Keyboard keyCode();

	// Returns true while the user holds down the key.
	static const bool getKey(const t2d::Keyboard::Key key = t2d::Keyboard::Key::Unknown, const std::string keyName = "");

	// Returns true during the frame the user starts pressing down the key.
	static const bool getKeyDown(const t2d::Keyboard::Key key = t2d::Keyboard::Key::Unknown, const std::string keyName = "");

	// Returns the value of the virtual axis identified by axisName.
	static const float GetAxisValue(const std::string axisName);

	// Returns instance of the virtual axis identified by axisName. So the user can change the buttons etc.
	static Axes& getAxis(const std::string axisName);

	// Returns true while the virtual button identified by buttonName is held down.
	static const bool GetButton(const std::string buttonName);

	// Returns true during the frame the user pressed down the virtual button identified by buttonName.
	static const bool GetButtonDown(const std::string buttonName);

	// Returns true the first frame the user releases the virtual button identified by buttonName.
	static const bool GetButtonUp(const std::string buttonName);

	
private:
	static std::shared_ptr<InputManager> m_InputManager;
};

#endif