#include <iostream>

using namespace std;

class Rectangle{
private:
  double width;
  double length;
public:

  Rectangle(){
    cout << "this is the rectangle default constructor\n";
  }

  Rectangle(double w, double len){
    width = w;
    length = len;
    cout << "This is the rectangle constructor\n";
  }

  void setWidth(double w){
    width = w;
  }

  void setLength(double l){
    length = l;
  }

  double getWidth() const{
    return width;
  }

  double getLength() const {
    return length;
  }

  //area of rectangle
  virtual double getArea() const {
    return length * width;
  }


};

class Box : public Rectangle{
private:
  double height;
public:
  //default constructor--explicitly writing verygood practice when the class has a child/parent relationship
  Box(){
    cout << "this is the default box constructor\n";  
  }

  double getHeight() const {
    return height;
  }

  //syntax is different outside the class declaration
  Box(double w, double len, double h) : Rectangle(w,len){
    height = h;
  }

  //surface area of the box
  double getArea(){
    return (getLength()*getWidth()*2) + (getWidth()*height*2) + (getLength()*height*2);
  }

};

//Rectangle* type means that getArea in box class does not override getArea in rect class by default 
  void funct(Rectangle* rect){
    cout << "The area of your rectangle is " << rect->getArea() << endl;
  }



int main(void){
  Box a(1.0,2.0,3.0);
  Rectangle square(1.0,2.0);

  Box* ptr_box = nullptr;
  Rectangle* ptr_rect = nullptr;
  
  ptr_box = &a;
  ptr_rect = &square;

  funct(ptr_rect);
  funct(ptr_box);

  //cout << "The width of the cube is " << a.getWidth() << endl; 
  //cout << "The length of the cube is " << a.getLength() << endl;
  //cout << "The height of the cube is " << a.getHeight() << endl;
  //cout << "The surface area of the cube is " << a.getArea() << endl;
  //cout << "The area of the sq is " << square.getArea() << endl;


  return 0;
}
