// Last updated: 3/31/2026, 11:10:10 PM
1class Solution {
2public:
3    // int f(int i,int j, vector<vector<int>>& dp){
4    //     if(i==0 && j==0) return 1;
5    //     else if(i<0 || j<0) return 0;
6    //     if(dp[i][j]!=-1) return dp[i][j];
7    //     //go up
8    //     int up=f(i-1,j,dp);
9    //     //go left
10    //     int left=f(i,j-1,dp);
11    //     return dp[i][j]=up+left;
12    // }
13    int uniquePaths(int m, int n) {
14        vector<vector<int>> dp(m,vector<int>(n,0));
15        //return f(m-1,n-1,dp);
16        dp[0][0]=1;
17        for(int i=0;i<m;i++){
18            for(int j=0;j<n;j++){
19                if(i==0&&j==0) continue;
20                int up=0, left=0;
21                if(i>0) up=dp[i-1][j];
22                if(j>0) left=dp[i][j-1];
23                dp[i][j]=up+left;
24            }
25        }
26        return dp[m-1][n-1];
27    }
28};