#include "Window.h"

namespace t2d {

// Initialize Static variables.
sf::RenderWindow Window::_window;
int Window::_screenWidth;
int Window::_screenHeight;
std::string Window::_windowName;
Window::Style Window::_style;

	// Creates a window.
	void Window::create(int screenWidth, int screenHeight, std::string windowName)
	{
		_window.create(sf::VideoMode(screenWidth, screenHeight), windowName);

		_screenWidth = screenWidth;
		_screenHeight = screenHeight;
		_windowName = windowName;
	}

	// Creates a window, with an added style, ex. Fullscreen.
	void Window::create(int screenWidth, int screenHeight, std::string windowName, Window::Style style)
	{
		_window.create(sf::VideoMode(screenWidth, screenHeight), windowName, style);
	}

	// Draw to the screen.
	void Window::draw(const sf::Drawable& drawable)
	{
		Draw::draw(_window, drawable);
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
	bool Window::pollEvent()
	{
		return _window.pollEvent(t2d::Event::getEvent());
	}

	// Set screen width.
	void Window::setScreenWidth(int screenWidth)
	{
		_window.setSize(sf::Vector2u(screenWidth, _screenHeight));
		_screenWidth = screenWidth;
	}

	// Get screen width.
	int Window::getScreenWidth()
	{
		return _screenWidth;
	}

	// Set screen height.
	void Window::setScreenHeight(int screenHeight)
	{
		_window.setSize(sf::Vector2u(_screenWidth, screenHeight));
		_screenHeight = screenHeight;
	}

	// Get screen Height.
	int Window::getScreenHeight()
	{
		return _screenHeight;
	}

	// Set name of window.
	void Window::setWindowName(std::string windowName)
	{
		_window.setTitle(windowName);
		_windowName = windowName;
	}

	// Get name of window.
	std::string Window::getWindowName()
	{
		return _windowName;
	}
	
	// Set window style.
	void Window::setWindowStyle(Style style)
	{
		/* Currently No official way to change the style */
		_style = style;
	}

	// Get window style.
	Window::Style Window::getWindowStyle()
	{
		return _style;
	}

	// Set window Size
	void Window::setSize(int screenWidth, int screenHeight)
	{
		_window.setSize(sf::Vector2u(screenWidth, screenHeight));

	}
}
