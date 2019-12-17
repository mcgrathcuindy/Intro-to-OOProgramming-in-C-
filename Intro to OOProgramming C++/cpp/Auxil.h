/*
chris
*/
#ifndef AUXIL_H
#define AUXIL_H

class Budget; //forward declaration 

class AuxiliaryOffice{
 private: 
  double auxBudget;
 public:
  AuxiliaryOffice(){
    auxBudget = 0.0;
  }

  //getter
  double getDivisionBudget() const{
    return auxBudget;
  }

  void addBudget(double, Budget&);

};



#endif
