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
double c,rad, t, sr, cr;//theta in terms on degrees
//sr is sine results cr is cosine results
  for (t=0 ; t<=360 ; t = t + 15 )
  {
    rad = t * (PI / 180);
    sr = sin(rad);
    sr = round4(sr);
    cr = cos(rad);
    cr = round4(cr);
    c = sr*sr + cr * cr;
      cout <<t<<"\t\t"<<cr<<"\t\t"<<sr<<"\t\t"<<c<<"\n";
  }
  return 0;
}
