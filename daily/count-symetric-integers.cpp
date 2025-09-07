class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            string s = to_string(i);
            int n = s.size();

            if(n%2 != 0) continue;
            int leftSum = 0, rightSum=0;
            for(int j = 0; j < n/2; j++ ) leftSum += s[j] -'0';
            for(int k = n/2; k <n; k++ ) rightSum += s[k] -'0';
            if(leftSum==rightSum) count++;
        }   
        return count;
    }
};
