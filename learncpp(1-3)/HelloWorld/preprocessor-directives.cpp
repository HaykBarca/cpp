#include <iostream> // #include is a preprocessor directive
// iostream stands for - input output stream

// Preprocessor directives (often just called directives) are instructions that start with a # symbol and end with a newline (NOT a semicolon).
// These directives tell the preprocessor to perform specific particular text manipulation tasks.

#define PRINT_JOE

int m_main()
{
	#ifdef PRINT_JOE
		std::cout << "Joe\n"; // if PRINT_JOE is defined, compile this code
	#endif

	#ifndef PRINT_BOB
		std::cout << "Bob\n"; // if PRINT_BOB is NOT defined, compile this code
	#endif

	#if 0 // Don't compile anything starting here
		std::cout << "Bob\n";
		std::cout << "Steve\n";
	#endif // until this point

	return 0;
}