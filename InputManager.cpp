#include "InputManager.hpp"


InputManager::InputManager()
{
	m_Size = 15;
	m_Axes = std::vector<Axes>(m_Size);
	initializeAxesNames();
	
	// Call the function in axes and set the appropriet name.
	int counter = 0;
	for (auto& i : m_Axes)
	{
		i.setAxesName(m_AxesNames[counter]);
		if (counter == 9) { counter = 0; }
		counter++;
	}
}

// Initialize Access Names
void InputManager::initializeAxesNames()
{
	m_AxesNames.push_back("Horizontal");
	m_AxesNames.push_back("Vertical");
	m_AxesNames.push_back("Fire1");
	m_AxesNames.push_back("Fire2");
	m_AxesNames.push_back("Fire3");
	m_AxesNames.push_back("Jump");
	m_AxesNames.push_back("MouseX");
	m_AxesNames.push_back("MouseY");
	m_AxesNames.push_back("Mouse ScrollWheel");
}
