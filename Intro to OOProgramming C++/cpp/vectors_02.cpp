#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(void){

  //a few ways to declare vectors
  int input = 0;
  vector<int> my_vector(3);//declares a vector of type int, with 3 elements
 
  //vectors are automatically initialized to zero

  cout << my_vector.at(0) << " " << my_vector.at(1) << " " << my_vector.at(2) << endl;

  //or you can use the []
  my_vector[0] = 2;
  cout << my_vector[0] << endl;

  //you can also use the size() function
  cout<< "Enter a list of integers, terminated by a character" << endl;


  
  while(cin >> input){
    //my_vector[i] = input; this wouldn't work
    my_vector.push_back(input); //push_back adds a new integer "input" to the end of the vector
  }

  cout << "The integers you input were:" << endl;

  for(int i = 0; i < my_vector.size(); i++){
    cout << my_vector[i] << endl;
  }

  //another way to declare a vector
  //declares a vector of type double with 3 elements
  vector<double> my_other_vector = {2.0, 3.2, 4.5};// only done with c++11

  cout << "My other vector has elements:" << endl;
  cout << my_other_vector[0] << " " << my_other_vector[1] << " " << my_other_vector[2] << endl;


  //copy vectors! with = (assignment operator)

  vector<double> my_oo_vector;//this vector is empty

  my_oo_vector = my_other_vector;

  cout<< "My oo vector also has elements "<< endl;
  cout << my_oo_vector[0] << " " << my_oo_vector[1] << " " << my_oo_vector [2] << endl;
  
  double last = 0.0;
  last = my_oo_vector.back();

  cout << "The last element of oo vector is: " << last << endl;

  //.pop_back() deletes the last element of a vector

  //.resize(input) -------Changes to vector to be the size of the input entered, any elements leftover are deleted-----------

  my_oo_vector.resize(2);
  last = my_oo_vector.back();

  cout << "The last element of oo vector is now: " << last << endl;



  return 0;
}
