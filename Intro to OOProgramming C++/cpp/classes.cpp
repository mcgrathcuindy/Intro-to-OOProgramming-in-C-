#include <iostream>

using namespace std;

class Rectangle{
private:
  double width;
  double length;
public:
  void Rectangle::setWidth(double TosetWidth){ width = TosetWidth; }
  void Rectangle::setLength(double TosetLength){ length = TosetLength; }
  double getWidth(void) const;
  double getLength(void) const;
  double getArea(void) const;
};

double Rectangle::getWidth() const{
  return width;
}

double Rectangle::getLength() const{
  return length;
}

double Rectangle::getArea() const{
  return length * width;
}

int main(void){
  Rectangle box;

  box.setWidth(4.7);
  box.setLength(3.5);
  
  cout << box.getWidth << endl;


  return 0;
}
