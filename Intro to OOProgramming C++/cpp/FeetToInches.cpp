/*
Chris
Date: 2/15/19
Desc: Cpp file for lab 4
*/

#include <cstdio>
#include "FeetToInches.h"
#include <iostream>

using namespace std;

int FeetToInches::GetFeet() const {
  return feet;
}

int FeetToInches::GetInches() const {
  return inches;
}

void FeetToInches::SetFeet(int uFeet) {
  feet = uFeet;
}

void FeetToInches::SetInches(int uInches) {
  inches = uInches;
}

void FeetToInches::Simplify(int uInches) {
  
  feet = uInches / 12;
  inches = uInches % 12;
  cout << uInches << " inches converted to feet = " << feet << " feet " << inches << " inches "<< endl; 
}

FeetToInches FeetToInches::operator+(const FeetToInches& rhs){
  FeetToInches total;
  
  total.feet = feet + rhs.feet;
  total.inches = inches + rhs.inches;
    
  return total;
}

FeetToInches FeetToInches::operator-(const FeetToInches& rhs){
  FeetToInches total;

  total.feet = feet - rhs.feet;
  total.inches = inches - rhs.inches;

  return total;                                     
}

FeetToInches FeetToInches::operator=(const FeetToInches& rhs){
  this->feet = rhs.feet;
  this->inches = rhs.inches;
  return *this;                                                                                                                                                                                                                                
}
