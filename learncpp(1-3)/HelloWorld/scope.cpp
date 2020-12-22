#include <iostream>

// x is not in scope anywhere in this function
void doSomething()
{
	std::cout << "Hello!\n";
}

int i_main()
{
	// x can not be used here because it's not in scope yet
	int x{ 0 };

	std::cout << x << std::endl; // x enters scope here and can now be used

	doSomething();

	return 0;
} // x goes out of scope here and can no longer be used

// Best practice
// Define your local variables as close to their first use as reasonable.