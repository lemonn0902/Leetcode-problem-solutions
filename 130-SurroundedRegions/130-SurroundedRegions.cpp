// Last updated: 8/18/2025, 12:58:56 AM
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        vector<vector<int>> vis(n, vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O'&&(i==0||i==n-1||j==0||j==m-1)){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty()){
            auto curr= q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=curr.first+dx[i];
                int ncol=curr.second+dy[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&board[nrow][ncol]=='O'&&vis[nrow][ncol]==0){
                    vis[nrow][ncol]=1;
                    q.push({nrow, ncol});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O'&&vis[i][j]==0) board[i][j]='X';
            }
        }
        
    }
};