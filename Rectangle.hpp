#pragma once
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

// SFML
#include <SFML\Graphics\RectangleShape.hpp>

// Engine Classes
#include "Vector2.hpp"
#include "Color.hpp"

class Rectangle
{
public:
	Rectangle(const t2d::Vector2f& size = t2d::Vector2f(0,0));
	
	// Rotates the shape. Adds to the current angle.
	Rectangle& rotate(float angle);
	// Scales the shape, using float values x and y. Multiplies the currect scale of the object.
	Rectangle& scale(float x, float y);
	// Scales the shape, using t2d::Vector2f. Multiplies the currect scale of the object.
	Rectangle& scale(const t2d::Vector2f& factors);
	// Translates/moves the shape & Updates position of the shape using float values x and y. Adds to the current position.
	Rectangle& translate(float x, float y);
	// Translates/moves the shape & Updates position of the shape using t2d::Vector2f. Adds to the current position.
	Rectangle& translate(const t2d::Vector2f& factors);

	// Settings & Getters

	// Sets the position of the shape.
	Rectangle& setPosition(float x, float y);
	// Sets the position of shape using t2d::Vector2f.
	Rectangle& setPosition(t2d::Vector2f& position);
	// Gets the position of the shape.
	const t2d::Vector2f getPosition() const;

	// Sets the color of the shape.
	Rectangle& setColor(const t2d::Color color);
	// Returns the color used for this shape.
	const t2d::Color getColor() const;

	// Sets the rotation of the shape. Overwrites previous rotation angle
	Rectangle& setRotation(float angle);
	// Gets the rotation angle of the shape. 
	const float getRotation() const;

	// Sets the scaling for the shape using t2d::Vector2f. Overwrites previous scale
	Rectangle& setScale(const t2d::Vector2f& factors);
	// Sets the scaling for the shape using two float values for x and y. Overwrites previous scale
	Rectangle& setScale(float x_factor, float y_factor);
	// Gets the scaling of the shape.
	const t2d::Vector2f getScale() const;

	// Sets the size of the rectangle
	void setSize(t2d::Vector2f size);

	// Gets size of shape, in width and height.
	t2d::Vector2f getSize() const;

	// Returns the rectangle
	sf::RectangleShape& getRectangle();

private:

	// The actual rectangle.
	sf::RectangleShape m_RectangleShape;

	// Position x and y of rectangle.
	t2d::Vector2f m_Position;
	// Scale of the rectangle
	t2d::Vector2f m_Scale;
	// Size of the rectangle
	t2d::Vector2f m_Size;

	// Position in x.
	float m_PositionX;
	// Position in y.
	float m_PositionY;
	// Scale in x
	float m_ScaleX;
	// Scale in y
	float m_ScaleY;
	// Rotation angle of the rectangle.
	float m_Angle;
	// Width of rectangle.
	float m_Width;
	// Height of rectangle.
	float m_Height;

};

#endif