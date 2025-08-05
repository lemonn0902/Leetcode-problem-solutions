// Last updated: 8/5/2025, 7:51:53 PM
class Solution {
public:
    int f(vector<int>& nums, int index,vector<int>& dp ){
        if(index==0){
            return nums[0];
        }
        if(index==1) return max(nums[0],nums[1]);
        if(dp[index]!=-1) return dp[index];
        //rob house
        int p=f(nums,index-2,dp)+nums[index];
        //dont rob
        int q=f(nums,index-1,dp);
        dp[index]=max(p,q);
        return dp[index];

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return f(nums, nums.size()-1,dp);
    }
};