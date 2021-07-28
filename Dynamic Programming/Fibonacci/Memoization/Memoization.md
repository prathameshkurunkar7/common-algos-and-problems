#  Fibonacci using Memoization

**For finding the nth term in Fibonacci sequence using Memoization.**

Definition of Fibo Func:

fib(n) = {

	0 if n=0

	1 if n=1

	fib(n-2)+fib(n-1) if n>1
}

**Memoization is a technique in which by storing the results of the function we avoid the same(repetitive) calls from happening again**.(Conditional calls)

**Memoization follows Top-Down Approach(Recursive).**

Steps in Memoization:
1. Maintain a global array with n indices and -1 as initial value.

> [-1,-1,-1,-1,-1]
2. Go through all recursive calls according to the function definition and store the values in the maintained array. If the value isn't already maintained, make the recursive call, else skip it.
> 
>     if(arr[n]==-1)
>     
>     {
>     
>     if(n<=1)
>     
>     arr[n] =  n;
>     
>     else{
>     
>     arr[n] =  fib(n-2) +  fib(n-1);
>     
>     }
>     
>     }
>     
>     return  arr[n];


If Memoization is used, the recursive tree will look like the following for n=5:
      
                         fib(5)
                     /             \
               fib(4)                fib(3)
             /      \                /     \
         fib(3)      fib(2)         fib(2)    fib(1)
        /     \        /    \       /    \
	  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
	  /    \
	fib(1) fib(0)

 Total Calls made = 6
 As the calls that are repeated are skipped.

_Time Complexity_: O(n+1) -> O(n)
