#include "Axes.hpp"


Axes::Axes(std::string axisName)
{
	m_Name = axisName;

	m_KeyboardValue = 0;
	m_JoystickValue = 0;
	m_MouseValue = 0;

	setAxisButtons();
}


void Axes::setAxisName(std::string axesName)
{
	m_Name = axesName;
}

const std::string Axes::getAxisName() const
{
	return m_Name;
}

void Axes::setAxisButtons()
{
	if (m_Name == "Horizontal")
	{
		setNegativeButtonKey(t2d::Keyboard::Left);
		setPositiveButtonKey(t2d::Keyboard::Right);
		setAltNegativeButtonKey(t2d::Keyboard::A);
		setAltPositiveButtonKey(t2d::Keyboard::D);
	}
	else if (m_Name == "Vertical")
	{
		setNegativeButtonKey(t2d::Keyboard::Up);
		setPositiveButtonKey(t2d::Keyboard::Down);
		setAltNegativeButtonKey(t2d::Keyboard::W);
		setAltPositiveButtonKey(t2d::Keyboard::S);
	}

}

bool Axes::getButton()
{
	if (t2d::Keyboard::isKeyPressed(getNegativeButtonKey()))
	{
		m_KeyboardValue = -1;
		return true;
	}
	else if (t2d::Keyboard::isKeyPressed(getPositivebuttonKey()))
	{
		m_KeyboardValue = 1;
		return true;
	}
	else if (t2d::Keyboard::isKeyPressed(getAltNegativeButtonKey()))
	{
		m_KeyboardValue = -1;
		return true;
	}
	else if (t2d::Keyboard::isKeyPressed(getAltPositivebuttonKey()))
	{
		m_KeyboardValue = 1;
		return true;
	}

	m_KeyboardValue = 0;
	return false;
}

bool Axes::getButtonDown()
{
	if (t2d::Keyboard::keyPressed(getNegativeButtonKey()))
	{
		m_KeyboardValue = -1;
		return true;
	}
	else if (t2d::Keyboard::keyPressed(getPositivebuttonKey()))
	{
		m_KeyboardValue = 1;
		return true;
	}
	else if (t2d::Keyboard::keyPressed(getAltNegativeButtonKey()))
	{
		m_KeyboardValue = -1;
		return true;
	}
	else if (t2d::Keyboard::keyPressed(getAltPositivebuttonKey()))
	{
		m_KeyboardValue = 1;
		return true;
	}

	return false;
}

// Sets the key for the negative button key
void Axes::setNegativeButtonKey(t2d::Keyboard::Key key)
{
	m_NegativeButtonKey = key;
}

// Returns the key for the negative button key
const t2d::Keyboard::Key Axes::getNegativeButtonKey() const
{
	return m_NegativeButtonKey;
}

// Sets the key for the positive button key
void Axes::setPositiveButtonKey(t2d::Keyboard::Key key)
{
	m_PositiveButtonKey = key;
}

// Returns the key for the positive button key
const t2d::Keyboard::Key Axes::getPositivebuttonKey() const
{
	return m_PositiveButtonKey;
}

// Sets the key for the alternative negative button key
void Axes::setAltNegativeButtonKey(t2d::Keyboard::Key key)
{
	m_AltNegativeButtonKey = key;
}

// Returns the key for the alternative negative button key
const t2d::Keyboard::Key Axes::getAltNegativeButtonKey() const
{
	return m_AltNegativeButtonKey;
}

// Sets the key for the alternative positive button key
void Axes::setAltPositiveButtonKey(t2d::Keyboard::Key key)
{
	m_AltPositiveButtonKey = key;
}


// Returns the key for the alternative positive button key
const t2d::Keyboard::Key Axes::getAltPositivebuttonKey() const
{
	return m_AltPositiveButtonKey;
}

const float Axes::getAxisValue(std::string axisName)
{
	
	getButton();

	return m_KeyboardValue;
}

