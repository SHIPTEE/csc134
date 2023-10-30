#include <iostream>
using namespace std;
/*
M5T2 - Void functions and value returning functions
CSC 134
shipmant
10/30/2023
  */

// List functions here
int square(int);
int add(int, int);
void print_answer_line(int num, int num_squared);

int main() {
  cout << "M5T2: Using Multiple Functions" << endl;
  int num = 4;
  cout << num << "squared is " << square(num) << endl;
  cout << "2+3 = " << add(2, 3) << endl;

  //Print out the squares of the numbers 1 to 10
  cout << "Number\tSquared" << endl;
  for (int num=1; num <= 10; num++) {
  print_answer_line(num, square(num));
  }
}

//write functions here
// a square() function that takes an int, and returns the square of that int
int square(int num) {
  int answer = num * num;
  return answer;
}

//add() takes two ints, returns the sum
int add(int num1, int num2) {
  int answer = num1 + num2;
  return answer;
}

void print_answer_line(int num, int num_squared) {
  cout << num << "\t\t" << num_squared << endl;
  
}