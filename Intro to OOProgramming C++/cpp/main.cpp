/*
Chris McGrath
2/12/2019
Main file for hw
*/

#include <iostream>
#include <vector>
#include <string>
#include "ItemToPurchase.h"

using namespace std;


int main(void){

  ItemToPurchase itemA;
  ItemToPurchase itemB;
  string Name;
  int Price;
  int Quantity;

  cout << "Item 1" << endl << "Enter the item name:" << endl;
  getline(cin, Name);
  //cin.ignore();
  itemA.SetName(Name);
  
  cout << "Enter the item price:" << endl;
  cin >> Price;
  itemA.SetPrice(Price);
  
  cout << "Enter the item quantity:" << endl;
  cin >> Quantity;
  itemA.SetQuantity(Quantity);

  
  cout << endl << "Item 2" << endl << "Enter the item name:" << endl;
  cin.ignore();
  getline(cin, Name);
  //cin.ignore();
  itemB.SetName(Name);

  cout << "Enter the item price:" << endl;
  cin >> Price;
  itemB.SetPrice(Price);

  cout << "Enter the item quantity:" << endl;
  cin >> Quantity;
  itemB.SetQuantity(Quantity);

  cout << endl  << "TOTAL COST" << endl;
  cout << itemA.GetName() << " " << itemA.GetQuantity() << " @ $" << itemA.GetPrice() << " = $" << itemA.GetQuantity() * itemA.GetPrice() << endl;
  cout << itemB.GetName() << " " << itemB.GetQuantity() << " @ $" << itemB.GetPrice() << " = $" << itemB.GetQuantity() * itemB.GetPrice() << endl;
  cout << endl << "Total: $" << (itemA.GetQuantity() * itemA.GetPrice()) + (itemB.GetQuantity() * itemB.GetPrice()) << endl;
return 0;
}
