// Last updated: 8/11/2026, 10:40:35 PM
1class Solution {
2public:
3    int f(vector<int>& nums,vector<int>& dp,int i){
4        if(i==0) return nums[i];
5        if(i==1) return max(nums[1], nums[0]);
6        if(dp[i]!=-1) return dp[i];
7        int notrob= f(nums, dp, i-1);
8        int rob = nums[i]+f(nums, dp, i-2);
9        return dp[i]= max(rob, notrob);
10    }
11    int rob(vector<int>& nums) {
12        int n=nums.size();
13        vector<int> dp(n,-1);
14        return f(nums, dp, n-1);
15    }
16};