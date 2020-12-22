#include <iostream>

int f_main()
{
	/* Operators producing values, they can have operands. Operator's Arity - Unary, Binary, Ternary (it depends on how many
	operands they can have. Exmp. ! _ unary, + - * / _ binary, ?: _ ternary)*/

	/* A literal(also known as a literal constant) is a fixed value that has been inserted directly into the source code */

	/* An expression is a combination of literals, variables, operators, and explicit function calls(not shown above) that produce
	a single output value.When an expression is executed, each of the terms in the expression is evaluated until a single value
	remains(this process is called evaluation).That single value is the result of the expression. */

	int x{ 2 + 3 }; // type identifier { expression };

	std::cout << x;

	return 0;
}