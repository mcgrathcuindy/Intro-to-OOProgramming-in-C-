/*
Chris McGrath, Luke Roberts
2/22/19
Complex Numbers Operator Overloading, cpp file for lab
*/
/*
#include <iostream>
#include <cmath>
#include "MyComplex.h"

using namespace std;

MyComplex MyComplex::operator+(const MyComplex& rhs){
 MyComplex total;

  total.real = real + rhs.real;
  total.imaginary = imaginary + rhs.imaginary;

  return total;
} 

MyComplex MyComplex::operator-(const MyComplex& rhs){
  MyComplex total;

  total.real = real - rhs.real;
  total.imaginary = imaginary - rhs.imaginary;

  return total;
}

MyComplex MyComplex::operator=(const MyComplex& rhs){
  this->real = rhs.real;
  this->imaginary = rhs.imaginary;
  return *this;
}

double MyComplex::mag(void){
    return sqrt((real*real) + (imaginary*imaginary));
}

MyComplex MyComplex::operator*(const MyComplex& rhs){
  MyComplex product;
  
  product.real = (real * rhs.real) - (imaginary * rhs.imaginary);
  product.imaginary = (real * rhs.imaginary) + (imaginary * rhs.real);
  
  return product;
}

MyComplex MyComplex::operator/(MyComplex b){
  MyComplex temp, B;
  
  double mag_rhs;
  mag_rhs = b.mag();
  
  B.real = b.real;
  B.imaginary = (-1)*b.imaginary;
  
  temp = *this * B;
  temp.real = temp.real/mag_rhs;
  temp.imaginary = temp.imaginary/mag_rhs;

  
  return temp;
}

bool MyComplex::operator==(const MyComplex& rhs){ //----------FIXME--
  if((abs((real - rhs.real)) < DIFF) && (abs((imaginary - rhs.imaginary)) < DIFF)){
  return true;
  } 
  else { return false; }
}

bool MyComplex::operator!=(const MyComplex& rhs){ //------------FIXME---
  if((abs((real - rhs.real)) > DIFF) || (abs((imaginary - rhs.imaginary)) > DIFF)){
    return true;
  }
  else { return false; }
}

double dist(MyComplex a, MyComplex b){
  double re;
  double im;
  
  re = ((a.getReal() - b.getReal())*(a.getReal() - b.getReal()));
  im = ((a.getImaginary() - b.getImaginary())*(a.getImaginary() - b.getImaginary()));
  return sqrt(re+im);
  
}
  
double MyComplex::dist2(MyComplex x){
  MyComplex y;
  double distance;
  y.imaginary = (imaginary - x.imaginary);
  y.real = (real - x.real);
  distance = sqrt((y.imaginary * y.imaginary)+(y.real * y.real));
  
  return distance;
  }
*/
 
  #include <iostream>
#include <cmath>
#include "MyComplex.h"
//Dr. Stanley's code

MyComplex MyComplex::operator+(MyComplex b){
    MyComplex c;
    c.real = this->real + b.real;
    c.imaginary = this->imaginary + b.imaginary;
    return c;
  }

MyComplex MyComplex::operator-(MyComplex b){
    MyComplex c;
    c.real = this->real - b.real;
    c.imaginary = this->imaginary - b.imaginary;
    return c;
  }

MyComplex& MyComplex::operator=(MyComplex b){
    this->real = b.real;
    this->imaginary = b.imaginary;
    return *this;
  }

MyComplex MyComplex::operator*(MyComplex b){
    MyComplex c;
    c.real = this->real * b.real - this->imaginary*b.imaginary;
    c.imaginary = this->real * b.imaginary + b.real*this->imaginary;
    return c;
  }

double MyComplex::dist2(MyComplex b){
  double dist = 0.0;
  double d_re = 0.0, d_im = 0.0;

  d_re = real - b.real;
  d_im = imaginary - b.imaginary;

  dist = sqrt(d_re*d_re + d_im*d_im);

  return dist;
}


//calc and return the complex conjugate
MyComplex getCong(MyComplex b){
  MyComplex c;
  c.setReal( b.getReal() );
  c.setImag( b.getImag() * -1 );
  return c;
}

//magnitude
double MyComplex::mag(){
  MyComplex temp;
  temp = (*this) * getCong(*this);//mag = B * B+
  return temp.real;
}

//division!
MyComplex MyComplex::operator/(MyComplex b){
  MyComplex temp, B;

  double mag_rhs;
  mag_rhs = b.mag();

  //calc complex conjugate of rhs (b)
  B.real = b.real;
  B.imaginary = (-1)*b.imaginary;

  //now find final value of division
  temp = *this * B;

  temp.real = temp.real/mag_rhs;
  temp.imaginary = temp.imaginary/mag_rhs;


  return temp;
}

bool MyComplex::operator==(MyComplex b){

  //test real part for similarity
  if( fabs(this->real - b.real) < DIFF && fabs(this->imaginary - b.imaginary) < DIFF){
    return true;
  }else{
    return false;
  }
}

bool MyComplex::operator!=(MyComplex b){

  //test real part for similarity
  if(fabs(this->real - b.real) > DIFF || fabs(this->imaginary - b.imaginary) > DIFF){
      return true;
  }else{
    return false;
  }
}
