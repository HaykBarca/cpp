#include <iostream>

int a_main()
{
	std::cout << 3 + 4 * 2 << "\n"; // 11 beacuse * have higher precedence than +
	std::cout << (3 + 4) * 2 << "\n"; // 14 bacuase () have hisher precedence than *

	/*Best practice

		Use parentheses to make it clear how an expression should evaluate, even if they are technically unnecessary.*/

	// 3 + 4 + 5 > ((3 + 4) + 5)
	// x = y = z > x = (y = z)
	// z *= ++y + 5 > z *= ((++y) + 5)
 
	return 0;
}