// Last updated: 6/17/2025, 1:23:02 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans=true;
        //check rows 
        for(int row=0;row<board.size();row++){
            unordered_set<char> rows;
            int count=0;
            for(int col=0;col<board.size();col++){
                if(board[row][col]!='.'){
                    count++;
                    rows.insert(board[row][col]);
                }
            }
            if(rows.size()!=count){
                ans=false;
                break;
            }
            
        }
        //check columns
        for(int col=0;col<board.size();col++){
            unordered_set<char> cols;
            int count=0;
            for(int row=0;row<board.size();row++){
                if(board[row][col]!='.'){
                    count++;
                    cols.insert(board[row][col]);
                }
            }
            if(cols.size()!=count){
                ans=false;
                break;
            }
        }
        //check sub boxes
        for (int boxRow = 0; boxRow < 3; ++boxRow) {
            for (int boxCol = 0; boxCol < 3; ++boxCol) {
                unordered_set<char> seen;
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        char c = board[boxRow * 3 + i][boxCol * 3 + j];
                        if (c != '.') {
                            if (seen.count(c)) ans= false;
                            seen.insert(c);
                        }
                    }
                }
            }
        }
        return ans;
    }
};