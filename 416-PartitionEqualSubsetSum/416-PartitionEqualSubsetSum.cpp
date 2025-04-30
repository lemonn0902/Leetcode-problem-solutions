// Last updated: 5/1/2025, 12:35:07 AM
class Solution {
public:
    // bool f(int index, int target, vector<int>& nums, vector<vector<int>>& dp){
    //     if(target==0 ) return true;
    //     if(index==0) return(nums[index]==target);
    //     if(dp[index][target]!=-1) return dp[index][target];
    //     int notTake= f(index-1, target, nums, dp);
    //     int take= false;
    //     if(target>=nums[index]) take=f(index-1, target-nums[index], nums, dp);
    //     return dp[index][target] =notTake | take; 

    // }
    bool canPartition(vector<int>& nums) {
        int target=0, total=0;
        int n= nums.size();
        
        
        for(int i=0;i<nums.size();i++)
        total+=nums[i];
        target=total/2;
        vector<vector<bool>> dp(n, vector<bool>(target+1, 0));
        if(total%2!=0) return false;
        
        else {
            //base case:
            for(int i=0;i<n;i++){
                dp[i][0]= true;
            }
            if (nums[0] <= target) dp[0][nums[0]] = true;

            for( int i=1;i<n;i++){
                for(int t=1;t<=target;t++){
                    bool notTake= dp[i-1][t];
                    bool take= false;
                    if(t>=nums[i]) take=dp[i-1][t-nums[i]];
                    dp[i][t]= take | notTake;
                }
            }
        }
        return dp[n-1][target];
        
    }
};