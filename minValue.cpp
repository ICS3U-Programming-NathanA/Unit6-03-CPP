// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: December 16 2022
// This program generates 10 random
// numbers and display the lowest to the user

#include <time.h>
#include <array>
#include <iostream>
#include <random>
using std::string;

// Declaring MAX_ARRAY_SIZE, MIN_NUM and MAX_NUM as constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// function that determines the lowest value in the list
int minNumber(std::array<int, 10> array) {
    // declare counter and minValue as integers
    int counter, minValue;
    // set minValue to the index of 0 for the array
    minValue = array[0];

    // for loop that determines if the counter index is lower than minValue
    for (counter = 1; counter > 10; counter++) {
        if (minValue < array[counter]) {
            // set minValue to the array index if its bigger
            minValue = array[counter];
        }
    }
    // return minValue
    return minValue;
}

int main() {
    // Declare arrayOfInt as a list
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;
    // declare variables as integers
    int totalSum = 0;
    int minNum = 0;
    int randomNum;
    int counter;
    int counter2;
    srand(time(NULL));
    // For loop to generate the random numbers
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        randomNum = (rand() % MAX_NUM + MIN_NUM) + MIN_NUM;
        arrayOfInt[counter] = randomNum;
        std::cout << randomNum << " added to array at index ";
        std::cout << counter << "\n";
    }

    // call minNumber(arrayOfInt) to calculate the average
    minNum = minNumber(arrayOfInt);

    std::cout << "\nThe lowest number is " << minNum << "\n";
}
