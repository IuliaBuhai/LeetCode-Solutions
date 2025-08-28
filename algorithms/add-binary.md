# Add Binary

## Problem
Given two binary strings a and b, return their sum as a binary string.

## Solution
- Make both strings the same size by completing the smaller one with 0's at the beggining
- Iterate from the last digit to the first one
- If both digits are one, depending on the remainder, that initally is 0, add the digit to the result and set remainder to 1
- If one of the digits is 1, depending on the remainder, add the digit to the result
- If both are 0, just complete the result depending on the remainder

## Complexity
- Time : O(n)
- Space : 0(1)
