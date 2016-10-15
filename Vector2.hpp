#ifndef VECTOR2_HPP
#define VECTOR2_HPP


namespace t2d {

	template <class T>
	class Vector2
	{
	public:
		Vector2() { }
		Vector2(T x, T y);
		
		

		T x;
		T y;

	};

	template <class T>
	Vector2<T>::Vector2(T X, T Y)
	{
		x = X;
		y = Y;
	}

// Define the most common types
typedef Vector2<int>	      Vector2i;
typedef Vector2<unsigned int> Vector2u;
typedef Vector2<float>        Vector2f;

}
#endif