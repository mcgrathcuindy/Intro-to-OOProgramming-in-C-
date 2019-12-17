#include <iostream>
#include <string>
#include <set>

using namespace std;


int main(){
    
    set<string> names;
    
    names.insert("peter");
    names.insert("john");
    
    names.insert("peter");    
    names.insert("peter");
    names.insert("peter");
    
    for(auto it = names.begin(); it !=names.end(); it++){
        cout << "Your name is " << *it << endl;
        
    }
    
    return 0;
}