#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
  int i = 0;
  int topnum = atoi(argv[1]);

  int interval = 10;

  int sum = 0;
  for(i=1;i<topnum;i+=1){
    if(!(i%3) || !(i%5)){
      sum += i;
    }
  }
  cout << "sum is " << sum << endl;
  
}
