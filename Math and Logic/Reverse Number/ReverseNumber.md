# Reverse a Number

### Steps:

1. Accept a number `number = 123`
2. Set a variable `reversedNumber = 0`
3. Take modulus of the `number` with 10, this will yield us the digit on the units place, in this case `3`
4. Multiply `reversedNumber` by 10 and add `3` to it, assign the result back to `reversedNumber`
5. Divide the `number` by 10 and set the integer part of the result back to `number`, `number = (int)(number / 10)`, this will yield us the number consisting all the digits apart from the digit at units place, in this case `12`
6. Repeat the above process until `number` boils down to zero.

_Time Complexity: O(n)_
_Auxiliary Space: O(1)_
