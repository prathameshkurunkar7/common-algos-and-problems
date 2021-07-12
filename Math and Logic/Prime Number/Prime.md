# Prime Number

A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. In other words, a number that is divisible only by itself and 1 is a prime number. All the natural numbers that are not prime are called as composite numbers.

> _Note: 0 and 1 are neither prime nor composite_

### Steps

1. Accept a `number`
2. Iterate for every `i` in 2 to `(number / 2) + 1`
3. If any `i` divides the number and gives a remainder as zero, then the number is not a prime
4. Else it is a prime

_Time Complexity: O(n)_

_Auxiliary Space: O(1)_
