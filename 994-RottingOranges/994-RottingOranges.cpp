// Last updated: 8/10/2025, 4:36:37 PM
class Solution {
public:
    
    int maxTime=0;
    int bfs(vector<vector<int>>& grid, queue<tuple<int,int,int>> q){
        
        int m=grid.size();
        int n=grid[0].size();
        
        
        while(!q.empty()){
            
            auto [r,c,t]= q.front();
            
            
            q.pop();
            
            maxTime=max(t, maxTime);
            if (r - 1 >= 0 && grid[r - 1][c] == 1) {
                grid[r - 1][c] = 2;
                q.push({r - 1, c, t + 1});
            }
            if (r + 1 < m && grid[r + 1][c] == 1) {
                grid[r + 1][c] = 2;
                q.push({r + 1, c, t + 1});
            }
            if (c - 1 >= 0 && grid[r][c - 1] == 1) {
                grid[r][c - 1] = 2;
                q.push({r, c - 1, t + 1});
            }
            if (c + 1 < n && grid[r][c + 1] == 1) {
                grid[r][c + 1] = 2;
                q.push({r, c + 1, t + 1});
            }

        }
        
        return maxTime;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        queue<tuple<int,int,int>> q;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) q.push({i,j,0});
            }
        }
        int ans= bfs(grid, q);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return ans;
       
        
    }
};