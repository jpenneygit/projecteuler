#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

bool ispal(double i);

int main(int argc, char * argv[])
{

  int result = 0;
  //int m1 = 995,m2 = 111;
  int m1 = 0,m2=0;
  double bigpal = 0;
  int bigm1 = 0;
  int bigm2 = 0;
  
  for(;m1<atoi(argv[1]);m1++){
    for(m2=0;m2<atoi(argv[1]);m2++){
      if(ispal(m1*m2) && m1*m2>bigpal) {
	bigm1 = m1;
	bigm2 = m2;
	bigpal = bigm1*bigm2;
	cout << "BIG: " << bigm1 << " * " << bigm2 << " = " << bigm1*bigm2 << endl;
           }
      else{
	 cout << m1 << " * " << m2 << " = " << m1*m2 << endl;
      }
    }
  }

  cout << bigm1 << " * " << bigm2 << " = " << bigpal << endl;
  
}

bool ispal(double i){

  stringstream x;
  string y;
  
  x << i;
  x >> y;
  
  int l = y.length();
  for(int z=0;z<l/2;z++){
    if(y[z]!=y[l-z-1]) return false;
  }

  return true;
  
}
