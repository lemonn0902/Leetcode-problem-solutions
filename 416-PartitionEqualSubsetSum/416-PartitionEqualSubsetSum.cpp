// Last updated: 8/6/2025, 2:23:30 PM
class Solution {
public:
    bool f(vector<int>& nums,int index, int target, vector<vector<int>>& dp){
        if(target==0) return true;
        if(index==0) return nums[index]==target;
        if(dp[index][target]!=-1) return dp[index][target];
        bool take=false;
        if(nums[index]<=target) take=f(nums,index-1, target-nums[index],dp);
        bool notTake=f(nums,index-1,target,dp);
        return dp[index][target]=take|notTake;
    }
    bool canPartition(vector<int>& nums) {
        int tot=0;
        int target=0;
        for(int i=0;i<nums.size();i++){
            tot+=nums[i];
        }
        target=tot/2;
        int n=nums.size();
        if(tot%2!=0) return false;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return f(nums,n-1,target,dp);
    }
};