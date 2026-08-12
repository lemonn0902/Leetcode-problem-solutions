// Last updated: 8/12/2026, 1:24:21 PM
1class Solution {
2public:
3    bool f(vector<int>& nums, vector<vector<int>>& dp, int idx, int target){
4        int n=nums.size();
5        if(target ==0) return true;
6        if(idx==n) return false;
7        if(dp[idx][target]!=-1) return dp[idx][target];
8        bool take=false;
9        if(nums[idx]<=target) take=f(nums,dp,idx+1,target-nums[idx]);
10        bool noTake=f(nums,dp,idx+1,target);
11        return dp[idx][target]=take|noTake;
12    }
13    bool canPartition(vector<int>& nums) {
14        int totSum=0;
15        int n=nums.size();
16        for(int n:nums) totSum+=n;
17        if(totSum%2!=0) return false;
18        int target= totSum/2;
19        vector<vector<int>> dp(n, vector<int>(target+1,-1));
20        return f(nums,dp,0,target);
21
22    }
23};