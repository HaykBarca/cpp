#include <iostream>

// A function parameter is a variable used in a function. Function parameters are defined in the
// function declaration by placing them in between the parenthesis after the function identifier

// An argument is a value that is passed from the caller to the function when a function call is made :

void printValues(int x, int y)
{
	std::cout << x << '\n';
	std::cout << y << '\n';
}

// When a function is called, all of the parameters of the function are created as variables,
// and the value of each of the arguments is copied into the matching parameter.
// This process is called pass by value.

int doubleNumber(int x)
{
	return x * 2;
}

int getUserValue()
{
	int num{};
	std::cout << "Please input number ";
	std::cin >> num;
	return num;
}

int a_main()
{
	printValues(1, 12);
	std::cout << doubleNumber(getUserValue());

	return 0;
}