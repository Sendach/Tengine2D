#pragma once
#ifndef WINDOW_HPP
#define WINDOW_HPP

// SFML.
#include <SFML\Graphics\RenderWindow.hpp>

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
		static void create(int screenWidth, int screenHeight, std::string windowName);
		// Creates a window, with an added style, ex. Fullscreen.
		static void create(int screenWidth, int screenHeight, std::string windowName, Window::Style style);
		// Draws a sprite to the screen.
		static void draw(const Sprite& sprite);
		//  Draws a text to the screen
		static void draw(const Text& text);
		// Clears the screens.
		static void clear();
		// Clears the screen with user-given color.
		static void clear(t2d::Color colour);
		// Displays everything on the screen.
		static void display();
		// Closes The Screen.
		static void close();
		// Pops the event on top of the event queue, if any, and returns it.
		static bool pollEvent();

		// Settings & Getters.
		
		// Returns the window
		//static t2d::Window& getWindow();

		// Set screen width.
		static void setScreenWidth(int screenWidth);
		// Get screen width.
		static int getScreenWidth();
		
		// Set screen height.
		static void setScreenHeight(int screenHeight);
		// Get screen Height.
		static int getScreenHeight();

		// Set name of window.
		static void setWindowName(std::string windowName);
		// Get name of window.
		static std::string getWindowName();

		// Set window style.
		static void setWindowStyle(Style style);
		// Get window style.
		static Style getWindowStyle();

		// Set window Size
		static void setSize(int screenWidth, int screenHeight);
		// Set Window Size, using Vector2u
		static void setSize(t2d::Vector2u size);
		//  Get window size - Returns a Vector2u
		static t2d::Vector2u& getSize();
		
		// Sets the camera view
		//svoid setCamera(t2d::Camera camera);

		

	private:
	
		// Width of the screen.
		static int _screenWidth;
		// Height of the screen.
		static int _screenHeight;
		// Name of the window.
		static std::string _windowName;
		// window Style.
		static Style _style;
		// The Window.
		static sf::RenderWindow _window;

	};
}
#endif
