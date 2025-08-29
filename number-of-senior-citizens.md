# Number of Senior Citizens

## Problem
You are given a 0-indexed array of strings details. Each element of details provides information about a given passenger compressed into a string of length 15. The system is such that:

The first ten characters consist of the phone number of passengers.
The next character denotes the gender of the person.
The following two characters are used to indicate the age of the person.
The last two characters determine the seat allotted to that person.
Return the number of passengers who are strictly more than 60 years old.

## Solution
- iterate trough each element of the vector
- at each element select the two positions that represent the age
- convert that string to a number and compare it to 60
- contorise each serior citizen and return it at the eng

## Complexity
- Time : O(n)
- Space : O(1)
