#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter 1st Number = ";
    std::cin >> num1;

    std::cout << "Enter 2nd Number = ";
    std::cin >> num2;

    std::cout << "Sum of " << num1 << " and " << num2 << " is = " << (num1 + num2) << std::endl;

    return 0;
}