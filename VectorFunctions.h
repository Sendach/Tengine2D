#ifndef VECTORFUNCTIONS_H
#define VECTORFUNCTIONS_H

#include <SFML\graphics.hpp>
#include <math.h>

sf::Vector2f normalize(const sf::Vector2f& vector)
{
	float divisor = 1.0f / std::sqrtf(vector.x * vector.x + vector.y * vector.y);
	return sf::Vector2f(vector.x * divisor, vector.y * divisor);
}

sf::Vector3f normalize(const sf::Vector3f& vector)
{
	float divisor = 1.0f / std::sqrtf(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
	return sf::Vector3f(vector.x * divisor, vector.y * divisor, vector.z * divisor);
}

float dot(const sf::Vector2f& vector1, const sf::Vector2f& vector2)
{
	return vector1.x * vector2.x + vector1.y * vector2.y;
}

sf::Vector3f cross(const sf::Vector2f& vector1, const sf::Vector2f& vector2)
{
	return sf::Vector3f(0.0f, 0.0f, vector1.x * vector2.y - vector1.y * vector2.x);
}

sf::Vector3f cross(const sf::Vector3f& vector1, const sf::Vector3f& vector2)
{
	return sf::Vector3f(vector1.y * vector2.z - vector1.z * vector2.y, vector1.z * vector2.x - vector1.x * vector2.z, vector1.x * vector2.y - vector1.y * vector2.x);
}

sf::Vector2f v3tov2(sf::Vector3f vector)
{
	return sf::Vector2f(vector.x, vector.y);
}

sf::Vector3f v2tov3(sf::Vector2f vector)
{
	return sf::Vector3f(vector.x, vector.y, 0.0f);
}

#endif