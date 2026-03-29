// Last updated: 3/30/2026, 12:44:47 AM
1class Solution {
2public:
3    // int f(int n, vector<int>& dp){
4    //     if(n<=0) return 0;
5    //     if(n==1||n==2) return 1;
6    //     if(dp[n]!=-1) return dp[n];
7    //     return dp[n]=f(n-1,dp)+f(n-2,dp)+f(n-3,dp);
8    // }
9    int tribonacci(int n) {
10        if(n == 0) return 0;
11        if(n == 1 || n == 2) return 1;
12        vector<int> dp(n+1,0);
13        dp[0]=0;
14        dp[1]=1;
15        dp[2]=1;
16        for(int i=3;i<=n;i++){
17            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
18        }
19        return dp[n];
20    }
21};