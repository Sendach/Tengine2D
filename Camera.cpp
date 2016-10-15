#include "Camera.hpp"

namespace t2d {

	Camera::Camera(sf::FloatRect rect)
	{
		_camera.reset(rect);
	}

	void Camera::reset(sf::FloatRect rect)
	{
		_camera.reset(rect);
	}

	//
	void Camera::zoom(float factor)
	{
		_camera.zoom(factor);
	}

	// 
	void Camera::setSize(float width, float height)
	{
		_camera.setSize(width, height);
		_width = width;
		_height = height;
	}

	// 
	const t2d::Vector2f& Camera::getSize()
	{
		return t2d::Vector2f(_camera.getSize().x, _camera.getSize().y);
	}

	sf::View& Camera::getCamera()
	{
		return _camera;
	}
}

