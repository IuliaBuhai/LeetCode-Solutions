//2264. Largest 3-Same-Digit Number in String
class Solution {
public:
    string largestGoodInteger(string num) {
        string solution = "-";
        for( int i = 0; i < num.size()-2; i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2] && solution[0] < num[i]){
                    solution[0] = num[i];

            }
        }
        if (solution == "-") return "";
        return string(3, solution[0]);
    }
};
