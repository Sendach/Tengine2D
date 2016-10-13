#include "Window.h"

namespace t2d {

// Initialize Static variables.
sf::RenderWindow Window::_window;
int Window::_screenWidth;
int Window::_screenHeight;

	// Creates a window.
	void Window::create(int screenWidth, int screenHeight, std::string windowName)
	{
		_window.create(sf::VideoMode(screenWidth, screenHeight), windowName);
	}

	// Creates a window, with an added style, ex. Fullscreen.
	//void Window::create(int screenWidth, int screenHeight, std::string windowName, int Style)
	//{
		//_window.create(sf::VideoMode(screenWidth, screenHeight), windowName, sf::Style::Fullscreen);
	//}

	// Draw to the screen.
	void Window::draw(sf::Sprite& sprite)
	{
		Draw::draw(_window, sprite);
	}
	// Draws.
	void Window::clear()
	{
		_window.clear();
	}
	/// Displays everything on the screen.
	void Window::display()
	{
		_window.display();
	}
	// Closes The Screen
	void Window::close()
	{
		_window.close();
	}
	// Pops the event on top of the event queue, if any, and returns it.
	bool Window::pollEvent(sf::Event& _event)
	{
		return _window.pollEvent(_event);
	}
}
