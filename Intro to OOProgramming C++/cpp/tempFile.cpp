#include <iostream>
#include <vector>
#include <string>
using namespace std;

void SwapVectorEnds( vector<int>& sortVector){
  int tempval;
  int tempval2;
  tempval2 = sortVector.size();
  tempval = sortVector.at(0);
  sortVector.at(0) = sortVector.at(tempval2);
  sortVector.at(tempval2) = tempval;
}


int main() {
  vector<int> sortVector(4);
  unsigned int i;

  sortVector.at(0) = 10;
  sortVector.at(1) = 20;
  sortVector.at(2) = 30;
  sortVector.at(3) = 40;

  SwapVectorEnds(sortVector);

  for (i = 0; i < sortVector.size(); ++i) {
    cout << sortVector.at(i) << " ";
  }
  cout << endl;
  //string x;
  //getline(cin, x);
  //cout << x << endl;
  return 0;
}
