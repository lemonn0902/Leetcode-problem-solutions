// Last updated: 8/1/2025, 12:27:37 PM
class Solution {
public:
    int f(vector<vector<int>>& grid, int x,int y, vector<vector<int>>& dp){
        int m=grid.size();
        int n=grid[0].size();
        if(x<0||x>=m) return 1e9;
        if(y<0||y>=n) return 1e9;
        if(x==m-1 && y==n-1) return grid[x][y];
        if(dp[x][y]!=-1) return dp[x][y];
        //move down
        int d=f(grid, x+1,y,dp)+grid[x][y];
        //move right
        int r=f(grid, x, y+1, dp)+grid[x][y];
        dp[x][y]=min(d,r);
        return dp[x][y];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return f(grid,0,0,dp);
    }
};