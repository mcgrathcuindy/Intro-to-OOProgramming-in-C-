/*
Chris McGrath Luke Roberts
2/22/19
Lab complex numbers operator overloading, .h file for lab
*/
/*
#include <iostream> 


#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H
#define DIFF .001

class MyComplex{
 private:
  double real;
  double imaginary;
  
 public:
 MyComplex(){
   real = 0;
   imaginary = 0;
 }
 
  MyComplex(double x, double y){
    real = x;
    imaginary = y;
  }
  void setReal(double re){
    real = re;
  }

  double getReal(){
    return real;
  }

  void setImaginary(double im){
    imaginary = im;
  }

  double getImaginary(){
    return imaginary;
  }

  double mag(void);
  //void operator ++() { feet = feet+100; inches = inches + 100; }
  MyComplex operator-(const MyComplex &rhs);
  MyComplex operator+(const MyComplex &rhs);
  MyComplex operator=(const MyComplex &rhs);
  MyComplex operator/(MyComplex b);
  MyComplex operator*(const MyComplex &rhs);
  bool operator==(const MyComplex &rhs);
  bool operator!=(const MyComplex &rhs);
  double dist2(MyComplex x);


};

double dist(MyComplex, MyComplex);



#endif

*/

#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H
//Dr. Stanley's Code

#define DIFF 0.0001

class MyComplex{


 private:
  double real;
  double imaginary;
  
  
 public:
  //constructor
  MyComplex(){
    real = 0.0;
    imaginary = 0.0;
  }
  MyComplex(double a, double b){
    real = a;
    imaginary = b;
  }

  //setters
  void setImag(double im){
    imaginary = im;
  }
  void setReal(double re){
    real = re;
  }
  
  //getters
  double getImag() const{
    return imaginary;
  }
  double getReal() const{
    return real;
  }
  
  //overloaded operators
  MyComplex  operator+(MyComplex b);
  MyComplex  operator-(MyComplex b);
  MyComplex& operator=(MyComplex b);
  MyComplex  operator*(MyComplex b);
  MyComplex  operator/(MyComplex b);
  bool  operator==(MyComplex b);
  bool  operator!=(MyComplex b);
  
  //other member functions
  double mag();
  double dist2(MyComplex b);
};

MyComplex getCong(MyComplex b);


#endif
