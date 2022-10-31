#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
int  n;
double r, guess(4), lastGuess;

cout << "Enter a number to find the square root of: ";
cin >> n;

do
{

    r = n / guess;
    lastGuess = guess;
    guess = ( guess + r ) / 2;

    cout << "Guess : " << guess  << endl;
    cout << "Last Guess 1% = " << lastGuess + ( lastGuess * 0.01 ) << endl;
    cout << "r = " << r << endl;

} while( guess >= lastGuess * 1.01 );
cout << r;

return 0;
}