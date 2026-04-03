// Last updated: 4/3/2026, 3:33:31 PM
1class Solution {
2public:
3    int f(vector<vector<int>>& grid, int i,int j,vector<vector<int>>& dp){
4        if(i==0&&j==0) return grid[i][j];
5        if(i<0||j<0) return 1e7;
6        if(dp[i][j]!=-1) return dp[i][j];
7        int up=f(grid,i-1,j,dp)+grid[i][j];
8        int left=f(grid,i,j-1,dp)+grid[i][j];
9        return dp[i][j]=min(up,left);
10    }
11    int minPathSum(vector<vector<int>>& grid) {
12        int m=grid.size();
13        int n=grid[0].size();
14        vector<vector<int>> dp(m, vector<int>(n,-1));
15        return f(grid,m-1,n-1,dp);
16    }
17};