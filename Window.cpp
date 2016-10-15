#include "Window.hpp"

namespace t2d {

// Initialize Static variables.
//sf::RenderWindow Window::_window;
//int Window::_screenWidth;
//int Window::_screenHeight;
//std::string Window::_windowName;
//Window::Style Window::_style;

	// Constructor that creates a window.
	Window::Window(int screenWidth, int screenHeight, std::string windowName)
	{
		_window.create(sf::VideoMode(screenWidth, screenHeight), windowName);
		_screenWidth = screenWidth;
		_screenHeight = screenHeight;
		_windowName = windowName;
	}

	// Constructor that creates a window.
	Window::Window(int screenWidth, int screenHeight, std::string windowName, Window::Style style)
	{
		_window.create(sf::VideoMode(screenWidth, screenHeight), windowName, style);

		_screenWidth = screenWidth;
		_screenHeight = screenHeight;
		_windowName = windowName;
	}

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

		_screenWidth = screenWidth;
		_screenHeight = screenHeight;
		_windowName = windowName;
	}

	// Draw to the screen.
	void Window::draw(const Sprite& sprite)
	{
		Draw::draw(_window, sprite);
	}

	void Window::draw(const Text& text)
	{
		Draw::draw(_window, text);
	}

	// Clears the screen.
	void Window::clear()
	{
		_window.clear();
	}
	
	// Clears the screen with user-given color.
	void Window::clear(t2d::Color colour)
	{
		_window.clear(sf::Color(colour._r, colour._g, colour._b, colour._a));
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
		return _window.pollEvent(Event::_event);
	}

	// Gets the window
	//t2d::Window& Window::getWindow()
	//{
	//	//return _window;
	//}

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
		_screenWidth = screenWidth;
		_screenHeight = screenHeight;;
	}

	// Set Window Size, using Vector2f
	void Window::setSize(t2d::Vector2u size)
	{
		_window.setSize(sf::Vector2u(size.x, size.y));
		_screenWidth = size.x;
		_screenHeight = size.y;
	}

	// Get window size - Return Vector2f
	t2d::Vector2u& Window::getSize()
	{
		return t2d::Vector2u(_screenWidth, _screenHeight);
	}

	// Sets the camera view
	void Window::setCamera(t2d::Camera camera)
	{
		_window.setView(camera.getCamera());
	}
}
