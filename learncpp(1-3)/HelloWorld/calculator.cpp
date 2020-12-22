#include <iostream>
#include "calculator-functions.h"

int q_main()
{
	// Get first num from user
	int firstNum{ getNumber() };
	std::cout << "You typed: " << firstNum << std::endl;

	// Get operator from user
	// int operate{ getOperator() };
	// std::cout << "You typed: " << operate << std::endl;

	// Get second num from user
	int secondNum{ getNumber() };
	std::cout << "You typed: " << secondNum << std::endl;

	// print result
	int result{ printResult(firstNum, secondNum) };
	std::cout << "The result is: " << result << std::endl;

	return 0;
}