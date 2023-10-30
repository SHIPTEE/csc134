#include <iostream>
#include <string>

using namespace std;
/*
M5T1 - CYOA 
CSC 134
mcmillant
10/23/23

*/


void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_kick_door();
void choice_open_window();
void choice_run_away();
void choice_kick_door_again();
void choice_escape();
void choice_fight();
void choice_fight_vampire();

int main() {
    cout << "M5T1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    string choice;
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_front_door();
    } else if (choice == "2") {
        choice_back_door();
    } else if (choice == "3") {
        choice_go_home();
    } else if (choice == "4") {
        cout << "Ok, quitting game" << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        main_menu();
    }
}

void choice_front_door() {
    string choice;
    cout << "Try the front door." << endl;
    cout << "It's locked." << endl;
    cout << "Do you:" << endl;
    cout << "1. Kick the door in" << endl;
    cout << "2. Sneak in through a window" << endl;
    cout << "Choose: ";
    cin >> choice;
  
    if (choice == "1") {
        choice_kick_door();
      
    } else if (choice == "2") {
        choice_open_window();
      
    } else {
        cout << "You have to choose..." << endl;
        choice_front_door(); // recursion
    }
}

void choice_back_door() {
  string choice;
  cout << "You proceed to the back door." << endl;
  cout << "There's a blood sucking vampire in the tree to your right." << endl;
  cout << "Do you:" << endl;
  cout << "1. Fight the vampire." << endl;
  cout << "2. Run away" << endl;
  cin >> choice;

  if (choice == "1") {
    choice_fight_vampire();

  } else if (choice == "2") {
    choice_run_away();

  } else {
    cout << "You have to choose..." << endl;
    choice_front_door(); // recursion
  
}
}

void choice_go_home() {
    cout << "RUN AS FAST AS YOU CAN" << endl;
}

void choice_kick_door() {
  string choice;
  cout << "KICK" << endl;
  cout << "You kick the door in." << endl;
  cout << "Your leg gets stuck! OH NOOO!!" << endl;
  cout << "Do you:" << endl;
  cout << "1. Try to kick it again?" << endl;
  cout << "BEWARE!!! The zombies inside respond to loud noises. BEWARE!!!" << endl;
  cout << "2. Turn back and run home. That was close." << endl;
  cin >> choice;

  if (choice == "1") {
    choice_kick_door_again();

  } else if (choice == "2") {
      choice_run_away();

  } else {
      cout << "You have to choose..." << endl;
      choice_front_door(); // recursion
  }
}

void choice_open_window() {
  string choice;
  cout << "TODO: Find and open a window" << endl;
  cout << "You open the window and slip on a puddle of blood." << endl;
  cout << "You wake up in a dark room." << endl;
  cout << "All you hear is jagged heavy breathing." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try to escape?" << endl;
  cout << "2. Try to fight?" << endl;
  cin >> choice;

  if (choice == "1") {
      choice_escape();

  } else if (choice == "2") {
      choice_fight();

  } else {
      cout << "You have to choose..." << endl;
      choice_front_door(); // recursion
  }
}

void choice_kick_door_again() {
  cout << "KICK AGAIN" << endl;
  cout << "You kick the door in." << endl;
  cout << "You manage to knock out a zombie. Awesome! Now leave before you're eaten." << endl;
}

void choice_run_away() {
  cout << "RUN AWAY" << endl;
  cout << "THE END!" << endl;
}

void choice_escape() {
  cout << "Simultaneously scream loudly and violently flail your arms." << endl; 
  cout << "Run with all your might!" << endl;
  cout << "You got away! THE END!" << endl;
}

void choice_fight() {
  cout << "Three zombies charge at you." << endl;
  cout << "You try to fight them off, but you're too weak." << endl;
  cout << "You're dead." << endl;
}

void choice_fight_vampire() {
  cout << "Use the garlic and holy water in your pocket." << endl;
  cout << "You killed the vampire." << endl;
  cout << "You escape! THE END." << endl;
}