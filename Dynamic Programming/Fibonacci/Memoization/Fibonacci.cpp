// Find the nth term in Fibonacci series.

// This program uses Dynamic Programming - Memoization Method(Recursive Approach)
#include<iostream>
using namespace std;
#define max_size 20

// maintain a global array so that it doesn't get caught in recursive calls.
int arr[max_size];

void initializer(int n)
{
    for (int i = 0; i < max_size; i++)
        arr[i] = -1;
}

int fib(int n)
{
    // Memoization method follows (Top to Bottom approach)
    if(arr[n]==-1)
    {
        if(n<=1)
            arr[n] = n;
        else{
            arr[n] = fib(n-2) + fib(n-1);
        }
    }
    return arr[n];
}

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    initializer(n);
    cout<<fib(n)<<endl;

    return 0;
}