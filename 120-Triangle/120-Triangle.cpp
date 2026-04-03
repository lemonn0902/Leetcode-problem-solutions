// Last updated: 4/3/2026, 4:13:28 PM
1class Solution {
2public:
3    int f(int i, int j,vector<vector<int>>& triangle, int n, vector<vector<int>>& dp){
4        if(i==n-1) return triangle[i][j];
5        if(dp[i][j]!=-1) return dp[i][j];
6        int d= triangle[i][j] + f(i+1, j,triangle,n, dp );
7        int dg= triangle[i][j] + f(i+1, j+1, triangle, n, dp);
8        return dp[i][j]= min(d,dg);
9    }
10    int minimumTotal(vector<vector<int>>& triangle) {
11        
12        int n=triangle.size();
13        vector<vector<int>> dp(n, vector<int> (n,-1));
14        return f(0,0, triangle,n, dp);
15    }
16};