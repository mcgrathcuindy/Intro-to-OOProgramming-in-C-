/*
Chris McGrath
2/12/2019
ItemtoPurchase.cpp
*/

#include "ItemToPurchase.h"
#include <iostream>
#include <string>

using namespace std;

ItemToPurchase::ItemToPurchase(){
  itemName = "none";
  itemPrice = 0;
  itemQuantity = 0;
  }


string ItemToPurchase::GetName() const{
  return itemName;
}

int ItemToPurchase::GetPrice() const{
  return itemPrice;
}

int ItemToPurchase::GetQuantity() const{
  return itemQuantity;
}

void ItemToPurchase::SetName(string Name){
  itemName = Name;
}

void ItemToPurchase::SetPrice(int Price){
  itemPrice = Price;
}

void ItemToPurchase::SetQuantity(int Quantity){
  itemQuantity = Quantity;
}
