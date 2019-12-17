/*
name: Chris
date: 2/25/19
budget cpp file
*/

#include "Budget.h"
#include <iostream>

//declare the static member variable
//should go in .cpp file for class (if you have one)

double Budget::corpBudget = 0.0;

//static member function definition
void Budget::mainOffice(double moffice){
  corpBudget += moffice;
}
