class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) { 
        vector<unordered_set<char>>boxes(9);       
        for(int i = 0; i <= 8 ; i++){
            unordered_set<char> rowSet;
            unordered_set<char> colSet;
            
                for(int j = 0; j<= 8; j++){
                if(board[i][j] != '.'){
                    if(rowSet.count(board[i][j])) return false;
                    rowSet.insert(board[i][j]);

                    int boxNum= (i/3)*3 + (j/3);
                    if(boxes[boxNum].count(board[i][j])) return false;
                    boxes[boxNum].insert(board[i][j]);
                }
                if(board[j][i] != '.'){
                    if(colSet.count(board[j][i])) return false;
                    colSet.insert(board[j][i]);
                }
            }
        }   
    return true;
    }
};
