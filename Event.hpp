#ifndef EVENT_HPP
#define EVENT_HPP

// Classes
#include "Keyboard.hpp"

// SFML.
#include <SFML\Window\Event.hpp>

namespace t2d {

	// A static class that handles events
	class Event
	{
	public:
	
		// Gets the event.
		static sf::Event& getEvent();
		
		// The different types of events.
		enum {
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

	private:
		// Unused Default Constructor
		Event() { }
		// Event
		static sf::Event _event;
	};
}
#endif
