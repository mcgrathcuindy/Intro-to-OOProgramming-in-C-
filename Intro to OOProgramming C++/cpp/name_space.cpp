#include <iostream>
#include <string>

using namespace std;

namespace apple{
  void print(string str){
    cout<<"apple: Your c++ string is"<<endl;
    cout << str<<endl;
  }
}

namespace orange{
  void print(const char* str){
    cout << "orange: Your c string is" << endl;
    cout << str << endl;
  }
}

void some_function(){
  using namespace orange;
  print("hello");
}


int main(void){
  using apple::print;

  print("hello"); 
  some_function();

  return 0;
}
