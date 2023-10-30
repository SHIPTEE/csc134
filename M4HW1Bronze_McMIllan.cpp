#include <iostream>
using namespace std;

/*
CSC 134
M4HW1 - Times Table - Bronze
mcmillant
10/16/2023

 */
int main() {
    int tableSize;

    cout << "Enter the size of the multiplication table: ";
    cin >> tableSize;

    // Print the table
    for (int i = 1; i <= tableSize; i++) {
        for (int j = 1; j <= tableSize; j++) {
            // Calculate and print in the desired format
            int product = i * j;
            cout << i << " times " << j << " is " << product << endl;
        }
    }

    return 0;
}