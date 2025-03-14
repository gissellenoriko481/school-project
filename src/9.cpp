
// This is a simple C++ program that generates a random number between 1 and 10
#include <iostream>
#include <ctime>

int main() {
    // Initialize the seed
    srand(time(NULL));

    // Generate a random number between 1 and 10
    int randomNumber = rand() % 10 + 1;

    std::cout << "The randomly generated number is: " << randomNumber << std::endl;

    return 0;
}