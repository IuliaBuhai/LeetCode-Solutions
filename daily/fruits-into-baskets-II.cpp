//3477. Fruits Into Baskets II
//Time complexity : O(n^2)
//Space complexity : O(1)
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int unplaced = 0;
        for(int i = 0; i < n; i++){
            int fruit = fruits[i];
            for(int j = 0; j < n; j++){
                if(baskets[j] >= fruit){
                    fruits[i] = 0;
                    baskets[j] = 0;
                    break;

                }
            }
            if(fruits[i]!= 0){
                unplaced++;
            }
        }
        return unplaced;
    }
};
