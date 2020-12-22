#include <iostream>

int randomNumPicker()
{
    int x{ 1 + (std::rand() % 10) };

    return x;
}

int getUserInput()
{
    std::cout << "Please enter a random number: ";
    int x{};
    std::cin >> x;

    return x;
}

bool compareResult(int random, int user)
{
    if (random > user) {
        std::cout << "Too low\n";
        return false;
    } else if (random < user) {
        std::cout << "Too high\n";
        return false;
    } else {
        std::cout << "Correct\n";
        return true;
    }
}

int a_main()
{
    bool result{ false };

    // pick random number
    int randomNum{ randomNumPicker() };

    do {

        // get user input
        int userInput{ getUserInput() };

        // compare result and print
        result = compareResult(randomNum, userInput);
   
    } while (result == false);
    

    return 0;
}
