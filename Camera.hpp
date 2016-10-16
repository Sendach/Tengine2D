#pragma once
#ifndef CAMERA_HPP
#define CAMERA_HPP

// SFML.
#include <SFML\Graphics\View.hpp>
#include <SFML\Graphics\Rect.hpp>
#include <SFML\Graphics\RenderWindow.hpp>

// Engine Classes
#include "Vector2.hpp"

namespace t2d {

	class Camera
	{
	public:
		// Default Constructor
		Camera();
		// Creates a Camera.
		Camera(sf::FloatRect rect);
	
		// Reset camera to a certain view using sf::floatrect.
		void reset(sf::FloatRect rect);
		// factor values: factor > 1 makes the view bigger, object appear smaller.
		// factor < 1 makes the view smaller, object appear bigger.
		void zoom(float factor);
		// Translates/moves the camera & Updates position of the sprite using float values x and y. Adds to the current position.
		void translate(float x, float y);
		// Translates/moves the camera & Updates position of the sprite using t2d::Vector2f. Adds to the current position.
		void translate(const t2d::Vector2f& factors);
		// Rotates the camera. Adds to the current angle.
		void rotate(float angle);

		// Setters & Getters

		// Sets the camera view
		void setView(sf::RenderWindow& window);

		// Sets Viewport
		Camera& setViewport(sf::FloatRect& viewport);
		// Gets viewport
		//const t2d::FloatRect getViewport() const;

		// Sets the position of the camera - Camera's position is its center.
		Camera& setCenter(float x, float y);
		// Sets the position of the camera - Camera's position is its center. Using t2d::Vector2f 
		Camera& setCentert(t2d::Vector2f& position);
		// Gets the position of the camera - the center of it.
		const t2d::Vector2f& getCenter() const;

		// Sets the rotation of the camera. Overwrites previous rotation angle.
		Camera& setRotation(float angle);
		// Gets the rotation angle of the camera.
		const float getRotation() const;

		// Sets The size of the camera view.
		void setSize(float width, float height);
		// Sets The size of the camera view using t2d::Vector2f
		void setSize(t2d::Vector2f& size);
		//  Returns size of the camera view.
		const t2d::Vector2f& getSize() const;

	private:

		// The actual camera
		sf::View _camera;

		// Position x and y of sprite.
		t2d::Vector2f center_position;
		// Width of camera view
		float _width;
		// Height of camera view
		float _height;
		// Center point x
		float center_position_x;
		// Center point y
		float center_position_y;
		// Rotation angle
		float _angle;

	};
}
#endif
