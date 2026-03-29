// Last updated: 3/30/2026, 12:46:09 AM
1class Solution {
2public:
3    // int f(int n, vector<int>& dp){
4    //     if(n<=0) return 0;
5    //     if(n==1||n==2) return 1;
6    //     if(dp[n]!=-1) return dp[n];
7    //     return dp[n]=f(n-1,dp)+f(n-2,dp)+f(n-3,dp);
8    // }
9    int tribonacci(int n) {
10        if (n == 0)
11            return 0;
12        if (n == 1 || n == 2)
13            return 1;
14        int a = 0, b = 1, c = 1;
15        for (int i = 3; i <= n; i++) {
16            int d = a + b + c;
17            a = b;
18            b = c;
19            c = d;
20        }
21        return c;
22    }
23};