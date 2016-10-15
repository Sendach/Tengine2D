#pragma once
#ifndef CAMERA_HPP
#define CAMERA_HPP

// SFML.
#include <SFML\Graphics\View.hpp>
#include <SFML\Graphics\Rect.hpp>

// Engine Classes
#include "Vector2.hpp"
#include "Window.hpp"

namespace t2d {

	class Camera
	{
	public:
		Camera() { }
		//
		Camera(sf::FloatRect rect)
		{
			_camera.reset(rect);
		}

		/*static t2d::Camera getCamera()
		{
			return 
		}*/

		// Creates a Camera.
		void create(sf::FloatRect rec);

		// Zooms in if factor is a value above 1.0f, zooms out if vice versa.
		void zoom(float factor);

		// Setters & Getters

		// Sets The size of the camera view.
		void setSize(float width, float height);
		//  Returns size of the camera view.
		 const t2d::Vector2f& getSize();
		

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
