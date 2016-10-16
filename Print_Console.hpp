#pragma once
#ifndef PRINT_CONSOLE_HPP
#define PRINT_CONSOLE_HPP

#include <iostream>
namespace t2d {

	// This file contains two functions that makes it possible to print out an infinte amount of arguments.
	//  Varidic template class or function (In this case functions) that supports an 
	// The ... operator (ellipsis) mean that there are an unknown number amount of arguments following.


	// Recursive Function.
	// It takes an unknown number of arguments. And prints one item out at a time.

	template<class First, class... Rest>
	void Print_Console(First item, const Rest&... rest)
	{
		std::cout << item;

		// This function is entered when "rest" is reached, and we want to output the final item.
		Print_Console(rest...);
	}

	// When it is time to output the final item, this function is entered. Which does so.
	template<class First, class... Rest>
	void Print_Console(First item)
	{
		std::cout << item;
	}
}
#endif