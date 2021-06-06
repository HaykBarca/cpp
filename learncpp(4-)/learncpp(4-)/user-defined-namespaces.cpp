#include <iostream>
#include "user-defined-namespaces.h"

// We can have namespaces to prevent naming collision(if we have same name declarations)
namespace foo
{
	int returnSomething()
	{
		float randomNum{ 1.2f };
		double someSum{ basicMath::pi + randomNum };
		return someSum;
	}
}

namespace boo
{
	int returnSomething()
	{
		double someSum{ basicMath::pi - 1 };
		return someSum;
	}
}


int main()
{
	std::cout << foo::returnSomething() << "\n";
	std::cout << boo::returnSomething() << "\n";

	return 0;
}