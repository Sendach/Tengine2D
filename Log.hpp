#pragma once
#ifndef CONSOLEOUTPUT_HPP
#define CONSOLEOUTPUT_HPP

#include <iostream>
#include "Vector2.hpp"

namespace t2d {

	// This file contains two functions that makes it possible to print out an infinte amount of arguments.
	//  Varidic template class or function (In this case functions) that supports an 
	// The ... operator (ellipsis) mean that there are an unknown number amount of arguments following.

	class Log {
		
	public:

		// Recursive Function.
		// It takes an unknown number of arguments. And prints one item out at a time.
		template <class First, class... Rest>
		Log(const First item, const Rest&... rest);

		// When it is time to output the final item, this function is entered. Which does so.
		template <class First, class... Rest>
		Log(const First item);
		
	};

	// Recursive Function.
	// It takes an unknown number of arguments. And prints one item out at a time.

	template<class First, class... Rest>
	Log::Log(const First item, const Rest&... rest)
	{
		std::cout << item;

		Log(rest...);
	}

	// When it is time to output the final item, this function is entered. Which does so.
	template<class First, class... Rest>
	Log::Log(const First item)
	{
		std::cout << item;
	}
}
#endif