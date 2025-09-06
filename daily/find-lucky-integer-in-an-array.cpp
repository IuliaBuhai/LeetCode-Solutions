//1394. Find Lucky Integer in an Array
//Time complexity : O(n)
//Space complexity : O(1) 
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int solution = 0;
        vector<int>numbers(501, 0);
        for (int num : arr){
            numbers[num]++; 
        }
        for(int sol = arr.size()  ; sol > 0 ; sol--){
            if(numbers[sol] == sol ){
                solution = sol;
                break;
            }
        }

        return solution == 0 ? -1 : solution ;

    }
};
