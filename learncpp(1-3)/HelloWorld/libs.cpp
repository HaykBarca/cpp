#include <iostream>

int e_main()
{
	/* If you'll not initialize or assigne your variable it can behave as undefined,
	it may even be given random value that have been stored in memory before that */
	int x{ 5 };

	// insertion operator (<<), cout stands for “character output”, endl stands for “end line”
	std::cout << x << " Hello" << std::endl;
	// However '\n' is more preffered because it doesn't need to flush output
	std::cout << "Hello from new line" << "\n";
	std::cout << "New line Using '\\n' \n";
	std::cout << "Its possible even if its inside string \n";

	// Best practice is to initialize the variable first.
	int y{ };
	std::cout << "Please type some number ";
	// cin stands for “character input”
	std::cin >> y;
	std::cout << "You typed " << y;
	return 0;
}