// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which makes you play a numebr guess game.

#include <iostream>
#include <cstdlib>
int rand();

int main() {
    // This is what runs the game.
    int guessedNumber;

    // Input
    std::cout << "I am thinking of a number...";

    while (true) {
        std::cout << "What do you think it is?: ";
        std::cin >> guessedNumber;
        std::cout << "" << std::endl;

    // Process
        if (guessedNumber == (rand() % 10) + 1) {
        // Output
            std::cout << "You did it, you won!";
            std::cout << "" << std::endl;
            break;
        } else {
            std::cout << "Wrong, try again.";
            std::cout << "" << std::endl;
        }
    }
}
