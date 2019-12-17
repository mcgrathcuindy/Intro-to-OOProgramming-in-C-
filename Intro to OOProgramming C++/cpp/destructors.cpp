/*
chris
destructors
*/

#include <iostream>
#include <cstring>

using namespace std;

class ContactInfo{
private:
  char* name;
  char* phone;
public:
  ContactInfo(){
    name = new char[9];
    strcpy(name, "no_entry");
    phone = new char[9];
    strcpy(phone, "no_entry");
  }
  
  ContactInfo(const char* n, const char* p){
    name = new char[strlen(n) + 1];
    phone = new char[strlen(p) + 1];
    strcpy(name, n);
    strcpy(phone, p);
  }
  //getters

  const char* getPhone(){
    return phone;
  }

  //setters
  void setPhone(const char* p){
    delete [] phone;
    phone = new char[strlen(p) + 1];
    strcpy(phone, p);
  }



  ~ContactInfo(){
    cout << "Destructor was called!" << endl;
    delete [] name;
    delete [] phone;
  }
};


int main(void){
  ContactInfo entry("Debbie Smith", "555-1234");
  ContactInfo* entry_ptr = nullptr;
  entry_ptr = new ContactInfo;

  cout << "Debbie's phone number is " << entry.getPhone() << endl;
  entry.setPhone("123-4567");
  cout << "Debbie's phone number is " << entry.getPhone() << endl;
  
  delete entry_ptr;//destructor automatically called!
  

  //int* x = nullptr;
  //x = new int;

  //delete x;
  return 0;
}
