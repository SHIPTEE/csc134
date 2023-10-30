#include <iostream>
using namespace std;

/*
CSC 134
M3Lab3 - Number grade to Letter grade
mcmillant
9/27/23
Given a number grade 0-100, give the letter grade.
*/

int main() {
  // Use constants for the 10 point scale
  const int A_GRADE = 90;
  const int B_GRADE = 80;
  const int C_GRADE = 70;
  const int D_GRADE = 60;
  


  cout << "Number Grade to Letter Grade" << endl;

  // Get the number grade
  int num_grade;
  string letter_grade = "NO GRADE";

  cout << "What is the number grade?: ";
  cin >> num_grade;

  // Convert it to a letter

  if (num_grade >= A_GRADE) {
   letter_grade = "A";
  }
  else if (num_grade >= B_GRADE && num_grade <= A_GRADE) {
    letter_grade = "B";
  }
  else if (num_grade >= C_GRADE && num_grade <= B_GRADE) {
    letter_grade = "C";
  }
  else if (num_grade >= D_GRADE && num_grade <= C_GRADE) {
    letter_grade = "D";
  }
  // If not set, it's "F"
  else {
      letter_grade = "F";
    }
  // Print the result
  cout << "A grade of " << num_grade;
  cout << " is " << letter_grade << endl;
  }
  

  
  
