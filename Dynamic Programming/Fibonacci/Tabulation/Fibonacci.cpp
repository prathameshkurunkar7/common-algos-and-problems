// Find the nth term in Fibonacci series.

// This program uses Dynamic Programming - Tabulation Method(Iterative Approach)
#include<iostream>
using namespace std;

int fib(int n)
{
    // Tabulation method follows filling of array from 0th index.(Bottom Up approach)
    int arr[n];

    if(n<=1)
        return n;

    arr[0]=0;
    arr[1]=1;

    for (int i = 2; i <=n; i++)
    {
        arr[i] = arr[i-2] + arr[i-1];
    }

    return arr[n];
    
}

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<fib(n)<<endl;

    return 0;
}