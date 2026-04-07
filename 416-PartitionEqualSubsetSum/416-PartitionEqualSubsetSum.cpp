// Last updated: 4/7/2026, 11:51:24 PM
1class Solution {
2public:
3    bool f(vector<int>& nums,int index, int target, vector<vector<int>>& dp){
4        if(target==0) return true;
5        if(index==0) return nums[index]==target;
6        if(dp[index][target]!=-1) return dp[index][target];
7        bool take=false;
8        if(nums[index]<=target) take=f(nums,index-1, target-nums[index],dp);
9        bool notTake=f(nums,index-1,target,dp);
10        return dp[index][target]=take|notTake;
11    }
12    bool canPartition(vector<int>& nums) {
13        int tot=0;
14        int target=0;
15        for(int i=0;i<nums.size();i++){
16            tot+=nums[i];
17        }
18        target=tot/2;
19        int n=nums.size();
20        if(tot%2!=0) return false;
21        vector<vector<int>> dp(n,vector<int>(target+1,-1));
22        return f(nums,n-1,target,dp);
23    }
24};