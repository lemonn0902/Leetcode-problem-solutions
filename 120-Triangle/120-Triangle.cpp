// Last updated: 4/3/2026, 4:20:13 PM
1class Solution {
2public:
3    // int f(int i, int j,vector<vector<int>>& triangle, int n, vector<vector<int>>& dp){
4    //     if(i==n-1) return triangle[i][j];
5    //     if(dp[i][j]!=-1) return dp[i][j];
6    //     int d= triangle[i][j] + f(i+1, j,triangle,n, dp );
7    //     int dg= triangle[i][j] + f(i+1, j+1, triangle, n, dp);
8    //     return dp[i][j]= min(d,dg);
9    // }
10    int minimumTotal(vector<vector<int>>& triangle) {
11        
12        int n=triangle.size();
13        vector<vector<int>> dp(n, vector<int> (n,0));
14        //return f(0,0, triangle,n, dp); #memoization
15        //base cases:
16        for(int j=0;j<n;j++){
17            dp[n-1][j]= triangle[n-1][j];
18        }
19        for(int i=n-2;i>=0;i--){
20            for(int j=i;j>=0;j--){
21                int d= triangle[i][j] + dp[i+1][j];
22                int dg = triangle[i][j] + dp[i+1][j+1];
23                dp[i][j]= min(d,dg);
24            }
25        }
26        return dp[0][0];
27    }
28};