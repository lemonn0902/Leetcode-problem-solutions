// Last updated: 4/23/2025, 4:59:28 PM
class Solution {
public:
    int f(int i, int j,vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp ){
        //base case:
        if(i==0 && j==0 && obstacleGrid[i][j]==0){
            return 1;
        }
        if(i<0 || j<0){
            return 0;
        }
        if(obstacleGrid[i][j]==1)
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int r=f(i-1, j, obstacleGrid,dp);
        int l=f(i, j-1, obstacleGrid,dp);
        return dp[i][j]=l+r;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m= obstacleGrid.size();
        int n= obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return f(m-1,n-1, obstacleGrid, dp);
    }
};