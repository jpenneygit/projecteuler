#include <iostream>
#include <stdlib.h>

int fib(int i);

using namespace std;

int main(int argc, char* argv[])
{
  int i = 0;
  int topnum = atoi(argv[1]);
  int sum = 0;
  int fibby = 0;
  
  for(i=1;i<topnum;i+=1){
    fibby = fib(i);
    cout << fibby << endl;
    if(!(fibby%2)){
      sum += fibby;
    }
    cout << "sum is " << sum << endl;
  }
    cout << "final sum is " << sum << endl;

}

int fib(int i){
  if((i>0)&&(i<3)) return i;
  return fib(i-2) + fib(i-1);
}
