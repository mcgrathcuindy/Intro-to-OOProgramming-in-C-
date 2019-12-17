#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;


int main(void){
    
    map<int, string> employees = {
        {101, "Chris Jones"}, {102, "Jessica Smith"},
        {103, "Amanda Stevens"}, {104, "Will Osborn"}
    };
    
    employees[105] = "Terrance Hood";//syntax employees[k] = value;
    
    for(int i = 101; i < (int) employees.size()+101; i++){
        cout << employees.at(i)<<endl;
        
    }
    
}