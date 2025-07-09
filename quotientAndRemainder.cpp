#include <iostream>

using namespace std;

int main()
{
    int divisor, dividend, quotient, remainder;

    cout << "Enter Dividend = ";
    cin >> dividend;

    cout << "Enter Divisor = ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient of " << dividend << " and " << divisor << " is = " << quotient << endl;
    cout << "Remainder of " << dividend << " and " << divisor << " is = " << remainder << endl;
}