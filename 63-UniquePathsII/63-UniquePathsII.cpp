// Last updated: 4/3/2026, 3:12:50 PM
1class Solution {
2public:
3    int f(vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp,int i,int j){
4        if(i<0||j<0) return 0;
5        if(obstacleGrid[i][j]==1) return 0;
6        if(i==0&&j==0) return 1;
7
8        
9        
10        if(dp[i][j]!=-1) return dp[i][j];
11        //up
12
13        int up=f(obstacleGrid, dp,i-1,j);
14        //left
15
16        int left=f(obstacleGrid, dp,i,j-1);
17        return dp[i][j]=up+left;
18    }
19    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
20        int m=obstacleGrid.size();
21        int n=obstacleGrid[0].size();
22        vector<vector<int>> dp(m, vector<int>(n,-1));
23        return f(obstacleGrid,dp, m-1,n-1);
24    }
25};