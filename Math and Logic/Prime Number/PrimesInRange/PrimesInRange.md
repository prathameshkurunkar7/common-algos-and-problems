# Primes in Range

Given two numbers a and b as interval range, the task is to find the prime numbers in between this interval. For example, if the given range is [10, 20], then output is 11, 13, 17, 19.

### Steps:

1.	Take lower range and the upper range as the input from the user:
2.	Use for loop to traverse through the range
for num in range(lower, upper):
3.	If the number is completely divisible by i for i between 2 and the number itself, it is a prime number.
if all(num%i !=0 for i in range(2,num)):
4.	Print the numbers.

_Contributed by Rujula Shinde_