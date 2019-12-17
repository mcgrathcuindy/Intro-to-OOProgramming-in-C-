/*
Chris McGrath
2/28/19
practice for test
*/

#include <iostream>
using namespace std;

class Time {

private: 
  int hours;
  int minutes;
public:
  void setHours(int h){
    hours = h;
  }

  Time operator%(const Time& rhs);

  void setMinutes(int m){
    minutes = m;
  }

  int getHours() const {
    return hours;
  }

  int getMinutes() const {
    return minutes;
  }

  Time operator=(const Time& rhs){
    this->hours = rhs.hours;
    this->minutes = rhs.minutes;

    return *this;
  }
  Time();

  Time operator+(const Time& rhs);
  Time operator-(const Time& rhs);
  Time operator/(const Time& rhs);
  Time operator*(const Time& rhs);
};
  Time::Time(){
    hours = 1;
    minutes = 1;
  }

  Time Time::operator%(const Time& rhs){
    Time total;
    total.hours = hours + rhs.hours;
    total.minutes = minutes - rhs.minutes;
    return total;
  }

  Time Time::operator*(const Time& rhs){
    Time total;
    total.hours = hours * rhs.hours;
    total.minutes = minutes * rhs.minutes;

    return total;
  }

  Time Time::operator/(const Time& rhs){
    Time total;

    total.hours = hours / rhs.hours;
    total.minutes = minutes / rhs.minutes;

    return total;
  }

Time Time::operator-(const Time& rhs){
  Time total;

  total.hours = hours - rhs.hours;
  total.minutes = minutes - rhs.minutes;
  return total;
}

Time Time::operator+(const Time& rhs){
  Time total;

  total.hours = hours + rhs.hours;
  total.minutes = minutes + rhs.minutes;

  return total;
}


int main(){
  Time a;
  Time b;
  Time c;
  int inputa = 0;
  int inputb = 0;
  cout << a.getHours() << " " << a.getMinutes() << endl;

  cout << "Enter time values for object a\n";
  cin >> inputa;
  cin >> inputb;

  a.setHours(inputa);
  a.setMinutes(inputb);

  cout << "Enter time values for object b\n";
  cin >> inputa;
  cin >> inputb;

  b.setHours(inputa);
  b.setMinutes(inputb);

  c = a + b;

  cout << "Object a + b = " << c.getHours() << " hours and " << c.getMinutes() << " minutes.\n";
  
  c = a - b;

  cout << "Object a - b = " << c.getHours() << " hours and " << c.getMinutes() << " minutes.\n";
  
  c = a / b;

  cout << "Object a / b = " << c.getHours() << " hours and " << c.getMinutes() << " minutes.\n";

  c = a * b;

  cout << "Object a * b = " << c.getHours() << " hours and " << c.getMinutes() << " minutes.\n";
  
  c = a % b;

  cout << "Object a & b = " << c.getHours() << " hours and " << c.getMinutes() << " minutes.\n";

  return 0;
}
