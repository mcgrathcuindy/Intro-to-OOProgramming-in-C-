#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>

using namespace std;

#define PI 3.1415926536

/*  Old C syntax, not needed in C++
typedef struct circle_t{




}circle;
*/

struct circle{
  double radius;
  double diameter;
  double area;
  //  char* color;
  char color[10];
  string colour;
};

struct olympic_rings{
  circle blue;
  circle yellow;
  circle black;
  circle green;
  circle red;
};

void change_circle(circle* x){
  
  strcpy((x->color), "yellow");//c string color
  x->colour = "yellow";//c++ string colour
  
  x->radius = 6.3; 
  x->area = PI * x->radius * x->radius;
}

int main(void){

  circle x;
  x.radius = 4.5;
  cout<<x.radius<<endl;

  strcpy(x.color, "blue");//strncpy is also an option with c-strings
  cout<< x.color <<endl;
  x.colour = "bleu";//perfectly fine since strings are dynamically allocated
  cout<< x.colour <<endl;


  //nested struct
  olympic_rings y;
  y.blue.colour = "bleu";
  cout<< y.blue.colour <<endl;

  //array of structs
  circle olympic_rings2[5];

  //vector of structs
  vector<circle> olympic_rings3(5);


  olympic_rings3[0].radius = 5.0;
  olympic_rings3[0].area = PI*  olympic_rings3[0].radius *  olympic_rings3[0].radius;
  cout<<"The area of your first circle is "<<   olympic_rings3[0].area<<endl;

  
  //  x.color = "blue"; //not recommended
  //  cout<< x.color <<endl;
  change_circle(&x);
  cout << "the color of your circle is " << endl;
  cout << x.color << endl;
  cout << "the colour of your circle is " << endl;
  cout << x.colour << endl;
  cout << "the area of your circle is " << endl;
  cout << x.area << endl;

  return 0;
}