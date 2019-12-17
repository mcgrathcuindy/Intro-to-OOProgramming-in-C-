#include <iostream>
#include <string>

using namespace std;

/*
void print(int value){
  cout << "Your value is " << endl;
  cout << value << endl;
}

void print(string value){
  cout << "your string is "<< endl;
  cout << value << endl;
}
*/

//Template
//Compiler writes the function for you
//Function does not exist until you call it

template<typename T>
void print(T value){
  cout << "Your value is " << endl;
  cout << value << endl;
}

template<typename T, int N>
class Array{
private:
  T my_arrray[N];
public: 
  int getSize() const{
    return N;
  }
};

template<typename S>
S sum(S a, S b){
  S c = 0;
  c = a + b;
  return c;
}

//Typename and Class are interchangable words here
template<class G>
G sum(G a, G b, G c){
  return a + b + c;
}

//Exercise: create a templated function that sums two numbers together

int main(void){

  string str_val = "5";
  int int_val = 5;

  print(str_val);
  print(int_val);

  Array<double, 5> my_array;
  cout << "The size of your array is" << endl;
  cout << my_array.getSize() << endl;

  cout << "Your numbers summed equal "<< sum(5.4,4.9) << endl;
  cout << "Your 3 numbers summed equal " << sum(2.3,2.3,3.3) << endl;

  return 0;
}
