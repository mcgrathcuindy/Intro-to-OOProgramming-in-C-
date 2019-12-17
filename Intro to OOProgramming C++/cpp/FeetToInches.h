/*
Chris
Date: 2/15/19
desc: LAB 4
*/

#ifndef FEETTOINCHES_H
#define FEETTOINCHES_H


class FeetToInches {

 private:
  int feet;
  int inches;

 public:
 FeetToInches(): feet(5), inches(5){}
  void SetFeet(int);
  void SetInches(int);
  int GetFeet() const;
  int GetInches() const;
  void Simplify(int uInches);
  void operator ++() { feet = feet+100; inches = inches + 100; }
  FeetToInches operator-(const FeetToInches &rhs);
  FeetToInches operator+(const FeetToInches &rhs);
  FeetToInches operator=(const FeetToInches &rhs);
};

#endif
