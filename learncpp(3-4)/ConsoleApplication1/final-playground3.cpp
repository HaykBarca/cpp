#include <iostream>
#include "final-playground3.h"

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double x{};
	std::cin >> x;

	return x;
}

double calculateHeight(double height, int second)
{
	double remainingHeight{ height - (constants::gravity * second * second / 2) };

	return remainingHeight;
}

void printAnswer(double remainingHeight, int second)
{
	if (remainingHeight <= 0)
		std::cout << "At " << second << " seconds, the ball is on the ground.\n";
	else
		std::cout << "At " << second << " seconds, the ball is at height: " << remainingHeight << " meters.\n";
}

int main()
{
	// Enter the height of the towers in meter
	double height{ getTowerHeight() };

	// define gravity 9.2m2

	// Height of the ball after 0, 1, 2, 3, 4, 5 seconds from start (no velocity) (distance fallen = gravity_constant * x_seconds2 / 2)
	double zero{calculateHeight(height, 0)};
	printAnswer(zero, 0);
	double one{calculateHeight(height, 1)};
	printAnswer(one, 1);
	double two{calculateHeight(height, 2)};
	printAnswer(two, 2);
	double three{calculateHeight(height, 3)};
	printAnswer(three, 3);
	double four{calculateHeight(height, 4)};
	printAnswer(four, 4);
	double five{calculateHeight(height, 5)};
	printAnswer(five, 5);

	// add header file as constants.h

	return 0;
}