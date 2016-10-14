#include "Clock.h"


namespace t2d {

	// Get the elapsed time.
	sf::Time Clock::getElapsedTime()
	{
		return _clock.getElapsedTime();
	}
	
	// Restarts the clock. Returns elapsed time.
	sf::Time Clock::restart()
	{
		return _clock.restart();
	}
}