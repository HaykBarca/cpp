#include "quiz-functions-op.h"

int main()
{
	// readNumber
	int x{ readNumber() };
	int y{ readNumber() };

	// writeAnswer
	writeAnswer(x, y);

	return 0;
}