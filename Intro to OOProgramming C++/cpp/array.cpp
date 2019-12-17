#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(void){

  const int SIZE = 4;

  array<string, SIZE> names = {"Jamie", "Ashley", "Doug", "Claire"};

  cout << "the names in the array are: \n";
  
  //option 1
  for(int index = 0; index < names.size(); index++){
    cout << names[index] << endl;
  }
  cout << "\n\n";

  //create the iterator
  //array<string, 3>::iterator it;
  //auto it = names.begin();

  //option 2
  cout << "Second method:\n";
  for(auto it = names.begin();it!=names.end(); it++){
  cout << *it << endl;
  }

  //option 3
  cout <<"\n\nThird Method:\n";
  for(auto element: names){
    cout << element << endl;
  }

  return 0;
}
