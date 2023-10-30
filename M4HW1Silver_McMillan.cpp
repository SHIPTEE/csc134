#include <iostream>
using namespace std;

/*
CSC 134
M4HW1_McMillan - Times Table- Silver
mcmillant
10/16/2023
  */

int main() {
    int tableSize = 12;
    int number;

    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    // Print the table
    //for (int i = number; i <= tableSize; i++) {
        for (int j = 1; j <= tableSize; j++) {
            // Calculate and print in the desired format
         int i = number;
            int product = i * j;
            cout << i << " times " << j << " is " << product << endl;
        }
   // }

    return 0;
}