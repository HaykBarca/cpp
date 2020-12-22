#include <iostream>

// In C++ there is no nested function, you cannot declare function inside antother
void foo()
{
	std::cout << "Empty function \n";
}

int askUserForInput()
{
	int num{};
	std::cout << "Please input a number: ";
	std::cin >> num;
	return num;
}

// Your main function should return 0 if the program ran normally. 0 is a status code success.
int c_main()
{
	int a{ askUserForInput() };
	int b{ askUserForInput() };
	std::cout << a + b;
	/*std::cout << "Calling function foo()\n";
	foo();
	std::cout << "Finsih call function foo()";*/
	return 0;
}