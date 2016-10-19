#include "Axes.hpp"


Axes::Axes()
{
	
}


void Axes::setAxesName(std::string axesName)
{
	m_Name = axesName;
}

void Axes::setButtonNames()
{
	if (m_Name == "Horizontal")
	{
		setNegativeButtonKey(m_Keyboard.Left);
		setPositiveButtonKey(m_Keyboard.Right);
		setAltNegativeButtonKey(m_Keyboard.A);
		setAltPositiveButtonKey(m_Keyboard.D);
	}
	else if (m_Name == "Vertical")
	{
		setNegativeButtonKey(m_Keyboard.Up);
		setPositiveButtonKey(m_Keyboard.Down);
		setAltNegativeButtonKey(m_Keyboard.W);
		setAltPositiveButtonKey(m_Keyboard.S);
	}

}

// Sets the key for the negative button key
void Axes::setNegativeButtonKey(t2d::Keyboard::Key key)
{
	m_NegativeButton = key;
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

