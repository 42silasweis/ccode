// g++ sin0.cpp -o sim0.o
#include <iostream>
#include <cmath>
//using namespace std;
int main(){
double PI=3.14159265;
double t, result=0;// theta in terms of degrees
  for (t=0 ; t<=360 ; t = t + 15)
  {
    result = sin(t);
      std::cout <<t<<"\t"<< result<<"\n";
  }
  return 0;
}
