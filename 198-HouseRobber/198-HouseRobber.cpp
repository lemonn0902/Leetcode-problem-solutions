// Last updated: 3/28/2026, 11:16:43 PM
1class Solution {
2public:
3    int f(vector<int>& nums, int n, vector<int>& dp){
4        //base case
5        if(n==0) return nums[0];
6        if(n==1) return max(nums[1],nums[0]);
7        if(dp[n]!=-1) return dp[n];
8        //rob
9        int rob=nums[n]+f(nums, n-2,dp);
10        //not rob
11        int not_rob=f(nums, n-1,dp);
12        return dp[n]=max(rob, not_rob);
13    }
14    int rob(vector<int>& nums) {
15        int n=nums.size();
16        vector<int> dp(n,-1);
17        return f(nums,n-1,dp);
18    }
19};