#include <iostream>

int f_main()
{
	// The char data type is an integral type, meaning the underlying value is stored as an integer, and it’s guaranteed to be 1 - byte in size.
	// A char value is interpreted as an ASCII character. ASCII stands for American Standard Code for Information Interchange

	char ch1{ 'a' };
	std::cout << ch1 << std::endl;

	// static_cast turns character into character representation into given type
	std::cout << ch1 << " has ASCII character " << static_cast<int>(ch1) << std::endl;

	// char can only hold one symbol
	// ext put between double quotes(e.g.“Hello, world!”) is called a string. A string is a collection of sequential characters
	// Always put stand - alone chars in single quotes(e.g.‘t’ or ‘\n’, not “t” or “\n”). This helps the compiler optimize more effectively.


	return 0;
}