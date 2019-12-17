#ifndef BUDGET_H
#define BUDGET_H
#include "Auxil.h"

class Budget{
 private:
  static double corpBudget;
  double divisionBudget;
 public:
  Budget(){
    divisionBudget = 0.0;
  }

  void addBudget(double b){
    divisionBudget += b;
    corpBudget += b;
  }

  double getCorpBudget() const {
    return corpBudget;
  }
  //static member function!!, function prototype
  static void mainOffice(double);

  //friend function addBudget() of the AuxialiaryOffice class
  //can acces private data members of Budget class
  friend void AuxiliaryOffice::addBudget(double, Budget&);

};


#endif
