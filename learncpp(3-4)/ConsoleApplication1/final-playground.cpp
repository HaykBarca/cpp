#include <iostream>

int h_main()
{
	// Hexadecimal numbers are more mobile than binary, that's why memory addresses is hex numbers

	// User age number
	int age{ 27 }; // int is good choice here

	// Wheter user likes color or not
	bool answ{ true };

	// pi (3.14159265)
	constexpr double pi{ 3.14159265 };

	// The number of pages in a textbook
	std::int_least16_t{ 956 }; // since books have usually more than 255 pages and probably not higher than 32,767 pages

	// The length of a couch in feet, to 2 decimal places
	float couch{ 99.03f };

	// How many times you’ve blinked since you were born (note: answer is in the millions)
	std::int_least32_t blinks{ 6844135 };

	// A user selecting an option from a menu by letter
	char option{ 'a' };

	// The year someone was born (assuming size is important)
	std::int_least16_t year{ 1993 };

	return 0;
}