#include "Keyboard.h"

namespace t2d {

	// Returns true if the key is being pressed
	bool Keyboard::isKeyPressed(Key key)
	{
		return sf::Keyboard::isKeyPressed((sf::Keyboard::Key)key);
	}

	// Returns true if key was pressed once.
	bool Keyboard::keyPressed(Key key)
	{
		if (Event::getEvent().type == Event::KeyPressed)
		{
			if (Event::getEvent().key.code == key)
			{
				return true;
			}
		}
		return false;
	}
}