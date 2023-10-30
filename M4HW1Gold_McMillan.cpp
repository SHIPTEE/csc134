#include <iostream>
using namespace std;

/*
CSC 134
M4HW1_McMillan - Times Table- Gold
mcmillant
10/16/2023
  */


int main() {
    int number;

    // Ask the user to enter a number from 1 to 12
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    // Check if the input is within the valid range
    if (number < 1 || number > 12) {
        cout << "Invalid input. Please enter a number between 1 and 12." << endl;
        return 1; // Exit with an error code
    }

    // Display the multiplication table for the entered number
    cout << "Multiplication table for " << number << ":" << endl;
    for (int i = 1; i <= 12; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0; 
}