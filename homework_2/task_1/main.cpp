#include <iostream>
#include <cstdlib>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 generator(rd()); 
    std::uniform_int_distribution<int> dist(0, 99);

    int number = dist(generator);
    int input;

    while (true) {
        std::cout << "Guess the number between 0 and 99: ";
        
        if (std::cin >> input){
            if (input < 0 or input > 99) {
            std::cout << "[WARNING] : Number must be between 0 and 99" << std::endl;
            } else {
                if(input > number) {
                    std::cout << "The number is smaller then the one chosen by you" << std::endl;
                } else if (input < number) {
                    std::cout << "The number is greater then the one chosen by you" << std::endl;
                } else {
                    std::cout << "You won!" << std::endl;
                    std::cout << "The number to be guessed was " << number << std::endl;
                    return EXIT_SUCCESS;
                    }
                }
        } else {
            std::cout << "“Error encountered, exiting...”" << std::endl;
            std::cout << "The number to be guessed was " << number << std::endl;
            return EXIT_FAILURE;
        }
    }
}

