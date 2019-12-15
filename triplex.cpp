#include <iostream>

int main()
{
    std::cout << "You are a galaxy smuggler breaking into a secure server room to break into a space station.";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue....\n";

    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 9;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl << std::endl;

    int PlayerGuess;

    return 0;
}
