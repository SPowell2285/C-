#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  int n = 0, n_initial;

cout << "Enter Exercise Input Quantity: ";
cin >> n ;
n_initial = n;
  
cout << endl << endl;

int grades[2][n];

while(n > 0)
{
  int x,y;
cout << "Score received for exercise " << n << ": ";
cin >> x;
grades [0][n] = x;



cout << "Points possible for exercise " << n << ": ";
cin >> y;
grades [1][n] = y;

n = n-1;

cout << endl << endl;
}

double score_total = 0, possible_total = 0, row_1, row_2;
int xy = 0;
n = n_initial;

for (int xy=0; xy < n_initial; xy++)
{
    score_total += grades [0][n];
    n--;
}

xy=0;
n = n_initial;

for(int xy = 0; xy < n_initial; xy++)
{
  possible_total += grades[1][n];
  n--;
}
cout << setprecision(4);
cout << "Your total is " << score_total << " out of " << possible_total << ", or " << (score_total / possible_total) * 100 << "%" <<endl;

return 0;
}