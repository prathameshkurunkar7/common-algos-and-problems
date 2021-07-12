# Job Sequence Problem
Job Sequence is an example of **Greedy Algorithm**

## Problem:
Given an array of jobs where every job has a deadline associated profit if the job is finished before deadline.
It is also given that every job takes single unit of time,so the minimum possible deadline for any job is 1.
How to maximize total profit if only one job can be scheduled at a time.

## Example 1

| Jobs     | A | B | C | D | E |
| Deadline | 2 | 1 | 2 | 1 | 3 |
| Profit   |100| 19|27 |25 | 15|

Solution: C->A->E
Total Profit: 142

## Solution
1. Sort the jobs in descending order of profit.
2. Initialize the result sequence as first job in sorted jobs.
3. Do the following for n-1 jobs
    * If a current job can fit in the current result sequence without missing deadline,add current job in the result.
    * Else Ignore the job.

## Example 2

**Initial Jobs Table**

| Jobs     | A | B | C | D | E |
| Deadline | 2 | 1 | 2 | 1 | 3 |
| Profit   |100| 19|27 |25 | 15|

**After Step 1**

| Jobs     | A | C | D | B | E |
| Deadline | 2 | 2 | 1 | 1 | 3 |
| Profit   |100| 27|25 |19 | 15|

**In Step 2 and 3**
Iterate through First job (A) which has deadline of 2, put it in farthest spot from all the available slots(0-1,1-2) which is 1-2.

As Job C enters, with deadline 2, its farthest slot is already occupied by A. So the only remaining slot is 0-1.

Skip job D -- slot already taken
Skip job B -- slot already taken

Put job E -- After job A. i.e. 2-3

__Time Complexity__: O(n*n)