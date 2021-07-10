// This program is for displaying Fibonacci series upto n numbers.
// This follows an iterative approach.

#include<iostream>
using namespace std;

void fibo(int n)
{
    int sum=0,term1=0,term2=1;
    for(int i = 2; i <= n; i++)
    {
        cout<<sum<<" ";
        sum = term1 + term2;
        term1 = term2;
        term2 = sum;
    }
    
}

int main()
{
    int n;
    cout<<"Enter the number till which Fibonacci series is to be displayed: "<<endl;
    cin>>n;

    fibo(n);
    
    return 0;
}