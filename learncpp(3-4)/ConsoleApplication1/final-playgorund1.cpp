#include <iostream>

double getInteger()
{
	std::cout << "Please enter a double value: ";
	double x{};
	std::cin >> x;

	return x;
}

char getSymbol()
{
	std::cout << "Enter one of the following: +, -, *, or /: ";
	char symbol{};
	std::cin >> symbol;

	return symbol;
}

void computeAnswPrint(double firstVal, double secondVal, char symbol)
{
	if (symbol == '+')
		std::cout << firstVal << " + " << secondVal << " = " << firstVal + secondVal << "\n";
	else if (symbol == '-')
		std::cout << firstVal << " - " << secondVal << " = " << firstVal - secondVal << "\n";
	else if (symbol == '*')
		std::cout << firstVal << " * " << secondVal << " = " << firstVal * secondVal << "\n";
	else if (symbol == '/')
		std::cout << firstVal << " / " << secondVal << " = " << firstVal / secondVal << "\n";

}

int i_main()
{
	// User enter value
	double firstVal{ getInteger() };

	// User enter second value
	double secondVal{ getInteger() };

	// User enter symbol
	char symbol{ getSymbol() };

	// Compute answer and print if not correct do not print
	computeAnswPrint(firstVal, secondVal, symbol);

	return 0;
}