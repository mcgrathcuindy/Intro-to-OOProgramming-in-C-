#include <iostream>
#include "Budget.h"
#include "Auxil.h"

using namespace std;


int main(void){

  int count = 0;
  double mainOfficeRequests = 0.0;
  const int NUM_DIVISIONS = 4;

  //NOTE: no Budget class instances(objects) have been declared yet!
  cout << "Enter the main office's budget request: ";
  cin >> mainOfficeRequests;
 
  Budget::mainOffice(mainOfficeRequests); //NOTE: Syntax, 
  
  Budget divisions[NUM_DIVISIONS];
  AuxiliaryOffice auxOffices[NUM_DIVISIONS];


  //get the budgets for each divisions
  for(count = 0; count < NUM_DIVISIONS; count++){
    double budgetAmount;
    cout << "Enter the budget request for the division ";
    cout << count + 1 << ":  ";
    cin >> budgetAmount;
    divisions[count].addBudget(budgetAmount);
 
    cout << "Enter the budget request for that division's\n";
    cout << "Auxiliary office: ";
    cin >> budgetAmount;
    auxOffices[count].addBudget(budgetAmount, divisions[count]);//friend of budget class
  }

  cout << "The total budget requests are " << divisions[0].getCorpBudget() << endl;


  return 0;
}
