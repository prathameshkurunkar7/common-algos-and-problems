#  Selection Sort

Selection Sort is the child's algorithm:simple, but inefficient. Find the smallest element using linear scan and move it to the front(swapping with front element). Then find the second smallest and move it, again doing linear scan. Continue to do this until all elements are in place.

_Time Complexity(Avg and Worst): O(n^2)_

_Space complexity: O(1)_

_Sorting In Place: Yes_

_Stable: No(default is not, can be made stable)_

The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation. 