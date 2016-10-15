#pragma once
#ifndef VECTORFUNCTIONS_H
#define VECTORFUNCTIONS_H

#include <SFML\graphics.hpp>
#include <cmath>

namespace t2d {

	class VectorFunctions
	{
	public:
		static sf::Vector2f normalize(const sf::Vector2f& vector);

		static sf::Vector3f normalize(const sf::Vector3f& vector);

		static float dot(const sf::Vector2f& vector1, const sf::Vector2f& vector2);

		static sf::Vector3f cross(const sf::Vector2f& vector1, const sf::Vector2f& vector2);

		static sf::Vector3f cross(const sf::Vector3f& vector1, const sf::Vector3f& vector2);

		static sf::Vector2f v3tov2(const sf::Vector3f& vector);

		static sf::Vector3f v2tov3(const sf::Vector2f& vector);

		static float length(const sf::Vector2f& vector);

		static float length2(const sf::Vector2f& vector);
	};
}
#endif