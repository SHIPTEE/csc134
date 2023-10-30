#include <iostream>
using namespace std;
#include <stdlib.h> // for rand() 
#include <time.h> // for the time()

/*
CSC134
M3T2_McMillan - Random Numbers
09/18/23
mcmillant

Ask the user to tell us what the dice rolls are, and then we'll use rnd(). )
The player rolls two 6-sided dice (abbreviated 2d6.)
7 or 11 -> instant win
2, 3, or 12 -> instant loss
The program should ask for the dice rolls, then use if statements to tell the user the result.
  */

int roll() {
  //new function: roll 1 die, return
  //number from 1 to 6 (we use modulo)
  // % 6 givres us 0 to 5, so we add one
  int roll = rand()  % 6 + 1;
  return roll;
}

int main() {
  std::cout << "Welcome to the Craps Table!" << endl;
  
  // Declare variables
  
  int die1, die2, total;
  // Roll is 2d6 (two 6-siders)
  //cout << "What are the two rolls?" << endl;
  //cin >> die1 >> die2;
  int seed = time(0);
  cout << "Today's lucky number is: " << seed << endl;
  cout << "Enter your lucky number: ";
  srand(seed);
  // random roll
  die1 = roll();
  die2 = roll();
  total = die1 + die2;
  cout << "You rolled: ";
  cout << die1 << " + " << die2;
  cout << " == " << total << endl;
  
  // Do if / else if for:
  // 7 or 11 (win)
  // 2, 3, 12 (lose)
  
  if (total == 7 || total == 11) {
    // || stands for or
    cout << "You win :) !" << endl;
  }
  else if (total == 2 || total == 3 || total == 12) {
    cout << "You lose :( !" << endl;
  }
  else {
    cout << "You neither won nor lose. Roll again!" << endl;
  
  }
  
}