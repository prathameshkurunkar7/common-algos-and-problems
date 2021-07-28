#  Fibonacci

**For finding the nth term in Fibonacci sequence.**

Definition of Fibo Func:

fib(n) = {

	0 if n=0

	1 if n=1

	fib(n-2)+fib(n-1) if n>1
}

  

If recursion is used, the recursive tree will look like the following for n=5:
      
                         fib(5)
                     /             \
               fib(4)                fib(3)
             /      \                /     \
         fib(3)      fib(2)         fib(2)    fib(1)
        /     \        /    \       /    \
	  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
	  /    \
	fib(1) fib(0)

 Total Calls made = 15.
 As we can notice, a lot of them are unnecessary and repetitive.
 This solution can be optimized as it has time complexity of:
 
_Time Complexity: O(2^n)_

This can be reduced using two approaches of Dynamic Programming:
1. _Memoization_ (not a typo)
2. _Tabulation_
