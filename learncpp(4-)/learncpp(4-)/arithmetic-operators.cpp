#include <iostream>

int b_main()
{
	// There are 2 unary arithmetic operators (operators that take 1 operand) +, -;
	// x = 5; -x means -1 * 5 and +x means +1 * 5

	std::cout << 5 - -3 << "\n"; // binary - operator and unary - operator

	// There are 5 binary arithmetic operators
	// 1. + addition;
	// 2. - subtraction;
	// 3. * multiplication;
	// 4. / division;
	// 5. % modulus(reminder)

	// Integer and floating point division
	std::cout << 7.0 / 4 << "\n"; // 1.75 because one or two operands are with floating point
	std::cout << 7 / 4.0 << "\n"; // 1.75 because one or two operands are with floating point
	std::cout << 7.0 / 4.0 << "\n"; // 1.75 because one or two operands are with floating point
	std::cout << 7 / 4 << "\n"; // 1 because integer division goes here 2 operands are integers
	std::cout << static_cast<double>(7) / static_cast<double>(4) << "\n"; // 1.75 beacuse we changed type to double

	double x{ 5.0 };
	int y{ 2 };
	std::cout << x / y << "\n";
	x += y;
	std::cout << x << "\n";

	int num1{ 6 };
	int num2{ 4 };
	std::cout << num1 % num2 << "\n"; // Modulus works only with integersand returns remainder of the division

	return 0;
}