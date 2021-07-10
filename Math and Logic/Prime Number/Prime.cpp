#include <iostream>

using namespace std;

bool isPrime(int number)
{
    if (number == 1 || number == 0)
    {
        return false;
    }

    int limit = (int)(number / 2) + 1;
    for (int i = 2; i < limit; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = (isPrime(number) == true) ? "a prime." : "not a prime.";

    cout << "Entered number is " << result;
    return 0;
}