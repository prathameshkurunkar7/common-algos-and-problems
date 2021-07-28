#  Fibonacci using Tabulation

**For finding the nth term in Fibonacci sequence using Tabulation.**

Definition of Fibo Func:

fib(n) = {

	0 if n=0

	1 if n=1

	fib(n-2)+fib(n-1) if n>1
}

**Tabulation follows Bottom-Up Approach(Iterative).**

Steps in Tabulation:
1. Maintain a array with n indices and keep adding results into them.

> [] /*size = n*/
2. Follow an iterative approach.
> 
>     if(n<=1)
>     return  n;
>      
>     arr[0]=0;    
>     arr[1]=1;    
>     for (int  i  =  2; i  <=n; i++)    
>     {    
>     arr[i] =  arr[i-2] +  arr[i-1];    
>     }
>     return  arr[n];

No recursive calls are made when Tabulation approach is followed.
**Tabulation method is generally used more than Memoization in Dynamic Programming.**

_Time Complexity_:  O(n)
