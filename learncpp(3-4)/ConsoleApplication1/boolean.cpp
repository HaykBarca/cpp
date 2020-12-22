#include <iostream>

bool isEqual(int x, int y)
{
	return x == y;
}

int d_main()
{
	bool b1{ true };
	bool b2{ false };

	// prints as 1 or 0
	std::cout << "b1: " << b1 << std::endl;
	std::cout << "b2: " << b2 << std::endl;

	// change to print as true or false
	std::cout << std::boolalpha;

	std::cout << "b1: " << b1 << std::endl;
	std::cout << "b2: " << b2 << std::endl;

	//bool b3{ 4 }; makes error because int to bool requres narrowing conversion
	bool b4 = 4;

	std::cout << "b4: " << b4 << std::endl;

	//std::cout << std::noboolalpha; turns off boolalpha

	// Implementing isEqual function
	std::cout << "Please enter an integer: ";
	int answ1{};
	std::cin >> answ1;
	
	std::cout << "Please enter another integer: ";
	int answ2{};
	std::cin >> answ2;

	std::cout << answ1 << " is equal to " << answ2 << "? " << isEqual(answ1, answ2) << std::endl;

	return 0;
}