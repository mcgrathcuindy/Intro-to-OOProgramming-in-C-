#include <iostream>
#include <cstdio>
#include <string>



using namespace std;

int main(void){

  string cpp_str;

  cout << "Enter a word:" << endl;

  cin >> cpp_str;

  cout << "Your string is " << cpp_str << endl;

  // can use the + operator to add to the c++ strings 
  cpp_str = cpp_str + "_add_on";

  cout << "Your string is now " << cpp_str << endl;


  // you can use c++ strings in if statements
  if(cpp_str == "my_string_add_on"){
    
    cout << "It works!" << endl;
  }


  //if you want to convert c++ strings to c strings, you can use the .c_str() operator
  //remember that you cannot change the contents of c_string, when using .c_str()
 const char* c_string = cpp_str.c_str();
  cout << "Your c_string is " << cpp_str.c_str()<< endl;


  //finding the size of a c++ string .size()

  int size = cpp_str.size();//outputs size of c++ string as an integer

  cout << "The size of your string is "<< size << endl;

  //Pick out a single character in a c++ string
  //use the .at() operator

  cout << "The fifth character of your string is "<< cpp_str.at(4) << endl;

  enum day{sunday, monday, tuesday, wednesday, thursday, friday, saturday};
  enum day today;

  for(int i = sunday; i <= saturday; i++){
    cout << "The day is " << today << endl;
    today = today + 1;
  }


  return 0;
}
