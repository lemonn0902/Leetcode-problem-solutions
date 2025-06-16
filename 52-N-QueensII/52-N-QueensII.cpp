// Last updated: 6/16/2025, 1:34:42 PM
class Solution {
public:
    bool isSafe(int row, int col, vector<string>& board, int n){
        //check same column 
        for(int i=0;i<row;i++){
            if(board[i][col]=='Q') return false;
        }
        //check upper-left diagnol
        for(int i=row-1,j=col-1;i >= 0 &&  j >= 0; i--, j--)
        {
            if (board[i][j] == 'Q') return false;
        }
        //check upper-right diagonal
        for(int i=row-1, j=col+1; i >= 0 &&  j<n; i--, j++){
            if (board[i][j] == 'Q') return false;
        }
        return true;
    }
    void backtrack(int n, int row, vector<vector<string>>& fin, vector<string>& board){
        if(row==n){
            fin.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(row,col, board,n)){
                board[row][col]='Q';
                backtrack(n, row+1, fin, board);
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> fin;
        vector<string> board(n, string(n, '.'));
        backtrack(n, 0, fin , board);
        return fin.size();
    }
};