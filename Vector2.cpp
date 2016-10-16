#include "Vector2.hpp"

namespace t2d {

	template <class T>
	Vector2<T>::Vector2(T X, T Y)
	{
		x = X;
		y = Y;
	}

	template <class T>
	std::ostream& operator << (const Vector2<T>& item, std::ostream& output)
	{
		output << item.x << " " << item.y;
		return output;
	}

	
	// Forward declaration - Explicit template instantiation.
	// All the types that wants to use this class has to be instantiated.
	template class Vector2<float>;
	template class Vector2<int>;
	template class Vector2<double>;
	template class Vector2<unsigned int>;
	template class Vector2<long>;
}
