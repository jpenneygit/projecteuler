#include <iostream>
#include <stdlib.h>
#include <cmath>

double largestfactor(double i);

using namespace std;

int main(int argc, char* argv[])
{
  int i = 0;
  int topnum = atoi(argv[1]);
  int sum = 0;
  int fibby = 0;
  
  cout << largestfactor(topnum) << endl;

}

double largestfactor(double i){

  bool neg = false;
  double fac = i;
  
  if(i==0) return 0;
  
  if(i<0){
    i=i*-1; //keep going
    neg = true;
  }
  
  if((i>0) && (i<4)) return i; //1,2,3

  if(!(fmod(i,2L))) return i/2; //evens
  
  for(double x = 3; x < i/2;x=x+2){
    if(!fmod(i,x)) fac = x; //store only the largest
  }

  return fac;
  
}
