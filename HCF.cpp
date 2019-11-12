// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program finds the HCF

#include <iostream>
#include <string>

int main() {
    // This function finds the HCF

    std::string firstNumAsString;
    std::string secondNumAsString;
    int firstNum;
    int secondNum;
    int smaller = 0;
    int hcf = 0;
    int counter;

    // input
    std::cout << "Welcome to the HCF calculator." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "First number: ";
    std::cin >> firstNumAsString;

    // process & output
    try {
        firstNum = std::stoi(firstNumAsString);
        std::cout << "Second number: ";
        std::cin >> secondNumAsString;
        try {
            secondNum = std::stoi(secondNumAsString);
            if (firstNum > secondNum) {
                smaller = secondNum;
            } else {
                smaller = firstNum;
            }
            // Use loop to find HCF
            for (counter = 1; counter < smaller + 1; counter++) {
                if (firstNum % counter == 0 && secondNum % counter == 0) {
                    hcf = counter; }
            }
        std::cout << "" << std::endl;
        std::cout << "The H.C.F of " << firstNum << " and " << secondNum
                  << " is " << hcf << "." << std::endl;
        } catch (std::invalid_argument) {
            std::cout << "Wrong input. Try again." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Wrong input. Try again." << std::endl;
    }
}
