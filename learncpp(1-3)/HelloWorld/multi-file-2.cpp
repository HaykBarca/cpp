#include <iostream>

int getUserInput()
{
	std::cout << "Please enter and integer: ";
	int x{};
	std::cin >> x;

	return x;
}