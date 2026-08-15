// Last updated: 8/16/2026, 1:10:16 AM
1class Solution {
2public:
3    int f(vector<int>& nums, vector<vector<int>>& dp, int i, int prev){
4        int n = nums.size();
5        if(i==n) return 0;
6        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
7        int notake=f(nums,dp,i+1,prev);
8        int take=0;
9        if(prev==-1||nums[i]>nums[prev]){
10            take=1+f(nums,dp,i+1,i);
11        }
12        return dp[i][prev+1]=max(take, notake);
13    }
14    int lengthOfLIS(vector<int>& nums) {
15        int n=nums.size();
16        vector<vector<int>> dp(n,vector<int>(n+1,-1));
17        return f(nums, dp, 0,-1);
18    }
19};