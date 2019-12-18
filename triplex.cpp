#include <iostream>

int main()
{
    std::cout << "You are a galaxy smuggler breaking into a secure server room to break into a space station.\n";
    std::cout << "You need to enter the correct codes to continue....\n\n";

    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 7;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct && CodeProduct)
    {
        std::cout << "You broke the code! The space station is now open.\n";
    }
    else
    {
        std::cout << "Wrong code! The space station is still closed.\n";
    }

    std::cout << std::endl;
    return 0;
}
