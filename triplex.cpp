#include <iostream>
int main()
{
    //print welcome messages to the terminal
    std::cout <<"You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout <<"You need to enter the correct codes to enter...";

    //declare variables
    int a = 4;
    int b = 3;
    int c = 2;

    int sum = a + b + c;
    int product = a * b * c;

    //print values to the terminal
    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}