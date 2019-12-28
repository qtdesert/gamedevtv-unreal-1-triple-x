#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
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

    std::cout << "\nYou are a galaxy smuggler breaking into a level " << Difficulty;
    std::cout << " secure server room to break into a space station.\n";
    std::cout << "You need to enter the correct codes to continue....\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "\n*** You broke the code! Keep going. ***\n";
        return true;
    }
    else
    {
        std::cout << "\n*** Wrong code! Try again. ***\n";
        return false;
    }

    std::cout << std::endl;
}

int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;
    
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "\n*** Great work, you broke all the codes. ***\n";
    return 0;
}
