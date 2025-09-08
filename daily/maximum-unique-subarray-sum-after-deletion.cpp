class Solution {
public:
    int maxSum(vector<int>& nums) {
        int mx = nums[0];
        unordered_set<int> seen;
        int sum = 0;
        
        for (int num : nums) {
            mx = max(mx, num);
            if (num >= 0 && seen.insert(num).second) {
                sum += num;
            }
        }
        
        return sum > 0 ? sum : mx;
    }
};
