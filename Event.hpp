#pragma once
#ifndef EVENT_HPP
#define EVENT_HPP

// Engine Classes
#include "Keyboard.hpp"

// SFML.
#include <SFML\Window\Event.hpp>



namespace t2d {

	// The different types of events.
	enum Events{
		Closed,
		Resized,
		LostFocus,
		GainedFocus,
		TextEntered,
		KeyPressed,
		KeyReleased,
		MouseWheelMoved,
		MouseButtonPressed,
		MouseButtonReleased,
		MouseMoved,
		MouseEntered,
		MouseLeft,
		JoystickButtonPressed,
		JoystickButtonReleased,
		JoystickMoved,
		JoystickConnected,
		JoystickDisconnected,
		Count
	};
}

// A static class that handles events
class Event
{
public:

	// Event
	static sf::Event m_Event;

private:
	// Unused Default Constructor
	Event() { }

};

#endif
