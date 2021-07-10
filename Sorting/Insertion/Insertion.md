# Insertion Sort

## Explanation

#### Steps:
1.  The second element of an array is compared with the elements that appears before
    it (only first element in this case). If the second element is smaller than first element, 
    second element is inserted in the position of first element. 
    After first step, first two elements of an array will be sorted.

2.  The third element of an array is compared with the elements that appears 
    before it (first and second element). If third element is smaller than 
    first element, it is inserted in the position of first element. 
    If third element is larger than first element but, smaller than second element, 
    it is inserted in the position of second element. If third element is larger 
    than both the elements, it is kept in the position as it is. 
    After second step, first three elements of an array will be sorted.

3.  Similary, the fourth element of an array is compared with the elements 
    that appears before it (first, second and third element) and the same procedure 
    is applied and that element is inserted in the proper position. After third step,
    first four elements of an array will be sorted.

If there are n elements to be sorted. Then, this procedure is repeated n-1 times to 
get sorted list of array.

_Time Complexity: O(n^2)_

_Auxiliary Space: O(1)_

_Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted._

_Algorithmic Paradigm: Incremental Approach_
_Sorting In Place: Yes_
_Stable: Yes_

Uses: Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.