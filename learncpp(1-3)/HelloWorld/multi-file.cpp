#include <iostream>

// Forward declaration
int getUserInput();

int l_main()
{
	int x{ getUserInput() };
	int y{ getUserInput() };

	std::cout << x << " + " << y << " = " << x + y << std::endl;

	return 0;
}
