#include "Keyboard.h"

namespace t2d {

	// Returns true if the key is being pressed
	bool Keyboard::isKeyPressed(t2d::Keyboard::Key key)
	{
		return sf::Keyboard::isKeyPressed((sf::Keyboard::Key)key);
	}
}