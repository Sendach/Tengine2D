#include "InputManager.hpp"


InputManager::InputManager()
{
	m_Size = 15;
	//m_Axis.reserve(m_Size);
	initializeAxesNames();
	
	// Call the function in axes and set the appropriet name.
	int counter = 0;
	for (int i = 0; i < m_Size; i++)
	{
		m_Axis.push_back(Axes(m_AxisNames[counter]));
		if (counter == 8) { counter = 0; }
		counter++;
	}
	
}

// Initialize Access Names
void InputManager::initializeAxesNames()
{
	m_AxisNames.push_back("Horizontal");
	m_AxisNames.push_back("Vertical");
	m_AxisNames.push_back("Fire1");
	m_AxisNames.push_back("Fire2");
	m_AxisNames.push_back("Fire3");
	m_AxisNames.push_back("Jump");
	m_AxisNames.push_back("MouseX");
	m_AxisNames.push_back("MouseY");
	m_AxisNames.push_back("Mouse ScrollWheel");
}

// Returns true if axis exist and one of the buttons for that axis is being held down.
bool InputManager::getButton(std::string axisName)
{
	for (auto& i : m_Axis)
	{
		if (axisName == i.getAxisName())
		{
			return i.getButton();
		}
	}
	return false;
	// Return error saying this Input button axisName is not setup.
}

// Returns true if axis exists and one of the buttons for that axis was pressed this frame.
bool InputManager::getButtonDown(std::string axisName)
{
	for (auto& i : m_Axis)
	{
		if (axisName == i.getAxisName())
		{
			return i.getButtonDown();
		}
	}
	return false;
	// Return error saying this Input button axisName is not setup.
}

Axes& InputManager::getAxis(const std::string axisName)
{
	for (auto& i : m_Axis)
	{
		if (axisName == i.getAxisName())
		{
			return i;
		}
	}
}

const float InputManager::getAxisValue(std::string axisName)
{
	for (auto& i : m_Axis)
	{
		if (axisName == i.getAxisName())
		{
			return i.getAxisValue(axisName);
		}
	}
	return 0;
}