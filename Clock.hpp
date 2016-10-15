#pragma once
#ifndef CLOCK_HPP
#define CLOCK_HPP

// SFML.
#include <SFML\System\Clock.hpp>

// Engine Classes

namespace t2d {

	// A Clock class. Keeps track of elapsed time, and can restart the clock.
	// Clock starts Once an instance of this class is created.
	class Clock
	{
	public:

		// Default Constructor
		Clock() { }
		
		// Get the elapsed time.
		sf::Time getElapsedTime();
		// Restarts the clock. Returns elapsed time.
		sf::Time restart();
	private:
		
		// The Clock.
		sf::Clock _clock;
	};
}
#endif
