// Last updated: 3/26/2026, 10:29:27 PM
1class Solution {
2public:
3    int f(int n, vector<int>& dp){
4        if(n==0||n==1) return 1;
5        if(dp[n]!=-1) return dp[n];
6        int a=f(n-1,dp);
7        int b=f(n-2,dp);
8        return dp[n]=a+b;
9
10    }
11    int climbStairs(int n) {
12        vector<int> dp(n+1, -1);
13        return f(n, dp);
14         
15    }
16};