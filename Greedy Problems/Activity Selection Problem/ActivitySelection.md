# Activity Selection Problem
Activity Selection Problem is an example of **Greedy Algorithm**

## Problem:
Given 'n' number of activities with their respective start times and end times.
Select the maximum number of activites that can be performed by a single person, assuming that a person
can only work on a single activity at a given time.

## Example 1

| Activites  | A1 | A2 | A3 |
|------------|----|----|----|
| Start Time | 12 | 10 | 20 |
|------------|----|----|----|
| End Time   | 25 | 20 | 30 |

Solution: A2->A3
Activity Count: 2

**Explanation**: Selected A2 first(least finish time).As it ends on 20 and A1 starts at 12, A1 cannot be selected. But A3 starts at 20,so that is selected.

## Solution
1. Sort the activities based on their finish times in ascending order.
2. Select the first activity from the sorted array.
3. Start from 2nd activity
    * Check of start time of this activity is greater than or equal to end time of previously selected activity.
    * If yes, then increment the activity count.

## Example 2

**Initial Activities Table**

| Activites  | A1 | A2 | A3 | A4 | A5 | A6 |
|------------|----|----|----|----|----|----|
| Start Time |  0 | 3  | 1  | 5  | 5  | 8  |
|------------|----|----|----|----|----|----|
| End Time   | 6  | 4  | 2  | 9  |  7 | 9  |

**After Step 1**

| Activites  | A3 | A2 | A1 | A5 | A6 | A4 |
|------------|----|----|----|----|----|----|
| Start Time |  1 | 3  | 0  | 5  | 8  | 5  |
|------------|----|----|----|----|----|----|
| End Time   | 2  | 4  | 6  | 7  | 9  | 9  |

**After Step 2**
A3 is selected
Total: 1

**After Step 3**
A3->A2->A5->A6 are selected one by one.
Total: 4

__Time Complexity__:
* For Sorted Input: O(n)
* For Unsorted Input: O(nlogn)

n = number of activities.