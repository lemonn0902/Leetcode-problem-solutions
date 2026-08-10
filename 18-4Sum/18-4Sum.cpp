// Last updated: 8/10/2026, 10:00:43 AM
1class Solution {
2public:
3    int f(vector<int>& nums, int i, int prev,vector<vector<int>>& dp ){
4        int n=nums.size();
5        if(i==n) return 0;
6        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
7        int noTake=f(nums,i+1,prev,dp);
8        int take=0;
9        if(prev==-1||nums[i]>nums[prev]){
10            take=1+f(nums,i+1,i,dp);
11        }
12        return dp[i][prev+1]=max(take, noTake);
13    }
14    int lengthOfLIS(vector<int>& nums) {
15        int n=nums.size();
16        vector<vector<int>> dp(n,vector<int>(n+1,-1));
17        return f(nums,0,-1,dp);
18    }
19};