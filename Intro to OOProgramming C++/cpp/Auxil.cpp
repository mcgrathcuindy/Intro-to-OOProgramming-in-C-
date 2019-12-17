#include "Auxil.h"
#include "Budget.h"


void AuxiliaryOffice::addBudget(double b, Budget& div){

  auxBudget += b;
  div.corpBudget += b;//addBudget of Auxiliary Office class can access private member corpBudget
}
