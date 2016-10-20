#pragma once
#ifndef AXES_HPP
#define AXES_HPP

// Engine Classes
#include "Keyboard.hpp"

// C++ Standard Library
#include <string>
#include <vector>

// A class for each individual Axes/Button.
// The user can customize buttons using their names
class Axes
{
public:

	// Creates an axis with a name
	Axes(std::string axisName);

	// When creating an instance of this class, this function will be called, which takes in
	// The name of the axes, like "Horizontal" or "Vertical" or "Jump" etc. And depending
	// On that name, All the buttons for each axes gets created with default values.
	// Example - If an instance of this class is created using "Horizontal", then 
	// NegativeButton will be the key LeftArrow, or A - PositiveButton will be RightArrow, or D
	// Depending on the name of the axis, the buttons will have different values.
	void setAxisButtons();

	// When the user types Input::getAxis("Horizontal"), this function is called
	// And it checks if the keys attached with the axis "Horizontal" are being held down.
	bool getButton();

	// When the user types Input::getAxis("Horizontal"), this function is called
	// And it checks if the keys attached with the axis "Horizontal" were pressed this frame.
	bool getButtonDown();

	// Setters & Getters // 

	// Sets name of Axis
	void setAxisName(std::string axesName);
	// Gets name of Axis
	const std::string getAxisName() const;

	// Sets the key for the negative button key
	void setNegativeButtonKey(t2d::Keyboard::Key key);
	// Returns the key for the negative button key
	const t2d::Keyboard::Key getNegativeButtonKey() const;
	
	// Sets the key for the positive button key
	void setPositiveButtonKey(t2d::Keyboard::Key key);
	// Returns the key for the positive button key
	const t2d::Keyboard::Key getPositivebuttonKey() const;

	// Sets the key for the alternative negative button key
	void setAltNegativeButtonKey(t2d::Keyboard::Key key);
	// Returns the key for the alternative negative button key
	const t2d::Keyboard::Key getAltNegativeButtonKey() const;

	// Sets the key for the alternative positive button key
	void setAltPositiveButtonKey(t2d::Keyboard::Key key);
	// Returns the key for the alternative positive button key
	const t2d::Keyboard::Key getAltPositivebuttonKey() const;

	// Returns the value of the virtual axis identified by axisName
	// In a keyboard & Joystick it just ranges between -1 and 1. 
	// Keyboard: -1 being negative directio nand 1 being positive. 0 if the button is not pressed.
	// Joystick: Ranges between -1 and 1 depending on how far the user pulls the stick. // Havent figured this one out yet
	// Mouse: the mouse delta is multiplied by the axis sensitivity and the range is not -1...1.
	// This function also checks whether or not any button is pressed. So the user can just do something like
	// float value = Input::getAxisValue("Horizontal") * speed(float) * delta;
	// Since this function checks if a button is pressed. And if no button is pressed, getAxisValue returns 0.
	// Meaning Input::getAxisValue("Horizontal") will be 0, and the entire calculation results in 0, because anything times 0 is 0.
	// However, since it checks if a button is pressed, if it is, it returns 1. Meaning, the calculation is done.
	// So if we would later do GameObject->trasnform->Translate(value, 0);
	// It would move in the horizontal axis in the speed of speed * delta, if and only if one of the buttons
	// Connected to the horizontal axis are being pressed.
	const float getAxisValue(std::string axisName);

private:
	// Name of the Axes/Button
	std::string m_Name;

	// Axes/Button Going in the negative Axis
	std::string m_NegativeButton;
	t2d::Keyboard::Key m_NegativeButtonKey;

	// Axes/Button Going in the positive Axis
	std::string m_PositiveButton;
	t2d::Keyboard::Key m_PositiveButtonKey;

	// Alternative Axes/Button going in the negative axis
	std::string m_AltNegativeButton;
	t2d::Keyboard::Key m_AltNegativeButtonKey;

	// Alternative Axes/Button going in the positive axis
	std::string m_AltPositiveButton;
	t2d::Keyboard::Key m_AltPositiveButtonKey;

	// Whether or not gravity should affect the GameObject
	std::string m_Gravity;

	// Any positive or negative values that are less than this number will register as zero. Useful for joysticks.
	std::string m_Dead;

	// For keyboard input, a larger value will result in faster response time. A lower value will be more smooth. 
	// For Mouse delta the value will scale the actual mouse delta.
	std::string m_Sensitivity;

	// Variables used by getAxisValue

	int m_KeyboardValue;
	float m_JoystickValue;
	float m_MouseValue;

};
#endif
