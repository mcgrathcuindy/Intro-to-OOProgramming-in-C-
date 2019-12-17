/*
Chris McGrath, Luke Roberts
2/22/19
Lab Complex Numbers operator overloading, main file for lab
 */
#include <iostream>
#include <cmath>
#include "complex.h"


using namespace std;

int main(void){
  Complex a;
  Complex b;

  cout << "If no failed messages then the test passed." << endl;
  cout << "Testing assignment and get." << endl;
  a.setReal(1.5);
  a.setImaginary(1.0);
  b.setReal(2.0);
  b.setImaginary(2.5);
  if(abs(1.5 - a.getReal()) > DIFF){
    cout << "a.setReal failed." << endl;
  }
  if(abs(1.0 - a.getImaginary()) > DIFF){
    cout << "a.setImaginary failed." << endl;
  }
  if(abs(2.0 - b.getReal()) > DIFF){
    cout << "b.setReal failed." << endl;
  }
  if(abs(2.5 - b.getImaginary()) > DIFF){
    cout << "b.setImaginary failed." << endl;
  }
  //cout << "Testing assignment and get: Completed." << endl;
  
  cout << "Testing + and =." << endl;
  a = a+ b;
  if(abs(3.5 - a.getReal()) > DIFF){
    cout << "Addition didn't work for real object member." << endl;
  }//a.real should be 3.5 a.imaginary should be 3.5

  if(abs(3.5 - a.getImaginary()) > DIFF){
    cout << "Addition didn't work for imaginary." << endl;
  }
  //cout << "Testing + and =: Complete." << endl;

  cout << "Testing !=." << endl;
  if(!(b!=a)){ 
    cout << "!= Failed." << endl;
  }
  b = a;
  cout << "Testing ==." << endl;
  if(!(b==a)){
    cout << "== failed." << endl;
    
  }
  //cout << "Testing != and ==: Completed." << endl;
  
  cout << "Testing dist Function." << endl;
  
  if(abs(dist(a,b)) > DIFF){
    cout << "Dist Function Failed." << endl;
  }
  //cout << "Testing dist function: Completed." << endl;
  
  cout << "Testing .mag() member function" << endl;
  if(abs(b.mag() - 4.9497474)>DIFF){
    cout << ".mag() test failed." << endl;
  }
  //cout << "Testing .mag(): Completed." << endl;
  cout << "Test *." << endl;
  
  a = a*b;
  if((abs(a.getReal()) > DIFF) || (abs(a.getImaginary() - 24.5) > DIFF)){
    cout << "* Failed" << endl;
    cout << "a.real = " << a.getReal() << "a.imaginary = " << a.getImaginary() << endl;
  }
  
  cout << "Testing /." << endl;
  b = b/a;
  
  Complex c;
  c.setReal(.1428);
  c.setImaginary(-.1428);
  if(b!=c){
    cout << "/ test failed" << endl;
  }
  //cout << "Testing * and /: Complete." << endl;
  
  
  return 0;
}
