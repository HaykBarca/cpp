#include <iostream>

int g_main()
{
	int x{ 6 };
	int y{ 7 };
	if (!(x > y))
		std::cout << "y greater than x.\n";
	else if (!(x < y))
		std::cout << "x greater than y.\n";

	/*Best practice

		If logical NOT is intended to operate on the result of other operators,
		the other operatorsand their operands need to be enclosed in parentheses.*/

	if (x == 5 || x == 6)
		std::cout << x << "\n";

	if (x == 6 && y == 7)
		std::cout << y << "\n";

	/*Best practice

		When mixing logical AND and logical OR in a single expression,
		explicitly parenthesize each operation to ensure they evaluate how you intend.*/

	return 0;
}