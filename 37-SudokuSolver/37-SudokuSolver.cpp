// Last updated: 6/17/2025, 5:11:36 PM
class Solution {
public:
    bool isSafe( int row, int col, char digit, vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[row][i]==digit||board[i][col]==digit||board[3*(row/3) + i/3][3*(col/3) + i%3]==digit) return false;
        }
        return true;
    }
    bool backtrack(vector<vector<char>>& board ){
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]=='.'){
                    for(char digit='1';digit<='9';digit++){
                        if(isSafe(row, col, digit, board)){
                            board[row][col]=digit;
                        if(backtrack(board)==true) return true;
                        else board[row][col]='.';
                        }
                        
                    }
                    return false;
                    backtrack(board);
                    board[row][col]='.';
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        backtrack(board);
    }
};