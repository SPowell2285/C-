#include <iostream>
using namespace std;

int toFahrenheit(int c)
{
return((9.0 / 5) * c + 32);
}

int main()
{
int c , f;

c = 100;
while ((f = toFahrenheit(c))!= c) c--;

cout << "Celsius = "<< c << endl << endl;
cout << "Fahrenheit = "<< f << endl << endl;

return 0;
}