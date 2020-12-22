#include <iostream>
#include <cstdint>

// RAM (random access memory) stores datas. Data measuring minimal amount is BIT (binary digits) which include 0 or 1.
// Memory has addresses and in one particular address keeps 1 BYTE of data which represents of 8 BIT of data (sequnce of 8 0-1-s). In CPP we work with Bytes.
// Fundamental Types
// 1. Basic types,
// 2. Primitive types,
// 3. Built-in types

/* 
	List of Fundamental data types
	1. float, double, long double - Floating point - 3.15645
	2. bool - true, false
	3. char, wchar_t, char8_t, char16_t, char32_t - a single character of text - "c"
	4. short, int, long, long long - positive and negative whole numbers - 64
	5. std::nullptr_t - null pointer - nullptr
	6. void - no type(absence) - n/a

	_t stands for type, it means the type is from modern language standards
*/

int b_main()
{
	/*int x{ 122354 };
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(char) << std::endl;
	std::cout << sizeof(bool) << std::endl;
	std::cout << sizeof(x) << std::endl;*/

	// C99 defined a set of fixed - width integers(in the stdint.h header) that are guaranteed to have the same size on any architecture.

	/*std::int16_t i{ 5 };
	std::cout << i << std::endl;*/
	// The above fixed - width integers should be avoided, as they may not be defined on all target architectures.

	/* Integer best practices

		Now that fixed - width integers have been added to C++, the best practice for integers in C++ is as follows :

		1. int should be preferred when the size of the integer doesn’t matter(e.g.the number will always fit within the range of a 2 byte signed integer).
		   For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16 or 32 bits(the numbers will fit either way).
		   This will cover the vast majority of the cases you’re likely to run across.
		2. If you need a variable guaranteed to be a particular size and want to favor performance, use std::int_fast#_t.
		3. If you need a variable guaranteed to be a particular sizeand want to favor memory conservation over performance, use std::int_least#_t.
		   This is used most often when allocating lots of variables.*/

	/*
		426030 = 4.26030e5 = 4.26030 * 10(5)
		63.549 = 6.3549e1 = 6.3549 * 10(1)
		0.004000 = 4.000e-3 = 4.000 * 10(-3)
		123.005 = 1.23005e2 = 1.23005 * 10(2)
		146000 = 1.46000e5 = 1.46000 * 10(5)
		146000.001 = 1.46000001e5 = 1.46000001 * 10(5)
		0.0000000008 = 8e-10 = 8 * 10(-10)
		34500.0 = 3.45000e4 = 6.45000 * 10(4)
	*/

	return 0;
}
