#include <iostream>

using namespace std;

int reverse(int number)
{

    int reversedNumber = 0;

    while (number > 0)
    {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        number = (int)(number / 10);
    }

    return reversedNumber;
}

int main()
{

    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Reversed number: " << reverse(number);
    return 0;
}