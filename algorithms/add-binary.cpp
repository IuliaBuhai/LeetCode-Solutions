class Solution {
public:
    string addBinary(string a, string b) {
        int len_a = a.size();
        int len_b = b.size();

        if (len_a > len_b) {
            b.insert(0, len_a - len_b, '0');
        } else {
            a.insert(0, len_b - len_a, '0');
        }

        len_a = a.size();
        len_b = b.size();
        int remainder = 0;
        string result;

        for (int i = max(len_a, len_b) - 1; i >= 0; i--) {
            if (a[i] == '1' && b[i] == '1') {
                if (remainder == 1) {
                    result.insert(result.begin(), '1'); 
                } else {
                    result.insert(result.begin(), '0'); 
                }
                remainder = 1;
            }
            else if (a[i] == '1' || b[i] == '1') {
                if (remainder == 1) {
                    result.insert(result.begin(), '0'); 
                    remainder = 1;
                } else {
                    result.insert(result.begin(), '1'); 
                    remainder = 0;
                }
            }
            else { 
                if (remainder == 1) {
                    result.insert(result.begin(), '1'); 
                    remainder = 0;
                } else {
                    result.insert(result.begin(), '0'); 
                }
            }
        }

        if (remainder == 1) {
            result.insert(result.begin(), '1');
        }

        return result;
    }
};
