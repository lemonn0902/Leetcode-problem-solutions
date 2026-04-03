// Last updated: 4/3/2026, 3:18:41 PM
1class Solution {
2public:
3    // int f(vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp,int i,int j){
4    //     if(i<0||j<0) return 0;
5    //     if(obstacleGrid[i][j]==1) return 0;
6    //     if(i==0&&j==0) return 1;
7    //     if(dp[i][j]!=-1) return dp[i][j];
8    //     //up
9    //     int up=f(obstacleGrid, dp,i-1,j);
10    //     //left
11    //     int left=f(obstacleGrid, dp,i,j-1);
12    //     return dp[i][j]=up+left;
13    // }
14    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
15        int m=obstacleGrid.size();
16        int n=obstacleGrid[0].size();
17        vector<vector<int>> dp(m, vector<int>(n,0));
18        //return f(obstacleGrid,dp, m-1,n-1);
19        if(obstacleGrid[0][0] == 1) return 0;
20        dp[0][0]=1;
21        for(int i=0;i<m;i++){
22            for(int j=0;j<n;j++){
23                if(i==0&&j==0) continue;
24                if(obstacleGrid[i][j]==1){ 
25                    dp[i][j]=0;
26                    continue;
27                }
28                int up=0, left=0;
29                if(i>0) up=dp[i-1][j];
30                if(j>0) left=dp[i][j-1];
31                dp[i][j]=up+left;
32            }
33        }
34        return dp[m-1][n-1];
35    }
36};