#include <iostream>
#include<ctime>

void PrintIntroduction()
{
    std::cout << "-------------------------------------------------------------\n";
    std::cout << "| You are a secret agent breaking into a secure server room |\n";
    std::cout << "| You need to enter the correct codes to enter...           |\n";
    std::cout << "-------------------------------------------------------------\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction();

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    // Print CodeSum and CodeProduct to the terminal
    std::cout << "| There are 3 numbers in the code                           | \n";
    std::cout << "| The codes add-up to: " << CodeSum <<"                                    | \n";
    std::cout << "| The codes multiply to give: " << CodeProduct << "                            |" << std::endl;
    std::cout << "-------------------------------------------------------------\n";
    std::cout << "Enter the codes: " << std::endl;
    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
        std::cout << "| COMBINATION SUCCESSFUL |\n";
        std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
        return true;
    }
    else
    {
        std::cout << "=============================\n";
        std::cout << "! ERROR INVALID COMBINATION |\n";
        std::cout << "=============================\n";
        return false;
    }
}

int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    int MaxDifficulty = 5;
    while (LevelDifficulty<= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "*******************************\n";
    std::cout << "*** SUCCESS ALL FILES FOUND ***\n";
    std::cout << "*******************************\n";
    return 0;
}