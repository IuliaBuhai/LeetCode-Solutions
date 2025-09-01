class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxD = -1; 
        int maxA = -1;
       for(int i = 0 ; i < dimensions.size(); i++){
            int d = dimensions[i][1] * dimensions[i][1] + dimensions[i][0] * dimensions[i][0];
            if( d > maxD ||( dimensions[i][1]*dimensions[i][0] > maxA && d== maxD)){
                maxD = d;
                maxA = dimensions[i][1]*dimensions[i][0];
            }
       } 
       return maxA;
    }
};
