// Last updated: 8/10/2025, 1:28:06 AM
class Solution {
public:
    void dfs(vector<vector<char>>& board, int x, int y){
        int m=board.size();
        int n=board[0].size();
        if(x<0||x>=m||y<0||y>=n) return;
        if(board[x][y]=='.') return;
        board[x][y]='.';
        dfs(board,x-1,y);
        dfs(board,x+1,y);
        dfs(board,x,y+1);
        dfs(board,x,y-1);
    }
    int countShips(vector<vector<char>>& board){
        int tot=0;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X'){
                    tot++;
                    dfs(board, i,j);
                }
            }
        }
        return tot;
    }
    int countBattleships(vector<vector<char>>& board) {
        return countShips(board);
    }
};