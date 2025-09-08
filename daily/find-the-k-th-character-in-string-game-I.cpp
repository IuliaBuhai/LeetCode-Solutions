class Solution {
public:
    char nextChar(char c){
        if(c == 'z') return 'a';
        return c+1;    
        }
    char kthCharacter(int k) {
        string a= "a";
        while(a.size() <= k){
            string gen = "";
            for( char c : a){
                gen += nextChar(c);
            }
        a += gen;
     }
     return a[k-1];
    }
};
