class Solution {
public:
    int maximum69Number(int num) {
        if (num == 9 || num == 99 || num == 999 || num == 9999) 
            return num;
            
        if ((num / 1000) % 10 == 6) {           
            num = num % 1000 + 9000;
        } 
        else if ((num / 100) % 10 == 6) {       
            num = (num / 1000) * 1000 + 900 + num % 100;
        } 
        else if ((num / 10) % 10 == 6) {        
            num = (num / 100) * 100 + 90 + num % 10;
        } 
        else if (num % 10 == 6) {              
            num += 3;
        }
        return num;
    }
};
