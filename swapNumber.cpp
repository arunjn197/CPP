#include <iostream>

using namespace std;

int main()
{
    int num1, num2, temp;

    cout << "Enter 1st Number = ";
    cin >> num1;

    cout << "Enter 2nd Number = ";
    cin >> num2;

    cout << "Before Swapping." << endl;
    cout << "1st Number = " << num1 << " 2nd Number = " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After Swapping." << endl;
    cout << "1st Number = " << num1 << " 2nd Number = " << num2 << endl;

    return 0;
}