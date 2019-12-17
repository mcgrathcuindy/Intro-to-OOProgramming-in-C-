#include <iostream>

using namespace std;

class Big_string{
private:
  char* some_string;
public:
  Big_string(){
    some_string = new char[1900];
  }
  ~Big_string(){
    delete [] some_string;
  }
};


void some_function(int x){
 
char* some_string = new char[1900];
 

 if(x){
   delete [] some_string;//option 1
   throw"something bad happened";
 }
 delete [] some_string;
}


int main(void){
  int x = 1;
  
  try{
  some_function(x);
  }
  catch(const char* msg){
    cout << "Error: " << msg << endl;
  }

  return 0;
}
