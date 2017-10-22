#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main(int argc, char * argv[])
{

  int i=20;

  do{

    cout << i << endl;
    if((i%2)) {i+=20; continue;}
    if((i%3)) {i+=20; continue;}
    if((i%4)) {i+=20; continue;}
    if((i%5)) {i+=20; continue;}
    if((i%6)) {i+=20; continue;}
    if((i%7)) {i+=20; continue;}
    if((i%8)) {i+=20; continue;}
    if((i%9)) {i+=20; continue;}
    if((i%10)) {i+=20; continue;}
    if((i%11)) {i+=20; continue;}
    if((i%12)) {i+=20; continue;}
    if((i%13)) {i+=20; continue;}
    if((i%14)) {i+=20; continue;}
    if((i%15)) {i+=20; continue;}
    if((i%16)) {i+=20; continue;}
    if((i%17)) {i+=20; continue;}
    if((i%18)) {i+=20; continue;}
    if((i%19)) {i+=20; continue;}
    if((i%20)) {i+=20; continue;}

    cout << i << " is the answer " << endl;
    
  }while(i<999999999);
  
}


