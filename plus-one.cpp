class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      //first we get the size of the vector, the fastest and best way to acces the last element
        int size= digits.size();
        //after that we iterate trough the vector from the last element to the first, but we stop the first time we get a number lower than 9, vuz that means we can just increment it by 1. If it is a 9, we continue until we find a number lower than 9 
        for(int i = size-1; i >= 0 ; i--){
            if( digits[i] < 9 ){
                digits[i]++;
                return digits;
            }
        //if nothing is returned we acces this part of the code that adds a 0 
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1); 
        return digits;
    }
};

// Runtime : 0ms
// Memory : 11.50 MB
