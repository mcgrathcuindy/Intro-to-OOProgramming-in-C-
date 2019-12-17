#include <iostream>
#include "numberList.h"

using namespace std;

int main(){

  NumberList list;
  //syntax for appending, aka using appendNode                                                                                                                                                                                                       
  list.appendNode(2.3);
  list.appendNode(3.4);
  list.appendNode(4.5);
  
  list.displayList();

  return 0;
}
