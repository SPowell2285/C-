#include <iostream>
using namespace std;

const double PAYMENT = 50.00;

int main()
{
  int month = 0;
  double i, p = 1000., r = 0.015;

  while(p >= 0)
  {
    month++;
    i = p * r;
    p = p - (PAYMENT - i);

    if(p > 0)
    cout << "Month "<< month <<" balance remaining: "<< p << endl;
  }
}