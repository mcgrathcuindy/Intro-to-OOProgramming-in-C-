#include <iostream>

using namespace std;

class Polygon{
private:
  //double side;
public:
  Polygon(){
    side = 0.0;
  }

  //getter
  double getSide() const {
    return side;
  }

  //setter
  void setSide(double s){
    side = s;
  }

  double getArea() const{
    return side * side;//good for square or rectangle 
  }
protected://accessible only to derived classes
  double side;

};

class Square : public Polygon{
private:

public:
  /* This doesn't work if side is private!*/
  Square(){
    side = 0.0;
  }
  

};

class Triangle : public Polygon{
  //Triangle(){
  //side = 0.0;
  //}
public:
  double getArea() const {
    return (side * side * .5);
  }

};

int main(void){
  Square sq;
  Triangle tri;
  double length = 0.0;

  cout << "enter the length of the side of the square" << endl;
  cin >> length;

  sq.setSide(length);

  cout << "your square has a side of length " << sq.getSide() << endl;

  cout << "Your square has an area of " <<sq.getArea() << endl;

  cout << "enter the length of the side of the triangle" << endl;
  cin >> length;

  tri.setSide(length);

  cout << "your triangle has a side of length " << tri.getSide() << endl;

  cout << "Your triangle has an area of " << tri.getArea() << endl;

  return 0;
}
