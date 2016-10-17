#include "Camera.hpp"

#include <iostream>


namespace t2d {

	// Default constructor
	Camera::Camera()
	{
		mm_PositionX = 0.0,
		mm_PositionY = 0.0f;
		m_Width = 1000.0f;
		m_Height = 1000.0f;
		centerm_Position = t2d::Vector2f(mm_PositionX, mm_PositionY);

		m_Camera.reset(sf::FloatRect(mm_PositionX, mm_PositionY, m_Width, m_Height));

		m_Angle = 0.0f;
	}

	// Reset camera to a certain view using sf::floatrect.
	Camera::Camera(sf::FloatRect rect)
	{
		mm_PositionX = rect.left;
		mm_PositionY = rect.top;
		m_Width = rect.width;
		m_Height = rect.height;
		centerm_Position = t2d::Vector2f(mm_PositionX, mm_PositionY);

		m_Camera.reset(rect);

		m_Angle = 0.0f;
	}

	// Reset camera to a certain view using sf::floatrect.
	void Camera::reset(sf::FloatRect rect)
	{
		mm_PositionX = rect.left;
		mm_PositionY = rect.top;
		m_Width = rect.width;
		m_Height = rect.height;
		centerm_Position = t2d::Vector2f(mm_PositionX, mm_PositionY);

		m_Camera.reset(rect);
		m_Camera.setRotation(0.0f);
	}

	// factor values: factor > 1 makes the view bigger, object appear smaller.
	// factor < 1 makes the view smaller, object appear bigger.
	void Camera::zoom(float factor)
	{
		m_Camera.zoom(factor);
		
	}

	// Translates/moves the camera & Updates position of the sprite using float values x and y. Adds to the current position.
	void Camera::translate(float x, float y)
	{
		m_Camera.move(x, y);
		mm_PositionX += x;
		mm_PositionY += y;
		centerm_Position = t2d::Vector2f(mm_PositionX, mm_PositionY);
	}

	// Translates/moves the camera & Updates position of the sprite using t2d::Vector2f. Adds to the current position.
	void Camera::translate(const t2d::Vector2f& factors)
	{
		m_Camera.move(factors.x, factors.y);
		mm_PositionX += factors.x;
		mm_PositionY += factors.y;
		centerm_Position = t2d::Vector2f(mm_PositionX, mm_PositionY);
	}

	// Rotates the camera. Adds to the current angle.
	void Camera::rotate(float angle)
	{
		m_Camera.rotate(angle);
		m_Angle += angle;
	}

	// Sets the camera view
	void Camera::setView(sf::RenderWindow& window)
	{
		window.setView(m_Camera);
	}

	// Sets Viewport
	Camera& Camera::setViewport(sf::FloatRect& viewport)
	{
		return *this;
	}

	// Sets the position of the camera - Camera's position is its center.
	Camera& Camera::setCenter(float x, float y)
	{
		m_Camera.setCenter(x, y);
		mm_PositionX = x;
		mm_PositionY = y;
		centerm_Position = t2d::Vector2f(mm_PositionX, mm_PositionY);
		return *this;
	}

	// Sets the position of the camera - Camera's position is its center. Using t2d::Vector2f 
	Camera& Camera::setCentert(t2d::Vector2f& position)
	{
		m_Camera.setCenter(position.x, position.y);
		mm_PositionX = position.x;
		mm_PositionY = position.y;
		centerm_Position = t2d::Vector2f(mm_PositionX, mm_PositionY);
		return *this;
	}

	// Gets the position of the camera - the center of it.
	const t2d::Vector2f& Camera::getCenter() const
	{
		return centerm_Position;
	}

	// Sets the rotation of the camera. Overwrites previous rotation angle.
	Camera& Camera::setRotation(float angle)
	{
		m_Camera.setRotation(angle);
		m_Angle = angle;
		return *this;
	}

	// Gets the rotation angle of the camera.
	const float Camera::getRotation() const
	{
		return m_Angle;
	}

	// Sets The size of the camera view.
	void Camera::setSize(float width, float height)
	{
		m_Camera.setSize(width, height);
		m_Width = width;
		m_Height = height;
	}

	// Sets The size of the camera view using t2d::Vector2f
	void Camera::setSize(t2d::Vector2f& size)
	{
		m_Camera.setSize(size.x, size.y);
		m_Width = size.x;
		m_Height = size.y;
	}

	// Returns size of the camera view.
	const t2d::Vector2f& Camera::getSize() const
	{
		return t2d::Vector2f(m_Camera.getSize().x, m_Camera.getSize().y);
	}
}

