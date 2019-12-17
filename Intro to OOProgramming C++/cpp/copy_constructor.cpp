#include <iostream>

using namespace std;

class MyClass{
private: 
  int* dataObj;
public:
  MyClass(){
    dataObj = new int;
  }

  void setObj(int a){
    *dataObj = a;
  }

  int getObj() const{
    return *dataObj;
  }

  MyClass(const MyClass& var);

  ~MyClass(){
    delete dataObj;
  }

  MyClass& operator=(const MyClass& rhs);
};

MyClass& MyClass::operator=(const MyClass& rhs){
  if(this != &rhs){
  delete dataObj;
  dataObj = new int;
  *(dataObj) = *(rhs.dataObj);
  }
  return *this;
}
//copy constructor
MyClass::MyClass(const MyClass& var){
  dataObj = new int;
  *(dataObj) = *(var.dataObj);
  cout << "Copy constructor\n";
}

void someFunct(MyClass localObj){
  //do things here
}

int main(void){
  MyClass Obj1, Obj2;

  Obj1.setObj(4);
  cout << "Initial    Obj1->dataObj = " << Obj1.getObj() << endl;

  Obj2 = Obj1;

  //someFunct(Obj1);
  cout << "Now        Obj2->dataObj = " << Obj2.getObj() << endl;

  return 0;
}
