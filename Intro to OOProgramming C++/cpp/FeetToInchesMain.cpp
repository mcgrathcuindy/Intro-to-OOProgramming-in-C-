/*
Chris
Date: 2/15/19
desc: main file for lab 4
*/

#include <cstdio>
#include <iostream>
#include "FeetToInches.h"

using namespace std;

int main() {
  int userChoice = 0;
  int feetToConvert = 0;
  int inchesToConvert = 0;
  FeetToInches userA;
  FeetToInches userB;
  FeetToInches a;
  

   cout << "What would you like to do?" << endl;
   cout << "1: Convert Feet to Inches" << endl;
   cout << "2: Convert Inches to Feet" << endl;
   cout << "3: Add or subtract Objects using overload operator" << endl;
   cout << "4: See see something weird using the ++operator" << endl;

   cin >> userChoice;
   cout << endl;

   if(userChoice == 1){ //Converts Feet to inches
     cout << "Enter how many Feet to convert" << endl;
     cin >> feetToConvert;
     
     userA.SetFeet(feetToConvert);
     cout << userA.GetFeet() << " feet converted to inches = " << userA.GetFeet() * 12 << endl;
     
     cout << endl;
   }
   
   else if(userChoice == 2){  // Converts Inches to Feet
     cout << "Enter how many Inches to Convert" << endl;
     cin >> inchesToConvert;
     
     userA.Simplify(inchesToConvert);
     
   }
   
   else if(userChoice == 3){
     cout << "Set feet for object A" << endl;
     cin >> feetToConvert;
     cout << "Set inches for object A" << endl;
     cin >> inchesToConvert;
     userA.SetFeet(feetToConvert);
     userA.SetInches(inchesToConvert);

     cout << "Set feet for object B" << endl;
     cin >> feetToConvert;
     cout << "Set inches for object B" << endl;
     cin >> inchesToConvert;
     userB.SetFeet(feetToConvert);
     userB.SetInches(inchesToConvert);

     a = userA + userB;    
     cout << "Object A + Object B = " << a.GetFeet() << " feet " << a.GetInches() << " inches "  << endl;
     a = userA - userB;  
     cout << "Object A - Object B = " << a.GetFeet() << " feet " << a.GetInches() << " inches " << endl;
   }

   else if(userChoice == 4){
     FeetToInches test;
     cout << "Assuming an object of class FeetToInches is initialized to 5 feet, 5 inches" << endl;
     
     cout << "The object combined with the overloaded ++ operator is equal to ";
     ++test;
     cout << test.GetFeet() << " feet and " << test.GetInches() << " inches." << endl;
   }
   return 0;
}


