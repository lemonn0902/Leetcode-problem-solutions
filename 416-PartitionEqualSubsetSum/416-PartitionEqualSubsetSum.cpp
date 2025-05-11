// Last updated: 5/12/2025, 12:48:23 AM
class Solution {
public:
    bool f(int index, vector<int>& nums, int target , vector<vector<int>>& dp){
        if(target==0) return true;
        if(index==0) return nums[0]==target;
        if(dp[index][target]!=-1) return dp[index][target];
        bool notTake = f(index-1, nums, target, dp);
        bool Take= false;
        if(target>= nums[index]){
            Take= f(index-1, nums, target-nums[index], dp);
        }
        return dp[index][target]= Take | notTake;
    }
    bool canPartition(vector<int>& nums) {
        int target =0, total=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        total+=nums[i];
        target=total/2;
        vector<vector<int>> dp(n, vector<int>(target+1, -1));
        if(total%2!=0) return false;
        else return f(n-1, nums, target, dp);
    }
};