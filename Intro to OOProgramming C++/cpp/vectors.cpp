#include <iostream>
#include <vector>

using namespace std;

class Point{
public:
  float x,y,z;

  //parameter constructor
  Point(float x, float y, float z)
    :x(x), y(y), z(z)
  {}

  //move constructor
  Point(Point&& P)
    :x(P.x), y(P.y), z(P.z)
  {
    //enables emplace_back to create on the heap directly
    
  }

  //copy constructor
  Point(const Point& P)
    :x(P.x), y(P.y), z(P.z){cout <<"Copy constructor called!\n";}
};

double some_function(){
  return 7.0;
}

int main(void){
  double x;
  x = some_function();
  vector<Point> points;

  points.reserve(3);


  //emplace_back can create object on heap, which avoids copying from the stack
  //only in c++11
  points.emplace_back(Point(1.0, 2.0, 3.0));
  points.emplace_back(Point(2.0, 4.0, 6.0));
  points.emplace_back(Point(3.0, 6.0, 9.0));




  return 0;
}
