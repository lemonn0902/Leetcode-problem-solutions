// Last updated: 8/18/2025, 12:22:33 PM
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n,0));
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1&&(i==0||j==0||i==m-1||j==n-1)){
                    vis[i][j]=1;
                    q.push({i,j});
                }
            }
        }
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        while(!q.empty()){
            auto pair=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nrow= pair.first+dx[i];
                int ncol= pair.second+dy[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    vis[nrow][ncol]=1;
                    q.push({nrow, ncol});
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1&& i>0 && i<m-1 && j>0 && j<n-1 && vis[i][j]==0){
                    ans++;
                }
            }
        }
        return ans;
  
    }
};