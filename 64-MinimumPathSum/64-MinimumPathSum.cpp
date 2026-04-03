// Last updated: 4/3/2026, 3:38:55 PM
1class Solution {
2public:
3    // int f(vector<vector<int>>& grid, int i,int j,vector<vector<int>>& dp){
4    //     if(i==0&&j==0) return grid[i][j];
5    //     if(i<0||j<0) return 1e7;
6    //     if(dp[i][j]!=-1) return dp[i][j];
7    //     int up=f(grid,i-1,j,dp)+grid[i][j];
8    //     int left=f(grid,i,j-1,dp)+grid[i][j];
9    //     return dp[i][j]=min(up,left);
10    // }
11    int minPathSum(vector<vector<int>>& grid) {
12        int m=grid.size();
13        int n=grid[0].size();
14        vector<vector<int>> dp(m, vector<int>(n,0));
15        //return f(grid,m-1,n-1,dp);
16        dp[0][0]=grid[0][0];
17        for(int i=0;i<m;i++){
18            for(int j=0;j<n;j++){
19                if(i==0&&j==0) continue;
20                int up=INT_MAX, left=INT_MAX;
21                if(i>0) up=dp[i-1][j]+grid[i][j];
22                if(j>0) left=dp[i][j-1]+grid[i][j];
23                dp[i][j]=min(up,left);
24            }
25        }
26        return dp[m-1][n-1];
27    }
28};