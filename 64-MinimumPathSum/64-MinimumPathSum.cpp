// Last updated: 4/24/2025, 5:38:23 PM
class Solution {
public:
    int f(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp){
        //base case: 
        if(i<0 || j<0) return 1e9;
        if(i==0 && j==0) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int left= f(grid, i, j-1, dp) + grid[i][j];
        int up= f(grid, i-1, j, dp) + grid[i][j];
        return dp[i][j]=min(left, up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m= grid.size();
        int n= grid[0].size();
        vector<vector<int>> dp(m, vector<int> (n,-1));
        return f(grid, m-1, n-1, dp);
    }
};