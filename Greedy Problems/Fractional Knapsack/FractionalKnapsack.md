# Fractional Knapsack Problem
Fractional Knapsack is an example of **Greedy Algorithm**

## Problem:
Fill knapsack(bag) such that value is maximum and total weights is atmost W(capacity).
In Fractional Knapsack, items can be broken down to maximise knapsack value.


## Solution
1. Calculate the ratio(weight/value) for each item.
2. Sort the items in descending order based on ratio.
3. Fetch the item with highest ratio and add it until we cannot add the next item as whole.
4. If previous step's case arises add the next item as much(fraction) as we can.


## Example 1

Capacity: 50

| Item     | A  | B  | C  |
| Weight   | 10 | 20 | 30 |
| Value    | 60 |100 |120 |
| Ratio    | 6  | 5  | 4  |

Solution: 
Select A first(highest ratio), with weight 10. So remaining Capacity: 50-10-> 40. Value = 60.
Select B with weight 20. So remaining Capacity: 50-10-> 20. Value = 160
Select C with weight 30. But remaining Capacity is 20. Hence select only a fraction of item C.
2/3rd of C is selected, i.e 20 weight is selected from 30 and value also becomes 2/3rd, i.e 80.

Hence Resultant Value = 240.

__Time Complexity__: O(nlogn)
n = number of items