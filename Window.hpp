#pragma once
#ifndef WINDOW_HPP
#define WINDOW_HPP

// SFML.


// C++ Standard Library.
#include <string>

// Engine Classes.
#include "Draw.hpp"
#include "Event.hpp"
#include "Camera.hpp"

namespace t2d {

	// A static class that represents the game window.
	class Window
	{
	public:

		// Different styles to create the window with.
		enum  Style	{
			None = 0,
			Titlebar = 1 << 0,
			Resize = 1 << 1,
			Close = 1 << 2,
			Fullscreen = 1 << 3
		};

		// Unused Default Constructor.
		Window() {}
		//
		Window(int screenWidth, int screenHeight, std::string windowName);
		//
		Window(int screenWidth, int screenHeight, std::string windowName, Window::Style style);

		// Creates a window.
		void create(int screenWidth, int screenHeight, std::string windowName);
		// Creates a window, with an added style, ex. Fullscreen.
		void create(int screenWidth, int screenHeight, std::string windowName, Window::Style style);
		// Draws a sprite to the screen.
		void draw(Sprite& sprite);
		//  Draws a text to the screen
		void draw(Text& text);
		// Draws a rectangle to the screen
		void draw(Rectangle& rect);
		

		// Clears the screens.
		void clear();
		// Clears the screen with user-given color.
		void clear(t2d::Color colour);
		// Displays everything on the screen.
		void display();
		// Closes The Screen.
		void close();
		// Pops the event on top of the event queue, if any, and returns it.
		bool pollEvent();

		// Settings & Getters.
		
		// Returns the window
		//static t2d::Window& getWindow();

		// Set screen width.
		void setScreenWidth(int screenWidth);
		// Get screen width.
		int getScreenWidth();
		
		// Set screen height.
		void setScreenHeight(int screenHeight);
		// Get screen Height.
		int getScreenHeight();

		// Set name of window.
		void setWindowName(std::string windowName);
		// Get name of window.
		std::string getWindowName();

		// Set window style.
		void setWindowStyle(Style style);
		// Get window style.
		Style getWindowStyle();

		// Set window Size
		void setSize(int screenWidth, int screenHeight);
		// Set Window Size, using Vector2u
		void setSize(t2d::Vector2u size);
		//  Get window size - Returns a Vector2u
		t2d::Vector2u& getSize();
		
		// Calls function setCamera in Camera.hpp with _window as argument.
		void setView(t2d::Camera camera);
		
		void setKeyRepeatEnabled(bool enable);
	private:
	
		// Width of the screen.
		int m_ScreenWidth;
		// Height of the screen.
		int m_ScreenHeight;
		// Name of the window.
		std::string m_Title;
		// window Style.
		Style m_Style;
		// The Window.
		sf::RenderWindow m_Window;

	};
}
#endif
