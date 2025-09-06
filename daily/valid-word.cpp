//3136. Valid Word
//Time Complexity : O(1)
//Space Complexity : O(1)
class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3) return false;
        
        string characters = "@#$";

        for( char c : characters){
            if(word.find(c) != string::npos) return false;
        }

        string vowel ="aeiouAEIOU";
        int vowels = 0;

        for( char v : vowel){
            if(word.find(v) != string::npos) vowels++;
        }

        if(vowels==0) return false;

        string consonant ="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
        int cons = 0;

        for( char con : consonant){
            if(word.find(con) != string::npos) cons++;
        }
        if(cons == 0 ) return false;

        return true;
    }
};
