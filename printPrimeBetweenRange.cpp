// C++ Program to Print Prime Numbers between two Numbers

#include <iostream>

using namespace std;

bool isPrime(int);
void printPrime(int, int);

int main()
{
    int num1, num2;

    cout << "Enter two numbers = ";
    cin >> num1 >> num2;

    printPrime(num1, num2);
    return 0;
}

bool isPrime(int num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }

    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

void printPrime(int num1, int num2)
{
    if (num1 > num2)
    {
        std::swap(num1, num2);
    }

    for (int i = num1 + 1; i < num2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}