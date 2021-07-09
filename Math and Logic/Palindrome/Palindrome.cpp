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

bool isPalindrome(int number)
{

    return number == reverse(number);
}

int main()
{

    int number;

    cout << "Enter a number: ";
    cin >> number;

    string result = (isPalindrome(number) == true) ? "a palindrome." : "not a palindrome.";
    cout << "Entered number is " << result;
    return 0;
}