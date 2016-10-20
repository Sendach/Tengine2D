#include "Window.hpp"

namespace t2d {

	// Constructor that creates a window.
	Window::Window(int screenWidth, int screenHeight, std::string windowName)
	{
		m_Window.create(sf::VideoMode(screenWidth, screenHeight), windowName);
		m_ScreenWidth = screenWidth;
		m_ScreenHeight = screenHeight;
		m_Title = windowName;

		m_Window.setKeyRepeatEnabled(false);
	}

	// Constructor that creates a window.
	Window::Window(int screenWidth, int screenHeight, std::string windowName, Window::Style style)
	{
		m_Window.create(sf::VideoMode(screenWidth, screenHeight), windowName, style);

		m_ScreenWidth = screenWidth;
		m_ScreenHeight = screenHeight;
		m_Title = windowName;

		m_Window.setKeyRepeatEnabled(false);
	}

	// Creates a window.
	void Window::create(int screenWidth, int screenHeight, std::string windowName)
	{
		m_Window.create(sf::VideoMode(screenWidth, screenHeight), windowName);

		m_ScreenWidth = screenWidth;
		m_ScreenHeight = screenHeight;
		m_Title = windowName;

		m_Window.setKeyRepeatEnabled(false);
	}

	// Creates a window, with an added style, ex. Fullscreen.
	void Window::create(int screenWidth, int screenHeight, std::string windowName, Window::Style style)
	{
		m_Window.create(sf::VideoMode(screenWidth, screenHeight), windowName, style);

		m_ScreenWidth = screenWidth;
		m_ScreenHeight = screenHeight;
		m_Title = windowName;

		m_Window.setKeyRepeatEnabled(false);
	}

	// Draw to the screen.
	void Window::draw(Sprite& sprite)
	{
		Draw::draw(m_Window, sprite);
	}

	void Window::draw(Text& text)
	{
		Draw::draw(m_Window, text);
	}

	// Clears the screen.
	void Window::clear()
	{
		m_Window.clear();
	}
	
	// Clears the screen with user-given color.
	void Window::clear(t2d::Color colour)
	{
		m_Window.clear(sf::Color(colour.m_R, colour.m_G, colour.m_B, colour.m_A));
	}

	/// Displays everything on the screen.
	void Window::display()
	{
		m_Window.display();
	}
	
	// Closes The Screen
	void Window::close()
	{
		m_Window.close();
	}
	
	// Pops the event on top of the event queue, if any, and returns it.
	bool Window::pollEvent()
	{
		return m_Window.pollEvent(Event::m_Event);
	}

	// Gets the window
	//t2d::Window& Window::getWindow()
	//{
	//	//return m_Window;
	//}

	// Set screen width.
	void Window::setScreenWidth(int screenWidth)
	{
		m_Window.setSize(sf::Vector2u(screenWidth, m_ScreenHeight));
		m_ScreenWidth = screenWidth;
	}

	// Get screen width.
	int Window::getScreenWidth()
	{
		return m_ScreenWidth;
	}

	// Set screen height.
	void Window::setScreenHeight(int screenHeight)
	{
		m_Window.setSize(sf::Vector2u(m_ScreenWidth, screenHeight));
		m_ScreenHeight = screenHeight;
	}

	// Get screen Height.
	int Window::getScreenHeight()
	{
		return m_ScreenHeight;
	}

	// Set name of window.
	void Window::setWindowName(std::string windowName)
	{
		m_Window.setTitle(windowName);
		m_Title = windowName;
	}

	// Get name of window.
	std::string Window::getWindowName()
	{
		return m_Title;
	}
	
	// Set window style.
	void Window::setWindowStyle(Style style)
	{
		/* Currently No official way to change the style */
		m_Style = style;
	}

	// Get window style.
	Window::Style Window::getWindowStyle()
	{
		return m_Style;
	}

	// Set window Size
	void Window::setSize(int screenWidth, int screenHeight)
	{
		m_Window.setSize(sf::Vector2u(screenWidth, screenHeight));
		m_ScreenWidth = screenWidth;
		m_ScreenHeight = screenHeight;;
	}

	// Set Window Size, using Vector2f
	void Window::setSize(t2d::Vector2u size)
	{
		m_Window.setSize(sf::Vector2u(size.x, size.y));
		m_ScreenWidth = size.x;
		m_ScreenHeight = size.y;
	}

	// Get window size - Return Vector2f
	t2d::Vector2u& Window::getSize()
	{
		return t2d::Vector2u(m_ScreenWidth, m_ScreenHeight);
	}

	// Sets the camera view
	void Window::setView(t2d::Camera camera)
	{
		camera.setView(m_Window);
	}

	void Window::setKeyRepeatEnabled(bool enable)
	{
		m_Window.setKeyRepeatEnabled(enable);
	}
}
