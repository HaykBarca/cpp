#include <iostream>
#include "calculator-functions.h"

int readNumber()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;

	return x;
}

void writeAnswer(int x, int y)
{
	std::cout << x << " + " << y << " = " << x + y << std::endl;
	std::cout << "Bravo!" << std::endl;
}