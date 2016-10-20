#pragma once
#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <iostream>

namespace t2d {

	// A vector 2D template class
	template <class T>
	class Vector2
	{
	public:
		Vector2() { }
		Vector2(T x, T y);
		
		T x;
		T y;

		// Overload Operators //

		// Overloading << So user can print out the entire vector
		template <class T> friend std::ostream& operator << (std::ostream& output, const Vector2<T>& item );
		
		// Overloading * So user can multiply a scalar value, such as int, or float, with the vector.
		friend t2d::Vector2<T> operator* (const Vector2<T>& left, T right);
		// Overloading * So user can multiply a scalar value, such as int, or float, with the vector.
		friend t2d::Vector2<T> operator* (T left, const Vector2<T>& right);
	};

	template <class T>
	Vector2<T>::Vector2(T X, T Y)
	{
		x = X;
		y = Y;
	}

	// Overloading << So we can print out the entire vector
	template <class T>
	std::ostream& operator << (std::ostream& output, const Vector2<T>& item)
	{
		output << "X: " << item.x << " Y: " << item.y;
		return output;
	}

	template <class T>
	// Overloading * So user can multiply a scalar value, such as int, or float, with the vector.
	t2d::Vector2<T> operator* (const Vector2<T>& left, T right)
	{
		return t2d::Vector2f(left.x * right, left.y * right);
	}

	// Overloading * So user can multiply a scalar value, such as int, or float, with the vector.
	template <class T>
	t2d::Vector2<T> operator* (T left, const Vector2<T>& right)
	{
		sf::Vector2 x;
		return t2d::Vector2f(right.x * left, right.y * left);
	}

// Define the most common types
typedef Vector2<int>	      Vector2i;
typedef Vector2<unsigned int> Vector2u;
typedef Vector2<float>        Vector2f;

}
#endif