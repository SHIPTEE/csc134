#include <iostream>
using namespace std;

/*
CSC 134 
M4Lab1 - ASCII boxes
mcmillant
10/16/2023
 */

// the task is to draw a block of asterisks
// make a program that draws a block based on the height and width we enter.
// Two separate loops

//Draw a line width long in * characters
void drawHLine(int width) {
  for (int i = 0; i < width; i++) {
    cout << "*";
    cin >> width;
  }
  cout << endl;
  
}

// // Draw a line height high in * characters
void drawVLine(int height) {
  for (int i = 0; i < height; i++) {
    cout << "*";
    cin >> height;
  }
  cout << endl;
}

void drawBox(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int width, height;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the height: ";
    cin >> height;

    drawBox(width, height);

    return 0;
}
  






