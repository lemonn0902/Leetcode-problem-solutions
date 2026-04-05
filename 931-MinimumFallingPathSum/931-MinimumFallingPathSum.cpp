// Last updated: 4/5/2026, 12:51:12 PM
1class Solution {
2public:
3    // int f(vector<vector<int>>& matrix, int i,int j,vector<vector<int>>& dp){
4    //     int n=matrix.size();
5    //     if (j < 0 || j >= n) return 1e9;
6    //     if(i==n-1) return matrix[i][j];
7    //     if(dp[i][j]!=-1) return dp[i][j];
8    //     //down
9    //     int down=f(matrix,i+1,j,dp);
10    //     //diagonal left
11    //     int dgl=f(matrix,i+1,j-1,dp);
12    //     //diag right
13    //     int dgr=f(matrix,i+1,j+1,dp);
14    //     return dp[i][j]=matrix[i][j]+min({down,dgl,dgr});
15    // }
16    int minFallingPathSum(vector<vector<int>>& matrix) {
17        int n=matrix.size();
18        vector<vector<int>> dp(n,vector<int>(n,0));
19        // int mini=INT_MAX;
20        // for(int j=0;j<n;j++){
21        //     //start at any row
22        //     int pathsum=f(matrix,0,j,dp);
23        //     if(pathsum<mini) mini=pathsum;
24        // }
25        // return mini;
26        for(int j=0;j<n;j++){
27            dp[n-1][j]=matrix[n-1][j];
28        }
29        for(int i=n-2;i>=0;i--){
30            for(int j=n-1;j>=0;j--){
31                int d=dp[i+1][j];
32                int left=1e9, right=1e9;
33                if(j>0) left=dp[i+1][j-1];
34                if(j<n-1) right=dp[i+1][j+1];
35                dp[i][j]=matrix[i][j]+min({d,left,right});
36            }
37        }
38        int ans=1e9;
39        for(int j=0;j<n;j++) ans=min(ans,dp[0][j]);
40        return ans;
41    }
42};