// Last updated: 8/2/2026, 9:43:14 AM
1class Solution {
2public:
3    int f(vector<int>& piles, int i, int j, vector<vector<int>>& dp){
4        if(i>j) return 0;
5        if(dp[i][j]!=-1) return dp[i][j];
6        return dp[i][j]=max(piles[i]-f(piles,i+1,j,dp), piles[j]-f(piles,i,j-1,dp));
7    }
8    bool stoneGame(vector<int>& piles) {
9        int n=piles.size();
10        vector<vector<int>> dp(n,vector<int>(n,-1));
11        return f(piles, 0, n-1, dp)>0;
12    }
13};