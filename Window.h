#ifndef WINDOW_HPP
#define WINDOW_HPP

// SFML.
#include <SFML\Graphics\RenderWindow.hpp>

// C++ Standard Library.
#include <string>

// Classes.
#include "Draw.h"

namespace t2d {

	// A static class that represents the game window.
	class Window
	{
	public:

		// Creates a window.
		static void create(int screenWidth, int screenHeight, std::string windowName);
		// Creates a window, with an added style, ex. Fullscreen.
		static void create(int screenWidth, int screenHeight, std::string windowName,  int Style);
		// Draw to the screen.
		static void draw(sf::Sprite& sprite);
		// Clears the screens.
		static void clear();
		// Displays everything on the screen.
		static void display();
		// Closes The Screen.
		static void close();
		// Pops the event on top of the event queue, if any, and returns it.
		static bool pollEvent(sf::Event& _event);

		// Settings & Getters.
		
		// Set screen width.
		static void setScreenWidth(int screenWidth);
		// Get screen width.
		static int getScreenWidth();
		
		// Set screen height.
		static void setScreenHeight(int screenHeight);
		// Get screen Height.
		static int getScreenHeight();

		
	private:
		// Unused Default Constructor.
		Window() {}
		// Width of the screen.
		static int _screenWidth;
		// Height of the screen.
		static int _screenHeight;
		// The Window.
		static sf::RenderWindow _window;

	};
}
#endif
