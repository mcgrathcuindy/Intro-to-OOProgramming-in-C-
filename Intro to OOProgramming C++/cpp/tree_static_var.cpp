/*
name: Chris
date: 2/25/19
budget file for in class tree                                                                                                                                
*/

#include <iostream>

using namespace std;

class Tree{
private: 
  static int tree_count;
public:
  //constructor
  Tree(){
    tree_count++;
  }

  //getter
  int getTreeCount() const{
    return tree_count;
  }

};

int Tree::tree_count = 0;

int main(void){
  Tree oak;
  Tree elm;
  Tree pine;

  cout << "We have " << pine.getTreeCount() << " Trees" <<  endl;//object used to return tree_ count would not matter

  return 0;
}
