#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int PI = 3.142;
  cout<< "cos(60) = " << cos ( 60.0 * PI / 180.0 )<<endl;
  cout<< "sin(60) = " << sin ( 60.0 * PI / 180.0 )<<endl;
  cout<< "tan(45) = " << tan ( 45.0 * PI / 180.0 )<<endl;
  cout<< "acos(0.5) = " << acos (0.5) * 180.0 / PI<<endl;
  cout<< "asin(0.5) = " << asin (0.5) * 180.0 / PI<<endl;
  cout<< "atan(1.0) = " << atan (1.0) * 180.0 / PI<<endl;
  cout<< "2^3 = " << pow(2,3)<<endl;
  cout<< "sqrt(49) = " << sqrt(49)<<endl;
  cout<< "ceil(3.8) = " << ceil(3.8)<<endl;
  cout<< "floor(2.3) = " << floor(2.3)<<endl;
  cout<< "fmod(5.3,2) = " << fmod(5.3,2)<<endl;
  cout<< "trunc(5.3,2) = " << trunc(2.3)<<endl;
  cout<< "round(4.6) = " << round(4.6)<<endl;
  cout<< "remainder(18.5,4.2) = " << remainder(18.5 ,4.2)<<endl;
  cout<< "fmax(100.0,1.0) = " << fmax(100.0,1.0)<<endl;
  cout<< "fmin(100.0,1.0) = " << fmin(100.0,1.0)<<endl;
  cout<< "fdim(2.0,1.0) = " << fdim(2.0,1.0)<<endl;
  cout<< "fabs(3.1416) = " << fabs(3.1416)<<endl;
  cout<< "abs(3.1416) = " << abs(3.1416)<<endl;
  cout<< "log(5) = " << log(5)<<endl;
  cout<< "exp(5.0) = " << exp(5.0)<<endl;
  cout<< "log10(5) = " << log10(5)<<endl;
  return 0;
}