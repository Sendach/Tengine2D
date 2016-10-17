#include "Clock.hpp"


namespace t2d {

	// Get the elapsed time.
	sf::Time Clock::getElapsedTime()
	{
		return m_Clock.getElapsedTime();
	}
	
	// Restarts the clock. Returns elapsed time.
	sf::Time Clock::restart()
	{
		return m_Clock.restart();
	}
}