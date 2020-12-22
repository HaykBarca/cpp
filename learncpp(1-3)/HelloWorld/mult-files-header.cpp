#include <iostream>
#include "multi-files-header-2.h"

int n_main()
{
	int x{ add() };
	int y{ add() };

	std::cout << x << " + " << y << " = " << x + y << std::endl;

	return 0;
}