#include <iostream>
#include <cmath>

using namespace std;

class Point{

private:
  double x;
  double y;
public:
  //calculates dist from origin
  double distance() const;
  void setCoordX(double);
  void setCoordY(double);
  double putCoordX() const;
  double putCoordY() const;
};

double Point::putCoordX() const{
  return x;
}

double Point::putCoordY() const{
  return y;
}

void Point::setCoordX(double X_coord){
  x = X_coord;
}

void Point::setCoordY(double Y_coord){
  y = Y_coord;
}

double Point::distance() const{
  return sqrt(x*x + y*y);
}

//good old fashioned function :)
double dist_2_pts(Point p, Point q){
  double dx = 0.0, dy = 0.0, dist = 0.0;
  dx = p.putCoordX() - q.putCoordX();
  dy = p.putCoordY() - q.putCoordY();
  dist = sqrt(dx*dx + dy*dy);

  return dist;
}


int main(void){

  Point p, q;
  double dummy = 0.0;
  cout<<"Please enter an X coordinate:\n";
  cin>>dummy;
  p.setCoordX(dummy);
  cout<<"Please enter a Y coordinate:\n";
  cin>>dummy;
  p.setCoordY(dummy);
  cout<<"The coordinates you choose were x = "<< p.putCoordX() <<"and "<< "y = "<<p.putCoordY()<<endl;

  cout<<"your coordinates are "<< p.distance() <<" units away from the origin"<<endl;

  cout<<"Now enter your second point\n";
  cout<<"Please enter an X coordinate:\n";
  cin>>dummy;
  q.setCoordX(dummy);
  cout<<"Please enter a Y coordinate:\n";
  cin>>dummy;
  q.setCoordY(dummy);
  cout<<"The coordinates you choose were x = "<< q.putCoordX() <<" and "<< "y = "<<q.putCoordY()<<endl;

  cout<<"The distance between your two points is "<< dist_2_pts(p,q) <<endl;

  return 0;
}
