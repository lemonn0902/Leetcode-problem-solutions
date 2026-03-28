// Last updated: 3/28/2026, 11:13:56 PM
1class Solution {
2public:
3    int f(int index, vector<int>& dp, vector<int>& nums){
4        if(index==0) return nums[0];
5        if(index == 1) return max(nums[0], nums[1]);
6
7        if(dp[index]!=-1) return dp[index];
8        //rob
9        int r=f(index-2, dp, nums)+nums[index];
10        //skip
11        int s=f(index-1, dp, nums);
12        return dp[index]= max(r,s);
13
14    }
15    int rob(vector<int>& nums) {
16        int n=nums.size();
17        vector<int> dp(n,-1);
18        return f(n-1, dp, nums);
19    }
20};