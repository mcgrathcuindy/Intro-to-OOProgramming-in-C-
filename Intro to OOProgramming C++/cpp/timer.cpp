#include <iostream>
#include <sys/time.h>
#include <cstdio>
using namespace std;

class Timer{
private:
  struct timeval start_execution;
  struct timeval end_execution;
  double duration;
public:
  Timer(){
    gettimeofday(&start_execution,NULL);
  }
  ~Timer(){
    gettimeofday(&end_execution, NULL);
    duration = (double)((end_execution.tv_sec - start_execution.tv_sec)*1000000
			+end_execution.tv_usec) - start_execution.tv_usec;
    printf("Your function took %lf microseconds to execute\n", duration);
  }
  //void Somefunction();
};

void cppfunction(void){
  Timer b;
  int var = 0;
  for(int j = 0; j < 1000; j++){
    printf("Something %i\n", var);
  }
}
void cfunction(void){
  int var = 0;
  Timer a;
  for(int i = 0; i < 1000; ++i){
    cout << "Some-string " << var << endl;                                                                                                                                                                                                          
  }
}

int main(void){
 
  cppfunction();
  cfunction();
  //a.Somefunction();
  /*Timer b;
  for(int j = 0; j < 1000; j++){
    printf("Something %i\n", var);
  }
  */
  return 0;
}
