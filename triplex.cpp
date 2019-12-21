#include <iostream>

void PrintIntroduction()
{
    std::cout << "\n   +--------------+\n";
    std::cout << "   |.------------.|\n";
    std::cout << "   ||            ||\n";
    std::cout << "   ||            ||\n";
    std::cout << "   ||            ||\n";
    std::cout << "   ||            ||\n";
    std::cout << "   |+------------+|\n";
    std::cout << "   +-..--------..-+\n";
    std::cout << "   .--------------.\n";
    std::cout << "  / /============\\ \\\n";
    std::cout << " / /==============\\ \\\n";
    std::cout << "/____________________\\\n";
    std::cout << "\\____________________/\n";

    std::cout << "\nYou are a galaxy smuggler breaking into a secure server room to break into a space station.\n";
    std::cout << "You need to enter the correct codes to continue....\n\n";
}

bool PlayGame()
{
    PrintIntroduction();

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
        std::cout << "\nYou broke the code!\n";
        return true;
    }
    else
    {
        std::cout << "\nWrong code!\n";
        return false;
    }

    std::cout << std::endl;
}

int main()
{
    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }
    return 0;
}
