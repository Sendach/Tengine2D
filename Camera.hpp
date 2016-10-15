#pragma once
#ifndef CAMERA_HPP
#define CAMERA_HPP

// SFML.
#include <SFML\Graphics\View.hpp>
#include <SFML\Graphics\Rect.hpp>

// Engine Classes
#include "Vector2.hpp"

namespace t2d {

	class Camera
	{
	public:
		Camera() { }

		// Reset camera to a certain view using sf::floatrect.
		Camera(sf::FloatRect rect);
	
		// Creates a Camera.
		void reset(sf::FloatRect rect);

		// Zooms in if factor is a value above 1.0f, zooms out if vice versa.
		void zoom(float factor);

		// Setters & Getters

		// Sets The size of the camera view.
		void setSize(float width, float height);
		//  Returns size of the camera view.
		const t2d::Vector2f& getSize();
		
		 // Returns the camera. Only used by Window.hpp to setView().
		 sf::View& getCamera();

	private:

		// The actual camera
		sf::View _camera;
		// Width of camera view
		float _width;
		// Height of camera view
		float _height;

	};
}
#endif
