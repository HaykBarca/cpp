#include <iostream>
#include "calculator-functions.h"

int getNumber()
{
	int num{};
	std::cout << "Please enter a number: ";
	std::cin >> num;

	return num;
}

int getOperator()
{
	int operate{};
	std::cout << "Please enter a operator: ";
	std::cin >> operate;

	return operate;
}

int printResult(int first, int second)
{
	return first + second;
}