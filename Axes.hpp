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
	Axes();

	// When creating an instance of this class, this function will be called, which takes in
	// The name of the axes, like "Horizontal" or "Vertical" or "Jump" etc. And depending
	// On that name, All the buttons for each axes gets created with default values.
	// Example - If an instance of this class is created using "Horizontal", then 
	// NegativeButton will be the key LeftArrow, or A - PositiveButton will be RightArrow, or D
	void setAxesName(std::string axesName);

	// Depending on the name of the axis, the buttons will have different values.
	void setButtonNames();

	// Setters & Getters // 

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

	// Instance of Keyboard
	t2d::Keyboard m_Keyboard;
	


	
};
#endif
