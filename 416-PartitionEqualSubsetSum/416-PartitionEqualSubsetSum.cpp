// Last updated: 5/1/2025, 12:23:39 AM
class Solution {
public:
    bool f(int index, int target, vector<int>& nums, vector<vector<int>>& dp){
        if(target==0 ) return true;
        if(index==0) return(nums[index]==target);
        if(dp[index][target]!=-1) return dp[index][target];
        int notTake= f(index-1, target, nums, dp);
        int take= false;
        if(target>=nums[index]) take=f(index-1, target-nums[index], nums, dp);
        return dp[index][target] =notTake | take; 

    }
    bool canPartition(vector<int>& nums) {
        int target=0, total=0;
        int n= nums.size();
        
        
        for(int i=0;i<nums.size();i++)
        total+=nums[i];
        target=total/2;
        vector<vector<int>> dp(n, vector<int>(target+1, -1));
        if(total%2!=0) return false;
        
        else return f(n-1,target, nums, dp);
        
    }
};