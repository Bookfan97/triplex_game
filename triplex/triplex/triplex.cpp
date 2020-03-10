#include <iostream>

void PrintIntroduction()
{
    std::cout << "-------------------------------------------------------------\n";
    std::cout << "| You are a secret agent breaking into a secure server room |\n";
    std::cout << "| You need to enter the correct codes to enter...           |\n";
    std::cout << "-------------------------------------------------------------\n";
}

bool PlayGame()
{
    PrintIntroduction();

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;
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
        std::cout << "!!!!!!!!!!!!\n";
        std::cout << "| You win! |\n";
        std::cout << "!!!!!!!!!!!!\n";
        return true;
    }
    else
    {
        std::cout << "=============\n";
        std::cout << "! You Lose! |\n";
        std::cout << "=============\n";
        return false;
    }
}

int main()
{
    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
    }

    return 0;
}