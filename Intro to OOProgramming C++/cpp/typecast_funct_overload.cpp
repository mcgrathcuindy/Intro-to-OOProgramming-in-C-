/*
chrs mcgrath
desc: typecasting, function overloading, default values
date: 1/28/3019
*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

//function overloading

void DatePrint(int currDay, int currMonth, int currYear, int printStyle){
    cout << currMonth << "/" << currDay << "/" << currYear << endl;
  if(printStyle == 1){
    cout << currDay << "/" << currMonth << "/" << currYear << endl;
  }
  else { 
    cout << "Invalid" << endl;
  }
}

//overloading dateprint function name = dateprint refers to two different functions
//input parameters MUST be different

void DatePrint(int currDay, string currMonth, int currYear){
  cout << currMonth << " " << currDay << ", " << currYear << endl;



}
int main(void){

  DatePrint(28, 1, 2019);
  DatePrint(28, "January", 2019);
  DatePrint(28, 1, 2019, 1);

  double x = 4.78;
  int b = 2;
  double y = 0.0;

  b = (int)x;
  cout << " b = " << b << endl;

  x = (double)b;
  printf("x = %lf\n", x);
  //typecasting in c

  //typecasting in c++
  double z = 3.91;
  int a = 5;
  cout << "a = " << a << endl;
  z = static_cast<double>(a);//syntax static_cast<data-type<(expression)
  cout << " z = " << z << endl;
  





  return 0;
}
