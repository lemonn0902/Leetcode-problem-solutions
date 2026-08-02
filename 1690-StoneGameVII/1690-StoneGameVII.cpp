// Last updated: 8/2/2026, 12:04:16 PM
1class Solution {
2public:
3    int f(vector<int>& stones,vector<vector<int>>& dp, int i , int j, vector<int>& prefixSum ){
4        if(i>j) return 0;
5        if(dp[i][j]!=-1) return dp[i][j];
6        int total=prefixSum[j+1]-prefixSum[i];
7        int left = total-stones[i]- f(stones, dp, i+1,j,prefixSum);
8        int right = total-stones[j]- f(stones,dp,i,j-1,prefixSum);
9        return dp[i][j]=max(left, right);
10    }
11    int stoneGameVII(vector<int>& stones) {
12        int n=stones.size();
13        vector<vector<int>> dp(n,vector<int>(n,-1));
14        vector<int> prefixSum(n+1,0);
15        for(int i=0;i<n;i++){
16            prefixSum[i+1]=prefixSum[i]+stones[i];
17        }
18        
19        return f(stones, dp, 0 , n-1,prefixSum );
20    }
21};