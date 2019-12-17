/* Name: < Luke Roberts, Chris Mcgrath> Luke Roberts: Partner 1, Chris McGrath: Partner 2,
   Date: <3/8/19>
   Desc: Implementation of a Rational number class.
*/
// iostream is not neccassary because cout is not used.
#include <sstream>
#include <string>
#include <stdexcept>

// Be sure to include the .h file!
#include "Rational.h"

using namespace std;

Rational::Rational(){
  numerator = new int;
  denominator = new int;
  (*numerator) = 1;
   (*denominator) = 1;
}

Rational::~Rational(){
  delete numerator;
  delete denominator;
}
  
Rational::Rational(int top){
  numerator = new int;
  denominator = new int;
  (*numerator) = top;
  (*denominator) = 1;
}

Rational::Rational(int top, int bottom){
  numerator = new int;
  denominator = new int;
  (*numerator) = top;
  (*denominator) = bottom;
}
  
// Setters
void Rational::setNumerator(const int &n){
  (*numerator) = n;
  return;
}
  
void Rational::setDenominator(const int &n){
  (*denominator) = n;
}
  
// Getters
int Rational::getNumerator() const{

  return (*numerator);
}
  
int Rational::getDenominator() const{
  return (*denominator);
}
  
string Rational::print() const{
  stringstream s;
  s << (*numerator) << "/" << (*denominator);
  return s.str();
}
  
  
// Returns a new Rational number, does not change either.
Rational Rational::operator+(const Rational &other) const{
  // Fix order of commented lines below
  Rational ret;
  
  ret->denominator = (*denominator) * other->denominator;
  ret->numerator = (*numerator) * other->denominator + other->numerator  * (*denominator);
  
  return ret;
}
  
// Returns a new Rational number, does not change either.
Rational Rational::operator*(const Rational &other) const{
  Rational ne;
  ne->numerator = (*numerator) * other->numerator;
  ne->denominator = (*denominator) * other->denominator;
  
  return ne;
}

// Returns a bool and no need to change this or other
bool Rational::isEqualTo(const Rational &other) const{
  if ((*denominator) != other->denominator){
    return false;
  } 
  if ((*numerator) != other->numerator){
    return false;
  }
  return true;
}

bool Rational::isGreaterThan(const Rational &other) const{
  if(Rational::isLessThanOrEqualTo(other)){
    return false;
  }
  return true;
}

bool Rational::isGreaterThanOrEqualTo(const Rational &other) const{
  if(Rational::isLessThan(other)){
    return false;
  }
  return true;
}

Rational Rational::invert() const{
  Rational ne;
  ne->numerator = (*denominator);
  ne->denominator = (*numerator);
  return ne;
}

Rational Rational::negate() const{
  Rational a;
  a.Rational::setNumerator(-1 * (*numerator));
  a.Rational::setDenominator((*denominator));
  return a;
}


bool Rational::isNotEqualTo(const Rational &other) const{
  if(((*numerator) == other->numerator) && ((*denominator) == other->denominator)){
    return false;
  }
  return true;
}

bool Rational::isLessThan(const Rational &other) const{
  double thi;
  double oth;
  thi = (*numerator)/static_cast<double>((*denominator));
  oth = other->numerator/static_cast<double>(other->denominator);
  if (thi >= oth){
    return false;
  }
  return true;
}

bool Rational::isLessThanOrEqualTo(const Rational &other) const{
  double thi;
  double oth;
  thi = (*numerator)/static_cast<double>(*denominator);
  oth = other->numerator/static_cast<double>(other->denominator);
  if (thi > oth){
    return false;
  }
  return true;
}
 


