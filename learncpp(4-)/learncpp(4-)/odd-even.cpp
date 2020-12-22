#include <iostream>

bool isEven(int num)
{
	return num % 2 == 0;
}

int c_main()
{
	std::cout << "Please enter an integer: ";
	int x{};
	std::cin >> x;

	bool isNumEven{ isEven(x) };

	if (isNumEven)
		std::cout << x << " is even.";
	else
		std::cout << x << " is odd.";

	return 0;
}