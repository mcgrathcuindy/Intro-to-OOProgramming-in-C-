/*
Name: Chris McGrath
Desc: Demonstrate whole string input from cin
Date: 1/25/2019
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;


int main(void){
  char c = '\0';
  int input = 0;
  cout << "Input an integer number:" << endl;
  cin >> input;
  //option 1
  getchar();

  while((c != '\n') && (c != EOF)){
    c = getchar(); //while above events do not occur, continue to get characters
  }

  string str1;
  cout << "Please enter something and a space:" << endl;
  getline(cin, str1);
  cout << "You entered:" << endl;
  cout << str1 << endl;



  return 0;
}
