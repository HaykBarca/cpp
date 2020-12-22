#include <iostream>
#include <iomanip> // for std::setprecision()

int c_main()
{
	// Float, double, long double
	int x{ 5 }; // int - integer
	double y{ 5.01 }; // floating point literal
	float z{ 5.01f }; // floating point literal, f suffix means float type
	std::cout << y << std::endl;
	std::cout << z << std::endl;

	// std::cout truncating floating point numbers to 6 digits
	std::cout << 9.4542124f << std::endl;
	std::cout << 0.0000000024f << std::endl;

	std::cout << std::setprecision(16); // sets 16 digits precision
	std::cout << 9.4542124f << std::endl;
	std::cout << 0.0000000024f << std::endl;

	// Sometimes We lost some precision! When precision is lost because a number can’t be stored precisely, this is called a rounding error.

	// Inf - infinity, NaN - Not a Number, Ind - Indeterminate


	return 0;
}