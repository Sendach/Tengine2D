#include "Keyboard.hpp"

namespace t2d {

	// Returns true if the key is being pressed
	bool Keyboard::isKeyPressed(Key key)
	{
		return sf::Keyboard::isKeyPressed((sf::Keyboard::Key)key);
	}

	// Returns true if key was pressed once.
	bool Keyboard::keyPressed(Key key)
	{
		if (Event::_event.type == Events::KeyPressed)
		{
			if (Event::_event.key.code == key)
			{
				return true;
			}
		}
		return false;
	}
}