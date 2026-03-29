// Last updated: 3/30/2026, 12:41:28 AM
1class Solution {
2public:
3    int f(int n, vector<int>& dp){
4        if(n<=0) return 0;
5        if(n==1||n==2) return 1;
6        if(dp[n]!=-1) return dp[n];
7        return dp[n]=f(n-1,dp)+f(n-2,dp)+f(n-3,dp);
8    }
9    int tribonacci(int n) {
10        vector<int> dp(n+1,-1);
11        return f(n,dp);
12    }
13};