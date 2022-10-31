#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
int  n, m, METS, guess;


cout << "Enter weight(KG): ";
cin >> n;
cout << "Enter time(Minutes): ";
cin >> m;
cout << "Enter MET: ";
cin >> METS;

guess = (0.0175 * METS * n) * m ;


cout << "Total calories burned estimate: " << guess  << endl;



return 0;
}