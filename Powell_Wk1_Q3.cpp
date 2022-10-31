#include <iostream>
using namespace std;

int main()
{
    int numberOfCouponsWin; 
    const int COUPONS_PER_CANDYBAR = 10;
    const int COUPONS_PER_GUMBALL = 3;

    cout << "Enter Coupons Won: ";
    cin >> numberOfCouponsWin;

    
    int numberOfCandybars = numberOfCouponsWin / COUPONS_PER_CANDYBAR;
    int remainingCoupons = numberOfCouponsWin % COUPONS_PER_CANDYBAR;
    int numberOfGumballs = remainingCoupons / COUPONS_PER_GUMBALL;
    remainingCoupons = remainingCoupons % COUPONS_PER_GUMBALL;

    cout << "Candy bars:    " << numberOfCandybars << endl;
    cout << "Gumballs:      " << numberOfGumballs << endl;
    cout << "Remaining coupons: " << remainingCoupons << endl;

    return 0;
}