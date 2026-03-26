// Last updated: 3/26/2026, 11:20:12 PM
1class Solution {
2public:
3    int f(int start,int n, vector<int>& cost,vector<int>& dp ){
4        if(start>=n) return 0;
5        if(dp[start]!=-1) return dp[start];
6        int a=f(start+1,n,cost,dp);
7        int b=f(start+2,n,cost,dp);
8        return dp[start]=cost[start]+min(a,b);
9    }
10    int minCostClimbingStairs(vector<int>& cost) {
11        int n=cost.size();
12        vector<int> dp(n,-1);
13        int start_at_0= f(0,n,cost,dp);
14        int start_at_1= f(1,n,cost,dp);
15        return min(start_at_0, start_at_1);
16    }
17};