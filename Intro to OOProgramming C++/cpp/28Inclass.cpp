/*                                                                                                                                                                                                                                                   
chris                                                                                                                                                                                                                                                
array numbers bigger than specified number a                                                                                                                                                                                                         
1/28/19                                                                                                                                                                                                                                              
*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

void myFunct(vector<int> myVector, int numVals, int a){
  for(int i = 0; i < myVector.size(); i++){
    if(myVector.at(i) > a){
      cout << myVector.at(i) << " ";
    }
  }
  cout<<endl;
}

int main(void){
  int numVals = 8;
  vector<int> myVector(numVals);
  int a = 0;

  for(int i = 0; i < myVector.size(); ++i){
    cin >> myVector.at(i);
  }
  cout << "Enter specified value a" << endl;
  cin >> a;

  myFunct(myVector, numVals, a);

  return 0;
}
