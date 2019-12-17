#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {

  vector<double> weight;

  for(int i = 1; i <= 5; i++){
    cout << "Enter weight " << i << ":" << endl;
    scanf("%lf", &weight[i-1]);                                                                                                                                 
  }
  cout << "You entered: " << weight[0] << " " << weight[1] << " " << weight[2] << " " << weight[3] << " " << weight[4] << endl;


  return 0;
}
