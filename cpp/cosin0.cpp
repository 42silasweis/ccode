// g++ sinampperiod.cpp -o simampperiod.o
#include <iostream>
#include <cmath>
using namespace std;
double round4(double var)
{  double value;
  if (var < 0){
    value = (int)(var * 10000 - 0.00005);
      }
  else{
    value = (int)(var * 10000 + 0.00005);
  }
  return (double)value / 1000;
}

int main(){
double PI=3.14159265;
double a,p,t, rad, sr, aspr;
      //count>>"\nInput and Amplitude : ";
      cin>>a;
      //count>>"\nInput a period : ";
      cin>>p;
      cout <<"theta\tsin(t)\ta*sin(pt) \n";
      for ( t=0 ; t<=360 ; t = t + 15){
        rad = t * (PI /180);
        sr = sin(rad);
        aspr = a*sin(p*t);
        cout<<t<<"\t"<<sr<<"\t"<<aspr<<"\n";
      }
  return 0;
}
