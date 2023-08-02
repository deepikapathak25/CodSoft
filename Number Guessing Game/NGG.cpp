#include <iostream>
#include <ctime>
#include <cstdlib>

int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    int minNumber = 1;
    int maxNumber = 100;
    int secretNumber = generateRandomNumber(minNumber, maxNumber);
    int guess;
    int attempts = 0;
    const int maxAttempts = 7;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have picked a number between " << minNumber << " and " << maxNumber << ".\n";

    while (attempts < maxAttempts) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        ++attempts;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Too high! Try again.\n";
        }
    }

    if (attempts == maxAttempts) {
        std::cout << "Sorry, you have used all " << maxAttempts << " attempts. The correct number was " << secretNumber << ".\n";
    }

    return 0;
}
