#include <iostream>

// A function prototype is a declaration statement that includes a function’s name,
// return type, and parameters.It does not include the function body.
// Forward declaration of add() (using a function prototype)
int add(int x, int y);

int j_main()
{
	std::cout << "The sum of 3 and 4 will be: " << add(3, 4) << std::endl;
	// Works because of forward declaration

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

// The one definition rule (or ODR for short) is a well-known rule in C++. The ODR has three parts:

// 1. Within a given file, a function, object, type, or template can only have one definition.
// 2. Within a given program, an object or normal function can only have one definition.
//    This distinction is made because programs can have more than one file.
// 3. Types, templates, inline functions, and variables are allowed to have identical definitions in different files.

// Definition and declaration
//
// A definition actually implements(for functions or types) or instantiates(for variables) the identifier.
//
// A declaration is a statement that tells the compiler about the existence of an identifier and its type information.