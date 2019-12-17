/*
Chris McGrath
2/12/2018
header file for hw 
*/

#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H
#include <string>
using namespace std;

class ItemToPurchase {
 
 private: 
  string itemName;
  int itemPrice;
  int itemQuantity;
 
 public:
  
  ItemToPurchase();
  //explicit ItemToPurchase(String Name = "none", int Price = 0, int Quantity = 0);

  void SetName(string);
  string GetName() const;
  
  void SetPrice(int);
  int GetPrice() const;
  
  void SetQuantity(int);
  int GetQuantity() const;
};


#endif
