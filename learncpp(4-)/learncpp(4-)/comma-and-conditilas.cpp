#include <iostream>

int e_main()
{
	int x{ 5 };
	int y{ 6 };
	int z{ 7 };
	std::cout << (++x, ++y, ++z) << "\n"; // incremnets and returns last one

	/*Best practice

		Avoid using the comma operator, except within for loops.*/

	// Conditional ternary operator
	int larger{ (x < y) ? y : x };
	std::cout << larger << "\n";

	/*Best practice

		Always parenthesize the conditional part of the conditional operator,
		and consider parenthesizing the whole thing as well.*/

	constexpr double pi{ 3.14 };
	// std::cout << ((pi > 3.0) ? pi : "lowe than pi") << "\n"; // won't compile because 2 different types
	std::cout << ((pi > 3.0) ? pi : 3.0) << "\n";

	return 0;
}