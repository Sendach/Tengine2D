#pragma once
#ifndef INPUTMANAGER_HPP
#define INPUTMANAGER_HPP

// Engine Classes
#include "Axes.hpp"

class InputManager
{
public:
	InputManager();

	// Initialize Access Names
	void initializeAxesNames();
private:
	// The Amount of Axes/Buttons in the project. Default is 15.
	int m_Size;
	std::vector<Axes> m_Axes;
	std::vector<std::string> m_AxesNames;
};
#endif
