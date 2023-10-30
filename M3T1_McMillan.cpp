#include <iostream>
using namespace std;

/*
CSC 134
M3T1
09/18/23
mcmillant
  
For this assignment you will create a program to match the following specifications.
Ask the user to enter the length and width of two rectangles, then display the area of both.
Part 2: Add Additional Features
Ask the user to enter the length and width of two rectangles, then display the area of both.
Tell the user which rectangle has the larger area, or if they are the same area. (Use the if statement for this.)
Submit a screenshot and the source code in a ZIP as usual. 
*/
  
int main() {
  cout << "Areas of Rectangles\n";
  // Declare variables
  double length1, length2, width1, width2;
  double area1, area2;
  
  // Ask for length and width of first rectangle
  cout << "Rectangle 1 length? ";
  cin >> length1;
  cout << "Rectangle 1 width? ";
  cin >> width1;
  
  //Ask for length and width of second rectangle
  cout << "Rectangle 2 length? ";
  cin >> length2;
  cout << "Rectangle 2 width? ";
  cin >> width2;
  
  // Calculate the areas
  area1 = length1 * width1;
  area2 = length2 * width2;
  
  // Display the areas
  cout << "Rectangle 1 area is: " << area1 << endl;
  cout << "Rectangle 2 area is: " << area2 << endl;

  // Comparison
  if(area1 > area2) {
    cout << "Rectangle 1 is larger." << endl;
  }
  else if(area2 > area1) {
    cout << "Rectangle 2 is larger." << endl;
  }
  else {
    cout << "Rectangles are equal size." << endl;
  }
  


  
}