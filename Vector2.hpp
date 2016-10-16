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

		// Create overload Operator functions so the user can perform math tasks.
		
		template <class T> friend std::ostream& operator << (std::ostream& output, const Vector2<T>& item );
	
	private:
		
		
	};

	template <class T>
	Vector2<T>::Vector2(T X, T Y)
	{
		x = X;
		y = Y;
	}

	template <class T>
	std::ostream& operator << (std::ostream& output, const Vector2<T>& item)
	{
		output << "X: " << item.x << " Y: " << item.y;
		return output;
	}

// Define the most common types
typedef Vector2<int>	      Vector2i;
typedef Vector2<unsigned int> Vector2u;
typedef Vector2<float>        Vector2f;

}
#endif