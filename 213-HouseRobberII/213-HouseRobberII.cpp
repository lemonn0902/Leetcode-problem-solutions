// Last updated: 8/5/2025, 8:08:08 PM
class Solution {
public:
    int robLinear(vector<int>& nums, int index, int start, int end, vector<int>&dp){
        if(index==start) return nums[start];
        if(index==start+1) return max(nums[start], nums[start+1]);

        if(dp[index-start]!=-1) return dp[index-start];
        int rob=robLinear(nums, index-2,start,end,dp)+nums[index];
        int skip=robLinear(nums, index-1, start,end,dp);
        return dp[index-start]=max(rob,skip);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n-1,-1);
        vector<int> dp2(n-1, -1);

        int case1= robLinear(nums, n-2, 0, n-2,dp1);
        int case2= robLinear(nums, n-1, 1, n-1,dp2);
        return max(case1, case2);
    }
};