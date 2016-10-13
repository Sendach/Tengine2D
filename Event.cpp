#include "Event.h"


namespace t2d {

// Initialize static members
sf::Event Event::_event;
	
	// Gets the event.
	sf::Event& Event::getEvent()
	{
		return _event;
	}

}
