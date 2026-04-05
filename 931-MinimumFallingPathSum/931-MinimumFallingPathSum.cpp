// Last updated: 4/5/2026, 12:45:22 PM
1class Solution {
2public:
3    // int f(int i, int j, vector<vector<int>>& matrix, int n, vector<vector<int>>& dp){
4    //     //base case:
5    //     if(i==n-1) return matrix[i][j];
6    //     if(dp[i][j]!=-1) return dp[i][j];
7    //     int d= f(i+1, j, matrix, n,dp) +matrix[i][j];
8    //     int left = (j > 0) ? f(i+1, j-1, matrix, n,dp) +matrix[i][j] : INT_MAX;
9    //     int right = (j < n-1) ? f(i+1, j+1, matrix, n,dp) +matrix[i][j]: INT_MAX;
10
11    //     return dp[i][j]=min(d, min(left,right));
12
13    // }
14    int minFallingPathSum(vector<vector<int>>& matrix) {
15        
16        int n= matrix.size();
17        vector<vector<int>> dp(n, vector<int>(n,0));
18        // int ans=INT_MAX; #memoization approach
19        // for(int j=0;j<n;j++)
20        //     ans= min(ans, f(0,j,matrix,n,dp));
21        // return ans;
22        //base case: 
23        for(int j=0;j<n;j++){
24            dp[n-1][j]=matrix[n-1][j];
25        }
26        for(int i=n-2;i>=0;i--){
27            for(int j=n-1;j>=0;j--){
28                int d= dp[i+1][j]  +matrix[i][j];
29                int left = (j > 0) ? dp[i+1][j-1] +matrix[i][j] : INT_MAX;
30                int right = (j < n-1) ? dp[i+1][j+1] +matrix[i][j]: INT_MAX;
31                dp[i][j]= min(d, min(left, right));
32            }
33        }
34        int ans=INT_MAX;
35        for(int j=0;j<n;j++){
36            ans= min(ans, dp[0][j]);
37        }
38        return ans;
39    }
40};