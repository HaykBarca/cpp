#include <iostream>

int g_main()
{
	// In programming, a constant is a fixed value that may not be changed. C++ has two kinds of constants : literal constants, and symbolic constants.

	// Literals are values directly inserted into the code

	int x{ 5 }; // integer literal
	std::cout << 3.6 << "\n"; // double literal

	// Literal suffixes usually adding this for describing type
	long y{ 6L }; // 6 has type long

	// By default, floating point literal constants have a type of double. To make them float literals instead, the f(or F) suffix should be used :
	float f{ 5.0f }; // 5.0 has type float
	
	float d{ 4.1 }; // d is not float literal its double, unless we not provide suffix f (double 8-bytes, float 4-bytes);

	const double gravity{ 9.8 }; // Can't be changed, it'll cause compile error, so does if value not initalized

	// Constants can be coomplie time and runtime
	const double pi{ 3.14 }; /* pi constant is complie time, we assigned value before complitaion */

	std::cout << "Please enter an integer: ";
	int inputInt{};
	std::cin >> inputInt;
	const int userInput{ inputInt }; // userInput constant is runtime constant, cause we can't assign a value before compilation

	// constexpr tells us that the constant is compile time constant
	constexpr double gravity2{ 9.8 }; // ok, the value of 9.8 can be resolved at compile-time

	/* Best practice

		Any variable that should not be modifiable after initializationand whose initializer is known at compile - time should be declared as constexpr.
		Any variable that should not be modifiable after initialization and whose initializer is not known at compile - time should be declared as const.
	*/

	return 0;
}