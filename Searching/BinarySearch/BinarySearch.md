#  Binary Search


In binary search, we look for an element x in a **sorted array** by first comparing x to the midpoint of the array. If x is less than the midpoint, then we search the left half of array. If x is greater than the midpoint, then we search the right half of the array. We then repeat this process, treating left and right halves as subarrays and again comparing x to the midpoint of this subarray then search either its left or right side. We repeat this process until we either find x or the subarray has size 0.

_Time Complexity: O(log n)_

_Auxiliary Space: O(1) in case of iterative implementation. In the case of recursive implementation, O(log n) recursion call stack space._

The time complexity of the binary search algorithm is O(log n). The best-case time complexity would be O(1) when the central index would directly match the desired value. The worst-case scenario could be the values at either extremity of the list or values not in the list. 

Binary Search is an example of **Divide and Conquer** Algorithm.