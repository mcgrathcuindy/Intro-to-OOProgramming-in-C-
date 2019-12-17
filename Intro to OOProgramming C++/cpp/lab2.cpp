/*
Chris McGrath
Write a program that will play rock/paper/scissors, recommend rock = 1, paper = 2, scissors = 3
Program plays new rounds until user exits
Bonus point = If your program keeps score
At least one pass by reference function
1/25/19
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomChoice(int& randChoice){
  randChoice = (rand() % 3) + 1;
}

int main(void){
  int userWinTally = 0;
  int computerWinTally = 0;

  srand(time(NULL));
  int userInput = 0;
  int computerChoice = 0;

  cout << "Hello! You'll be playing Rock, Paper, Scissors against a cpu" << endl;
  cout << "Press 1 for Rock, 2 for Paper, and 3 for Scissors. Press 4 to quit and remember the Combat Triangle!" << endl;

  cin >> userInput;// -----------Let Use choose RPS------------
  while(userInput != 4){
  
  if(userInput == 1){
    cout << "You chose Rock" << endl;
  }
  else if(userInput == 2){
    cout << "You chose Paper" << endl;
  }
  else if(userInput == 3){
    cout << "You chose Scissors" << endl;
  }

  //------------Let the "AI" select randomly-----------
  randomChoice(computerChoice);
  
  if(computerChoice == 1){
    cout << "CPU chose Rock" << endl;
  }
  else if(computerChoice == 2){
    cout << "CPU chose Paper" << endl;
  }
  else if(computerChoice == 3){
    cout << "CPU chose Scissors" << endl;
  }

  if(((userInput == 1) && (computerChoice == 3)) || ((userInput == 2) && (computerChoice == 1)) || ((userInput == 3) && (computerChoice == 2))) {
  cout << "You win!" << endl;
  userWinTally++;
  }
  else if(((computerChoice == 1) && (userInput == 3)) || ((computerChoice == 2) && (userInput == 1)) || ((computerChoice == 3) && (userInput == 2))) {
  cout << "You lose :(" << endl;
  computerWinTally++;
  }
  else if(computerChoice == userInput){
  cout << "Draw." << endl;
  }
  cout << "The score is - User: " << userWinTally << " to CPU: " << computerWinTally << endl; 
  cin >> userInput;
}
  return 0;
}

  
