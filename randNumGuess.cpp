// Copyright (c) 2021 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Dec. 8, 2021
// This program generates a random number
// then determines if a user has
// guessed it correctly.

#include <iostream>
#include <random>

int main() {
  int randomNumber;

  std::random_device rseed;


  // mersenne_twister
  std::mt19937 rgen(rseed());

  // [0, 9]
  std::uniform_int_distribution<int> idist(0, 9);

  randomNumber = idist(rgen);

    // this function checks if the user has
    // entered the correct number
    int userNumber;

    // input
    std::cout << "Today you will try to guess the random number!";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Enter an integer number between 0 and 9: ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;

    // process
    if (userNumber == randomNumber) {
        // output
        std::cout << "You are correct, congratulations!";
    } else {
        std::cout << "You are wrong! The correct answer is " << randomNumber;
        }
}
