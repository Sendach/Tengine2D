#pragma once
#ifndef INPUTMANAGER_HPP
#define INPUTMANAGER_HPP

// Engine Classes
#include "Axes.hpp"

// C++ Standard Library
#include <map>
class InputManager
{
public:
	InputManager();

	// Initialize Access Names
	void initializeAxesNames();

	// Returns true if axis exist and one of the buttons for that axis is being held down.
	bool getButton(std::string axisName);

	// Returns true if axis exists and one of the buttons for that axis was pressed this frame.
	bool getButtonDown(std::string axisName);

	// Returns instance of the virtual axis identified by axisName. So the user can change the buttons etc.
	Axes& getAxis(const std::string axisName);

	// Returns the value of the virtual axis identified by axisName
	// In a keyboard & Joystick it just ranges between -1 and 1. 
	// Keyboard: -1 being negative directio nand 1 being positive. 0 if the button is not pressed.
	// Joystick: Ranges between -1 and 1 depending on how far the user pulls the stick. // Havent figured this one out yet
	// Mouse: the mouse delta is multiplied by the axis sensitivity and the range is not -1...1.
	const float getAxisValue(std::string axisName);

private:
	// The Amount of Axes/Buttons in the project. Default is 15.
	int m_Size;
	// Vector of all the axis.
	std::vector<Axes> m_Axis;
	// Vector of all the axis names
	std::vector<std::string> m_AxisNames;

};
#endif
