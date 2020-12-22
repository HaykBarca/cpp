#include <iostream>

int d_main()
{
	int x{ 5 };
	int y{ ++x };
	std::cout << x << " " << y << "\n"; // Evaluates to x-6 y-6

	int z{ 5 };
	int c{ z++ };
	std::cout << z << " " << c << "\n"; // Evaluates to z-6 c-5

	/*Best practice

		Strongly favor the prefix version of the incrementand decrement operators,
		as they are generally more performant, and you’re less likely to run into strange issues with them.*/

	return 0;
}