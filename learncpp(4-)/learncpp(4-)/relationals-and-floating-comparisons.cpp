#include <iostream>

int g_main()
{
	int x{ 6 };
	if (x > 5)
		std::cout << x << "\n";

	bool falsyVal{ false };
	if (!falsyVal)
		std::cout << falsyVal << "\n";

	/*Best practice

		Don’t add unnecessary == or != to conditions.It makes them harder to read without offering any additional value.*/

	// * for floating point numbers don't use == and !=, instead see different algorithms for comparing floating point nums

	return 0;
}