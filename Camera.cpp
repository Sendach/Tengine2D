#include "Camera.hpp"

#include <iostream>


namespace t2d {

	// Default constructor
	Camera::Camera()
	{
		center_position_x = 0.0,
		center_position_y = 0.0f;
		_width = 1000.0f;
		_height = 1000.0f;
		center_position = t2d::Vector2f(center_position_x, center_position_y);

		_camera.reset(sf::FloatRect(center_position_x, center_position_y, _width, _height));

		_angle = 0.0f;
	}

	// Reset camera to a certain view using sf::floatrect.
	Camera::Camera(sf::FloatRect rect)
	{
		center_position_x = rect.left;
		center_position_y = rect.top;
		_width = rect.width;
		_height = rect.height;
		center_position = t2d::Vector2f(center_position_x, center_position_y);

		_camera.reset(rect);

		_angle = 0.0f;
	}

	// Reset camera to a certain view using sf::floatrect.
	void Camera::reset(sf::FloatRect rect)
	{
		center_position_x = rect.left;
		center_position_y = rect.top;
		_width = rect.width;
		_height = rect.height;
		center_position = t2d::Vector2f(center_position_x, center_position_y);

		_camera.reset(rect);
		_camera.setRotation(0.0f);
	}

	// factor values: factor > 1 makes the view bigger, object appear smaller.
	// factor < 1 makes the view smaller, object appear bigger.
	void Camera::zoom(float factor)
	{
		_camera.zoom(factor);
		
	}

	// Translates/moves the camera & Updates position of the sprite using float values x and y. Adds to the current position.
	void Camera::translate(float x, float y)
	{
		_camera.move(x, y);
		center_position_x += x;
		center_position_y += y;
		center_position = t2d::Vector2f(center_position_x, center_position_y);
	}

	// Translates/moves the camera & Updates position of the sprite using t2d::Vector2f. Adds to the current position.
	void Camera::translate(const t2d::Vector2f& factors)
	{
		_camera.move(factors.x, factors.y);
		center_position_x += factors.x;
		center_position_y += factors.y;
		center_position = t2d::Vector2f(center_position_x, center_position_y);
	}

	// Rotates the camera. Adds to the current angle.
	void Camera::rotate(float angle)
	{
		_camera.rotate(angle);
		_angle += angle;
	}

	// Sets the camera view
	void Camera::setView(sf::RenderWindow& window)
	{
		window.setView(_camera);
	}

	// Sets Viewport
	Camera& Camera::setViewport(sf::FloatRect& viewport)
	{
		return *this;
	}

	// Sets the position of the camera - Camera's position is its center.
	Camera& Camera::setCenter(float x, float y)
	{
		_camera.setCenter(x, y);
		center_position_x = x;
		center_position_y = y;
		center_position = t2d::Vector2f(center_position_x, center_position_y);
		return *this;
	}

	// Sets the position of the camera - Camera's position is its center. Using t2d::Vector2f 
	Camera& Camera::setCentert(t2d::Vector2f& position)
	{
		_camera.setCenter(position.x, position.y);
		center_position_x = position.x;
		center_position_y = position.y;
		center_position = t2d::Vector2f(center_position_x, center_position_y);
		return *this;
	}

	// Gets the position of the camera - the center of it.
	const t2d::Vector2f& Camera::getCenter() const
	{
		return center_position;
	}

	// Sets the rotation of the camera. Overwrites previous rotation angle.
	Camera& Camera::setRotation(float angle)
	{
		_camera.setRotation(angle);
		_angle = angle;
		return *this;
	}

	// Gets the rotation angle of the camera.
	const float Camera::getRotation() const
	{
		return _angle;
	}

	// Sets The size of the camera view.
	void Camera::setSize(float width, float height)
	{
		_camera.setSize(width, height);
		_width = width;
		_height = height;
	}

	// Sets The size of the camera view using t2d::Vector2f
	void Camera::setSize(t2d::Vector2f& size)
	{
		_camera.setSize(size.x, size.y);
		_width = size.x;
		_height = size.y;
	}

	// Returns size of the camera view.
	const t2d::Vector2f& Camera::getSize() const
	{
		return t2d::Vector2f(_camera.getSize().x, _camera.getSize().y);
	}
}

