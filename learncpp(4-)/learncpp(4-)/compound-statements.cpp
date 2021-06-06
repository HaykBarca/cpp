#include <iostream>

// Functions are blocks
int getNumber()
{
	std::cout << "Please enter a number: ";
	int x{ };
	std::cin >> x;

	return x;
}

int addNumbers(int x, int y)
{
	return x + y;
}

int i_main()
{
	// get numbers from user
	int num1{ getNumber() };
	int num2{ getNumber() };

	//although functions can't be nested into other functions blocks can be nested into other blocks
	// add 2 numbers and print
	{
		int added{ addNumbers(num1, num2) };
		std::cout << num1 << " + " << num2 << " = " << added << "\n";
	}

	return 0;
}