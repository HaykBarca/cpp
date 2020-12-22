#include <iostream>

int g_main()
{
	int number{ 0 };
	int secondNumber{ 0 };
	std::cout << "Enter an integer: ";
	std::cin >> number;
	std::cout << "Enter another integer: ";
	std::cin >> secondNumber;

	std::cout << number << " + " << secondNumber << " is " << number + secondNumber << "\n";
	std::cout << number << " - " << secondNumber << " is " << number - secondNumber << "\n";

	return 0;
}