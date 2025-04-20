// Last updated: 4/20/2025, 10:40:49 PM
class Solution {
public:
    int f(int index, vector<int>& dp, vector<int>& nums){
        if(index==0) return nums[0];
        if(index == 1) return max(nums[0], nums[1]);

        if(dp[index]!=-1) return dp[index];
        //rob
        int r=f(index-2, dp, nums)+nums[index];
        //skip
        int s=f(index-1, dp, nums);
        return dp[index]= max(r,s);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return f(n-1, dp, nums);
    }
};