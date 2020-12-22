#include <iostream>

int h_main()
{
	int width(5); // direct initialization
	int width1 = 7; // copy initialization
	/* For simple data types (like integers), copy and direct initialization are essentially the same.
	But for some advanced types, direct initialization can perform better than copy initialization.
	Prior to C++11, direct initialization was recommended over copy initialization in most cases because of the performance boost.*/
	int height = { 2 }; // copy brace initialization
	int height1{ 3 }; // direct brace initialization

	std::cout << width;
	std::cout << '\n';
	std::cout << width1;
	std::cout << '\n';
	std::cout << height;
	std::cout << '\n';
	std::cout << height1;
	/* Initialization gives a variable an initial value at the point when it is created.
	Assignment gives a variable a value at some point after the variable is created. */

	// Favor direct brace initialization whenever possible.
	return 0;
}
