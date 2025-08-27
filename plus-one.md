# Plus One

## Problem
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.

## Solution

- Iterate from last element to first
- If digit < 9 -> increment and return the array
- If digit == 9 -> set to 0 and iterate unit a digit < 9
- If all digits are 9 -> inster 1 at the beginning

## Complexity

- Time : 0(n)
- Space : 0(1)
 

